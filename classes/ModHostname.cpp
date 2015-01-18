
#include "ModHostname.hpp"
#include <unistd.h>

ModHostname::ModHostname(void) {
	AMonitorModule::_name = "Hostname/Login";
	this->refresh();
}

void ModHostname::refresh(){
	char	hostname[256];
	gethostname(hostname, sizeof hostname);

	AMonitorModule::_map["Login"] = getlogin();
	AMonitorModule::_map["Hostname"] = hostname;
}

ModHostname::~ModHostname() {
}
