/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 18:47:16 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 21:28:11 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_gkrellm.hpp>
#include <iostream>

std::ostream & operator << (std::ostream & out, map2s const & in) {
	for (map2s::const_iterator i = in.begin(); i != in.end(); i++) {
		out << i->first << "=>" << i->second << std::endl;
	}
	return (out);
}

int		main( void ) {
	ModHostname	testHN;
	ModOS		testOS;
	std::cout << "ModHostname :" << std::endl << testHN.getData() << std::endl;
	std::cout << "ModOS :" << std::endl << testOS.getData() << std::endl;
	return (0);
}
