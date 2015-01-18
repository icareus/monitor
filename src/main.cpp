/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 18:47:16 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 02:16:54 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_gkrellm.hpp>
#include "IMonitorModule.hpp"
#include "AMonitorModule.hpp"

std::ostream & operator << (std::ostream & out, map2s & m) {
	for (map2s::iterator i = m.begin(); i != m.end(); i++) {
		out << "[" << i->first << "][" << i->second << "]" << std::endl;
	}
	return out;
}

int		main( void ) {
	map2s map;
	map["FieldName"] = "FieldData";
	std::cout << map;
	return (0);
}
