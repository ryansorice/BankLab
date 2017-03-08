//System Libraries
#include <iostream>

//User Libraries
#include "Bank.h"

using namespace std;	//Namespace in standard library

//Global variables
Bank bank = Bank("Awesome Bank");

//Function prototypes
void DisplayMenu();		//Displays bank menu 
void AddAccountMenu();
void TransactMenu();
void DisplayAccountsMenu();

int main() 
{
	DisplayMenu();

	system("pause");
	return 0;
}
void DisplayAccountsMenu()
{
	system("cls");
	cout << bank.ShowAccounts();
	system("pause");
}
void TransactMenu()
{
	//Get Account
	system("cls");
	cout << "Which Account?\n";
	cout << bank.ListAccounts() << endl;

	int chosenAccount;
	cin >> chosenAccount;

	//Get Transaction type
	system("cls");
	cout << "1) Deposit\n";
	cout << "2) Withdraw\n";

	int transactionType;
	cin >> transactionType;

	//Get amount
	system("cls");
	cout << "How many pennies?";
	int pennies;
	cin >> pennies;

	switch (transactionType)
	{
		case 1: bank.Deposit(chosenAccount, pennies); break;
		case 2: bank.Withdraw(chosenAccount, pennies); break;
		default: cout << "Error!!! Wrong input\n"; break;
	}
}
void AddAccountMenu()
{
	system("cls");
	cout << "Customer first name: ";
	string firstName;
	cin >> firstName;

	cout << "Customer last name: ";
	string lastName;
	cin >> lastName;

	cout << "Account Number: ";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName); 
	Account newAccount = Account(customer, accountNumber);
	bank.CreateAccount(newAccount);
}

void DisplayMenu()
{
	int choice=0;
	do
	{
		system("cls");		//Clears screen
		cout << "Welcome to " + bank.getName() << endl;
		cout << "1) Add Account" << endl;
		cout << "2) Transact" << endl;
		cout << "3) Display Accounts" << endl;
		cout << "What would you like to do? " << endl;
		cin >> choice;

		switch (choice)
		{
			case 1: AddAccountMenu(); break;
			case 2: TransactMenu(); break; 
			case 3: DisplayAccountsMenu(); break;
			default: break;
		}
	} while (choice > 0 && choice < 4);
}