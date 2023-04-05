/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:54:50 by fgeslin           #+#    #+#             */
/*   Updated: 2023/04/05 15:18:04 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

// int	Account::getNbAccounts( void ){return (_nbAccounts);}
// int	Account::getTotalAmount( void ){return (_totalAmount);}
// int	Account::getNbDeposits( void ){return (_totalNbDeposits);}
// int	Account::getNbWithdrawals( void ){return (_totalNbWithdrawals);}
void	Account::displayAccountsInfos( void ){
	std::cout << std::time(0);
}

Account::Account( int initial_deposit ){
	(void)initial_deposit;
}

Account::~Account( void ){

}

void	Account::makeDeposit( int deposit ){
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const{
	return (0);
}

void	Account::displayStatus( void ) const{
	return;
}
