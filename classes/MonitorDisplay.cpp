
#include "MonitorDisplay.hpp"

MonitorDisplay::MonitorDisplay(void) {
	_modList.push_front(new ModHostname);
}

MonitorDisplay::~MonitorDisplay(void) {
}
