
#include "ModHostname.hpp"
#include <unistd.h>

ModHostname::ModHostname(void) {
	AMonitorModule::_name = "Hostname/Login";
	this->refresh();
}

void ModHostname::refresh(){
	AMonitorModule::_map["Login"] = getlogin();
}

ModHostname::~ModHostname() {
}
