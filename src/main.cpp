/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 18:47:16 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 17:00:40 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_gkrellm.hpp>
#include <iostream>

// typedef std::map<std::string, std::string>::iterator it_type;

std::ostream & operator << (std::ostream & out, map2s const & in) {
	for (map2s::const_iterator i = in.begin(); i != in.end(); i++) {
		out << i->first << " : " << i->second << std::endl;
	}
	return out;
}

int		main( void ) {
	ModHostname	test;
	std::cout << test.getData();
	(void)test;
	return (0);
}
