//bank_account.h
class BankAccount
{
public:
    BankAccount(){ balance = 500;}
    BankAccount(int b): balance{b} {}
    int get_balance() const{return balance;}//inline class function
    void deposit(int amount);
    void withdraw(int amount);
private:
    int balance; //lock this variable

};