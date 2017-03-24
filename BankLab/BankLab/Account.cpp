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
	//TODO: Add a message to the log
	_log.push_back(std::to_string(numberOfPennies) + " pennies deposited!");
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	//TODO: Add a message to the log
	_log.push_back(std::to_string(numberOfPennies) + " pennies withdrew!");
}

int Account::getBalance()
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}
