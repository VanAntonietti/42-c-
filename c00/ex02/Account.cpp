// Copyright 2023 Vanderson Antonietti

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:42:19 by vantonie          #+#    #+#             */
/*   Updated: 2023/03/08 12:29:15 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/Account.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
  _amount = initial_deposit;
  _accountIndex = getNbAccounts();
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex <<
    ";amount:" << _totalAmount << ";created" << std::endl;
}

Account::Account(void) {
  _amount = 0;
  _accountIndex = getNbAccounts();
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _nbAccounts++;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex <<
    ";amount:" << _totalAmount << ";created" << std::endl;
}

Account::~Account(void) {
  _nbAccounts--;
  _totalAmount -= +_amount;
  _totalNbDeposits -= _nbDeposits;
  _totalNbWithdrawals -= _nbWithdrawals;
  _displayTimestamp();
  cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
}

int Account::getNbAccounts(void) {
  return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
  return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
  return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
  return (Account::_totalNbWithdrawals);
}

void  Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";total:" <<
    getTotalAmount() << ";depostis:" << getNbDeposits() <<
      ";withdrawls:" << getNbWithdrawals() << std::endl;
}

void  Account::makeDeposit(int deposit) {
  _amount += deposit;
  _nbDeposits++;
  _totalAmount += deposit;
  _totalNbDeposits++;
  _displayTimestamp();
  cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() - deposit << ";deposit" << deposit << ";amount" << checkAmount() << ";nb_deposits:" << _nbDeposits << endl;
}

bool  Account::makeWithdrawal(int withdrawal) {
  _displayTimestamp();
  if (withdrawal < _amount) {
    _amount -= withdrawal;
    _nbWithdrawals++;
    cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() + withdrawal <<";withdrawal:" << withdrawal << _nbDeposits << endl;
    return true;
  }
  return _amount;
}

int Account::checkAmount(void) const {
  return _amount;
}

void  Account::displayStatus(void) const {
  _displayTimestamp();
  cout << "index:" << _accountIndex << ";amount" << checkAmount() << ";deposits:" << _nbDeposits << ";withdrawls:" << _nbWithdrawals << endl;
}

void  Account::_displayTimestamp(void) {
  time_t present_time = std::time(0);
  tm *ltm = std::localtime(&present_time);
  char buffer[16];
  std::strftime(buffer, present_time, "%Y%m%d_%H%M%S", ltm);
  std::cout << "[" << buffer << "] ";
}
