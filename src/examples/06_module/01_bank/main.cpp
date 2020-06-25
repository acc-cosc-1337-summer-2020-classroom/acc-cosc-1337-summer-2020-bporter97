#include "bank_account.h"
#include<iostream>

using namespace::std; 

int main()
{
	BankAccount account = get_account(1);
	cout<<account.get_bank_balance()<<"\n";

	
	
	/*
	BankAccount account(1000); //create an instance/variable of class in stack memory

	int balance = account.get_balance();
	cout<<"balance: " <<balance<<"\n";

	
	int deposit;
	cout<<"Enter deposit amount: ";
	cin>>deposit;
	account.deposit(deposit);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	int withdraw;
	cout<<"Enter withdraw amount: ";
	cin>>withdraw;
	account.withdraw(withdraw);
	cout<<"Balance: "<<account.get_balance()<<"\n";
	*/

	return 0;
}