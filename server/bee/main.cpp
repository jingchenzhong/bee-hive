//
// Created by IntelliJ IDEA.
// User: AppleTree
// Date: 16/9/26
// Time: 上午8:02
// To change this template use File | Settings | File Templates.
//

#include "core.h"
#include "configloader.h"
#include "commandfunction.h"
#include "beehandler.h"

//jemalloc
#define JEMALLOC_NO_DEMANGLE
#include "jemalloc.h"

// 重新定义C++的内存分配函数，由jemalloc来进行内存分配
void* operator new(size_t size){
	return je_malloc(size);
}
void* operator new(size_t size, const std::nothrow_t& nothrow_value){
	return je_malloc(size);
}
void operator delete(void* p){
	je_free(p);
}
void* operator new[](size_t size){
	return je_malloc(size);
}
void* operator new[](size_t size, const std::nothrow_t& nothrow_value){
	return je_malloc(size);
}
void operator delete[](void* p){
	je_free(p);
}

USING_NS_HIVE;

static char defaultConfigFile[] = "bee.ini";

int main(int argc, char *argv[])
{
    daemon(1, 1);

	srand(time(NULL));
	char* configFile = defaultConfigFile;
	if( argc > 1 ){
		configFile = argv[1];
	}
	Token::TokenMap config;
	parseConfig(configFile, config);
	std::string cpp_log_file = config["log_file"] + "_" + config["module_type"] + "_" + config["module_index"] + ".log";
	openCppLog(cpp_log_file);
	// 使用默认的信号处理
	defaultSignalHandle();
	// 创建单例管理器
	BeeHandler::createInstance();
	MainWorker::createInstance();
	// 初始化配置
	loadConfig(config);
	MainWorker::getInstance()->update();
	LOG_INFO("main loop exit ...");
	MainWorker::destroyInstance();

	return 0;
}