/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:54:13 by hiono             #+#    #+#             */
/*   Updated: 2024/06/08 18:24:40 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "--- Memory address of variables ---" << "\n";
	std::cout << "string:    " << &string << "\n";
	std::cout << "stringPTR: " << stringPTR << "\n";
	std::cout << "stringREF: " << &stringREF << "\n";
	std::cout << "\n";

	std::cout << "--- Value of variables ---" <<  "\n";
	std::cout << "string:    " << string << "\n";
	std::cout << "stringPTR: " << *stringPTR << "\n";
	std::cout << "stringREF: " << stringREF << "\n";

	return 0;
}
