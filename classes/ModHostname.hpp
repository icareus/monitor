#ifndef MODHOSTNAME_HPP
# define MODHOSTNAME_HPP

#include <ft_gkrellm.hpp>
#include "AMonitorModule.hpp"

class ModHostname : public AMonitorModule {
	private:
		ModHostname(ModHostname const &);
		ModHostname &	operator=(ModHostname const &);

	public:
		ModHostname(void);
		~ModHostname(void);
};

#endif
