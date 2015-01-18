#include <ft_gkrellm.hpp>
#include "IMonitorModule.hpp"

#ifndef AMONITORMODULE_HPP
# define AMONITORMODULE_HPP

class AMonitorModule : public IMonitorModule {
	private:
		std::string const			_name;
		map2s						_map;

	protected:
		void				start(void);
		virtual void				refresh(void);
		void				stop(void);
		std::string const &	getName() const;
		map2s const &		getData() const;

	public:
		AMonitorModule(void);
		~AMonitorModule(void);
};

#endif
