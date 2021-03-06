/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 02:57:34 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 16:37:59 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

# include <string>
# include <iostream>
# include <map>

typedef std::map<std::string, std::string> map2s;

class IMonitorModule
{
	public:
		virtual void				start() = 0;
		virtual void				refresh() = 0;
		virtual void				stop() = 0;
		virtual std::string const &	getName() const = 0;
		virtual map2s const &		getData() const = 0;
};

#endif
