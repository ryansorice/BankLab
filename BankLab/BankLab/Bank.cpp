#include "Bank.h"


Bank::Bank(std::string name) : _name(name)
{
}

Bank::~Bank()
{
}

std::string Bank::getName()
{
	return _name;
}

void Bank::CreateAccount(Account newAccount)
{
	_accounts.push_back(newAccount);
}

std::string Bank::ShowAccounts()
{
	std::string output = "Account for " + _name + "\n";
	for (auto account : _accounts) //Can also be written as "for (Account account: _accounts)"
	{
		//TODO: Display as Account Number - LastName, FirstName - Balance
		output += std::to_string(account.getAccountNumber()) + " - " += account.getCustomerNamer() + " - $" += std::to_string(account.getBalance()) += "\n";
	}
	return output;
}

std::string Bank::ListAccounts()
{
	std::string output = "Account for " + _name + "\n";
	int index = 0;
	for (auto account : _accounts) //Can also be written as "for (Account account: _accounts)"
	{
		output += std::to_string(index) + ") " += std::to_string(account.getAccountNumber()) += "\n";
		index++;
	}
	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (Account &account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Deposit(amount);
		}
	}
	return;
}

void Bank::Withdraw(int accountNumber, int amount)
{
	for (Account &account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Withdraw(amount);
		}
	}
	return;
}
