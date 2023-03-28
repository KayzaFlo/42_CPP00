/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:19:59 by fgeslin           #+#    #+#             */
/*   Updated: 2023/03/27 16:41:43 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include "contact.hpp"

class Phonebook
{
private:
	Contact contactList[8];
public:
	Phonebook(Contact* contactList);
	~Phonebook();

	void	add();
	void	search();
	void	exit();
};
