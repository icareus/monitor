/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 08:37:59 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 08:45:51 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP

class IMonitorDisplay
{
public:
	virtual ~IMonitorDisplay();

	virtual void		clear() = 0;
	virtual void		close() = 0;
	virtual void		addModule() = 0;
	virtual std::string	listModules() = 0;
	virtual void		delModule() = 0;
};

std::ostream & operator << (std::ostream & out, IMonitorDisplay ID);

#endif
