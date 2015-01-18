/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 02:57:34 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 08:44:42 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_gkrellm.hpp>

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

class IMonitorModule
{
	public:
		virtual ~IMonitorModule();

		virtual void				start() = 0;
		virtual void				refresh() = 0;
		virtual void				stop() const = 0;
		virtual std::string const &	getName() const = 0;
		virtual map2s const &		getData() const = 0;
};

std::ostream & operator << (std::ostream & out, IMonitorModule IM);

#endif
