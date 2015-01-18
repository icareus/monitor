#ifndef MODHOSTNAME_HPP
# define MODHOSTNAME_HPP

#include "AMonitorModule.hpp"

class ModHostname : public AMonitorModule {
	private:
		ModHostname(ModHostname const &);
		ModHostname &	operator=(ModHostname const &);
		char *			_hostNamePtr;

	public:
		ModHostname( void );
		~ModHostname( void );

		void				refresh( void );
};

#endif
