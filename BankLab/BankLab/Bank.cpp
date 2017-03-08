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
