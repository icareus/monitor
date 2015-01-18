/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModTime.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 20:36:29 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 20:38:52 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODTIME_HPP
# define MODTIME_HPP

class ModTime: public AModMonitorModule {
public:
	ModTime();
	~ModTime();

	void		start( void );
	void		refresh( void );
	void		stop( void );

protected:
	

private:
	ModTime(ModTime const &);
	ModTime & operator = (ModTime const &);
	
};

#endif
