/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:13:44 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/10 11:01:40 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <chrono>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp ( void )
{
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	std::cout   << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
				<< std::setw(2) << utc_tm.tm_mon
				<< std::setw(2) << utc_tm.tm_mday << "_"
				<< std::setw(2) << utc_tm.tm_hour
				<< std::setw(2) << utc_tm.tm_min
				<< std::setw(2) << utc_tm.tm_sec << "] ";
}

Account::Account ( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout   << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";created"
				<< std::endl;
}

Account::Account ( void )
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout   << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";created"
				<< std::endl;
}

Account::~Account( void )
{
	Account::_nbAccounts -= 1;
	Account::_displayTimestamp();
	std::cout   << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";closed"
				<< std::endl;
}

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout   << "accounts:" << Account::_nbAccounts
				<< ";total:" << Account::_totalAmount
				<< ";deposits:" << Account::_totalNbDeposits
				<< ";withdrawals:" << Account::_totalNbWithdrawals
				<< std::endl;
}

void    Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout   << "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount
				<< ";deposit:" << deposit;
	this->_nbDeposits += 1;
	this->_amount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	std::cout   << ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout   << "index:" << this->_accountIndex
				<<  ";p_amount:" << this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (true);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		std::cout	<< ";withdrawal:" << withdrawal
					<< ";amount:" << this->_amount
					<< ";nb_withdrawals:" << this->_nbWithdrawals
					<< std::endl;
		return (false);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}
