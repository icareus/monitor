#ifndef AMONITORMODULE_HPP
# define AMONITORMODULE_HPP

#include "IMonitorModule.hpp"

class AMonitorModule : public IMonitorModule {
	private:
		std::string const			_name;
		map2s						_map;

	public:
		void				start(void);
		virtual void		refresh(void);
		void				stop(void);
		std::string const &	getName() const;
		map2s const &		getData() const;

		AMonitorModule(void);
		~AMonitorModule(void);
};

#endif
