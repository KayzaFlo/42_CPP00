/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:19:59 by fgeslin           #+#    #+#             */
/*   Updated: 2023/03/27 16:46:53 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

//On Create
Contact::Contact(std::string first_name)
{
	this->_first_name = first_name;
	return;
}

//On Destroy
Contact::~Contact(void)
{
	return;
}
