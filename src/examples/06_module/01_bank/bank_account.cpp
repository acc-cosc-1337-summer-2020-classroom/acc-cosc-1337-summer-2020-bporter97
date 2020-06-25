//bank_account.cpp
#include "bank_account.h"
using std::vector;

vector<BankAccount> accounts{BankAccount(100), BankAccount(200), BankAccount(300)};

void BankAccount::deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}
void BankAccount::withdraw(int amount)
{
    if(amount >0 && balance >= amount)
    {
        balance -= amount;
        bank_balance -= amount;
    }
}

BankAccount& get_account(int i)
{
     return accounts[i];
}
void display_menu()
{
    cout<<"1) Make Deposit\n,";
    cout<<"2) Make Withdraw\n,";
    cout<<"3) Display Balance\n";
    cout<<"4) Exit\n\n,";
    cout<<"Enter your choice: ";

}