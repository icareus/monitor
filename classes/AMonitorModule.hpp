#include <ft_gkrellm.hpp>
#include "IMonitorModule.hpp"

#ifndef AMONITORMODULE_HPP
# define AMONITORMODULE_HPP

class AMonitorModule : public IMonitorModule {
	private:
		std::string					_name;
		map2s						_map(void);

	protected:
		virtual	void				start(void);
		virtual void				refresh(void);
		virtual void				stop(void) const;
		virtual std::string const &	getName() const;
		virtual map2s const &		getData() const;

	public:
		AMonitorModule(void);
		virtual						~IMonitorModule(void);
};

#endif
