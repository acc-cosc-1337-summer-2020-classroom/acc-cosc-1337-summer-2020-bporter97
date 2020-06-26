#include "atm.h"
#include "savings_account.h"
#include "bank_account.h"
#include<iostream>
#include "checking_account.h"

using std::cout;
using std::cin;

int main()
{
	CheckingAccount c(100);
	cout<<c;

	SavingsAccount s(100);
	cout<<s;
	
	SavingsAccouunt s1;
	cout<<s1;

	//ATM atm;
	//atm.run();
	
	/*BankAccount account;
	BranchBank bank(10000);
	bank.update_balance(500);
	cout<<account;
	cout<<account.get_balance();
	cout<<account.get_bank_balance()<<"\n";
	cout<<bank.get_branch_balance()<<"\n";*/

	return 0;
}
