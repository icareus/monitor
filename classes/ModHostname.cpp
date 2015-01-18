
#include "ModHostname.hpp"
#include <unistd.h>

ModHostname::ModHostname(void) {
	AMonitorModule::_name = "Hostname/Login";
	this->refresh();
}

void ModHostname::refresh(){
	char	buff[256];

	gethostname(buff, sizeof buff);
	AMonitorModule::_map["Hostname"] = buff;
	getlogin_r(buff, sizeof buff);
	AMonitorModule::_map["Login"] = buff;
}

ModHostname::~ModHostname() {
}
