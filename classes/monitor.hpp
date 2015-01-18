/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitor.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 10:11:50 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 12:45:09 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MONITOR_HPP
# define MONITOR_HPP

# include <ft_gkrellm.hpp>
# include <ctime>

class monitor
{
public:
	monitor();
	~monitor();

	addDisplay();
	delDisplay();
	addModule();
	delModule();
	loop();

private:
	std::vector<IMonitorDisplay>	_displays;
	std::vector<IMonitorModule>		_modules;
/*	set by gettimeofday(timeval *);
	struct timeval {
		time_t		tv_sec;
		suseconds_t	tv_usec;
	}
*/
	struct timeval					_start;
	struct timeval					_last;

monitor & operator = (monitor const &);
monitor(monitor const &);
};

#endif
