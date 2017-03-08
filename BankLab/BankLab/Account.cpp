#include "Account.h"


Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

std::string Account::getCustomerNamer()
{
	return _accountOwner.getFullName();
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	_log.push_back(std::to_string(numberOfPennies) + " pennies deposited!"); 
	//TODO: Add a message to the log
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	_log.push_back(std::to_string(numberOfPennies) + " pennies withdrawn!");
	//TODO: Add a message to the log
}

int Account::getBalance()
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}
