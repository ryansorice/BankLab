#pragma once
#include <string>
#include <vector>
#include "Account.h"

class Bank
{
private:
	std::string _name;
	std::vector<Account> _accounts;
public:
	Bank(std::string name);
	~Bank();

	std::string getName();
	void CreateAccount(Account newAccount);
	std::string ShowAccounts();
	std::string ListAccounts();
	std::vector<Account> getAccounts();
	void Deposit(int accountNumber, int amount);
	void Withdraw(int accountNumber, int amount);
};

