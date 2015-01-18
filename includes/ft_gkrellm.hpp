/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gkrellm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 01:54:56 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 04:30:58 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GKRELLM_H
# define FT_GKRELLM_H

# include <map>
# include <iostream>
# include <cstring>

typedef std::map<std::string, std::string> map2s;

std::ostream & operator << (std::ostream & out, const map2s & map);

class IMonitorModule {};
class IMonitorDisplay {};

# endif