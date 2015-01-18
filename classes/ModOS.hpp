/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModOS.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 19:18:02 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 20:34:36 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODOS_HPP
# define MODOS_HPP

# include <AMonitorModule.hpp>

class ModOS: public AMonitorModule {
public:
	ModOS();
	~ModOS();

	void	refresh( void );

protected:
	

private:
	ModOS(ModOS const &);
	ModOS & operator = (ModOS const &);

	std::string const	getCmdOut(std::string cmd) const;
};

#endif
