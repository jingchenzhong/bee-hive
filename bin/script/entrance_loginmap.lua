--
-- Created by IntelliJ IDEA.
-- User: AppleTree
-- Date: 2017/6/1
-- Time: 上午12:03
-- To change this template use File | Settings | File Templates.
--

local path = require("script.path")

local config = {
	log_level = "debug";	-- { "trace", "debug", "info", "warn", "error", "fatal" }
	path = path;
	groups = {

	};
	moduleName = "loginmap";
	dataRoot = "data";
	logRoot = "log";
}
package.loaded["config"] = config

require("script.main")
require("loginmap")
