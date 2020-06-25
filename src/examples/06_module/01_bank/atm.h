  
//atm.h
#include "bank_account.h"
#ifndef ATM_H
#define ATM_H
#include<vector>

class ATM
{
public:
    ATM(){}
    void run();
private:
    void scan_card();
    void display_menu();//helper functions..utility functions
    void set_choice();
    void handle_transaction();
    int selected_account_index;
    int choice;
    std::vector<BankAccount> accounts{BankAccount(100), BankAccount(200), BankAccount(300)};
};

#endif