#include "atm.h"
#include "savings_account.h"
#include "bank_account.h"
#include<iostream>
#include "checking_account.h"
#include<memory>

using std::unique_ptr ; using std::make_unique;
using std::cout;
using std::cin;

int main()
{
	unique_ptr<BankAccount> a = make_unique<BankAccount>(600);//heap
	cout<<a->get_balance()<<"\n";
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	cout<<c->get_balance()<<"\n";

	/*CheckingAccount c(100);
	cout<<c;

	SavingsAccount s(100);
	cout<<s;
	
	SavingsAccouunt s1;
	cout<<s1;


	//ATM atm;
	//atm.run();
	
	BankAccount account;
	BranchBank bank(10000);
	bank.update_balance(500);
	cout<<account;
	cout<<account.get_balance();
	cout<<account.get_bank_balance()<<"\n";
	cout<<bank.get_branch_balance()<<"\n";*/

	return 0;
}
