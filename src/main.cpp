/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 18:47:16 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 01:58:11 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_gkrellm.hpp>

void	printMap(map2s m) {
	for(map2s::iterator i = m.begin(); i != m.end(); i++) {
		std::cout << "Map[" << i->first << "][" << i->second << "]" << std::endl;
	}
}

int		main( void ) {
	std::map<std::string, std::string> map;
	map["FieldName"] = "FieldData";
	printMap(map);
	return (0);
}