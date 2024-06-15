/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:06:06 by hiono             #+#    #+#             */
/*   Updated: 2024/06/15 13:59:46 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	validate_arguments(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid argument. They should be as follows" << "\n";
		std::cout << "[filename] [string to be replaced in file] [new string]" << "\n";
		return 1;
	}
	if (!*argv[1] || !*argv[2])
	{
		std::cout << "Invalid argument. [filename] and [string to be replaced] cannot be empty" << "\n";
		return 1;
	}
	return 0;
}

std::string	substring(std::string str, std::string oldstr, std::string newstr)
{
	size_t	pos = 0;
	while ((pos = str.find(oldstr, pos)) != std::string::npos)
	{
		str = str.substr(0, pos) + newstr + str.substr(pos + oldstr.length());
		pos += newstr.length();
	}
	return str;
}

int	main(int argc, char *argv[])
{
	std::string	line;

	if (validate_arguments(argc, argv))
		return 1;
	std::ifstream ifstream (argv[1]);
	if (!ifstream.is_open())
	{
		std::cout << "Failed to open file: " << argv[1] << "\n";
		return 1;
	}
	std::ofstream outstream ((std::string) argv[1] + ".replace");
	if (!outstream.is_open())
	{
		std::cout << "Failed to open file: " << (std::string) argv[1] + ".replace" << "\n";
		ifstream.close();
		return 1;
	}
	while (getline(ifstream, line))
	{
		outstream << substring(line, (std::string) argv[2], (std::string) argv[3]) << '\n';
	}
	ifstream.close();
	outstream.close();

	return 0;
}
