
#include "MonitorDisplay.hpp"

MonitorDisplay::MonitorDisplay(void) {
	_modList.push_back(new ModHostname);
	_modList.push_back(new ModOS);
//	_modList.push_back(new ModTime);
	initscr();
}

MonitorDisplay::~MonitorDisplay(void) {
	endwin();
}
