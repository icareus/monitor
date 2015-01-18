
#include "AMonitorModule.hpp"

AMonitorModule::AMonitorModule() {
	std::cout << "a\n";
}

AMonitorModule::~AMonitorModule() {}

void	AMonitorModule::start(void) {}
void	AMonitorModule::refresh(void) {}
void	AMonitorModule::stop(void) {}
std::string const &	AMonitorModule::getName(void) const { return (_name); }
map2s const &		AMonitorModule::getData(void) const { return (_map); }
