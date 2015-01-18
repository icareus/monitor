#ifndef MONITORDISPLAY_HPP
# define MONITORDISPLAY_HPP

# include "IMonitorDisplay.hpp"
# include "IMonitorModule.hpp"

class MonitorDisplay : public IMonitorDisplay {
	private:
		std::list<AMonitorModule *> _modList;

		MonitorDisplay(MonitorDisplay const &);
		MonitorDisplay &	operator=(MonitorDisplay const &);

	public:
		MonitorDisplay(void);
		~MonitorDisplay(void);

};

#endif
