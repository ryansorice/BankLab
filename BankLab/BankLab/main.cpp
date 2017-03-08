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
//void TransactMenu();

int main() 
{
	DisplayMenu();

	system("pause");
	return 0;
}
void AddAccountMenu()
{
	system("cls");
	cout << "Customer first name: \n";
	string firstName;
	cin >> firstName;

	cout << "Customer last name: \n";
	string lastName;
	cin >> lastName;

	cout << "Account Number: \n";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName); 
	Account newAccount = Account(customer, accountNumber);
	bank.CreateAccount(newAccount);
}

void DisplayMenu()
{
	system("cls");		//Clears screen
	cout << "Welcome to " + bank.getName() << endl;
	cout << "1) Add Account" << endl;
	cout << "2) Transact" << endl;
	cout << "3) Withdraw" << endl;
	cout << "What would you like to do? " << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: AddAccountMenu(); break;
	//case 2: TransactMenu();break;
		case 3:  break;
		default: break;
	}
	
}