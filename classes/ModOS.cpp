/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModOS.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/18 19:26:47 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/18 20:34:18 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ModOS.hpp>
#include <cstdio>

ModOS::ModOS() {
	AMonitorModule::_name = "Operating System";
	this->refresh();
}

ModOS::~ModOS() {}

std::string const ModOS::getCmdOut(std::string cmd) const {
	const int		buff_max = 1024;
	char			buff[buff_max];

	std::string		ret;

	FILE *	stream = popen(cmd.c_str(), "r");
	if (stream) {
		while (!feof(stream)) {
			if (fgets(buff, buff_max, stream) != NULL) {
				ret += buff;
			}
		}
	}
	pclose(stream);
	if (ret[ret.length() - 1] == '\n') {
		ret[ret.length() - 1] = '\0';
	}
	return ret;
}

void	ModOS::refresh() {
	std::string		prog = "uname";

	std::string		cmd = prog + " -o";
	AMonitorModule::_map["OS"] = getCmdOut(cmd.c_str());

	cmd = prog + " -v";
	AMonitorModule::_map["Kernel"] = getCmdOut(cmd.c_str());
}
