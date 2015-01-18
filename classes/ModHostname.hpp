#ifndef MODHOSTNAME_HPP
# define MODHOSTNAME_HPP

#include "AMonitorModule.hpp"

class ModHostname : public AMonitorModule {
	private:
		ModHostname(ModHostname const &);
		ModHostname &	operator=(ModHostname const &);

	public:
		ModHostname(void);
		void				refresh(void);
		~ModHostname(void);
};

#endif
