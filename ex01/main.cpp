/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:19:59 by fgeslin           #+#    #+#             */
/*   Updated: 2023/04/05 14:50:44 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
	Phonebook	phonebook;
	std::string	input;

	do
	{
		std::cout << "CMD: ";
		std::cin >> input;
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
		phonebook.search();
	} while (input != "EXIT");
	std::cout << "quitting..." << std::endl;
	
	return 0;
}
