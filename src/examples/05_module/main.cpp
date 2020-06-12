#include "payroll.h"
int main()
{ 
    //display_pay(40, 10);
    int num = 10;
    int& num_ref = num;
    std::cout<<num<<" memory address is: "<<&num_ref<<"\n";
    num_ref = 20;
    std::cout<<num<<" memory address is: "<<&num_ref;
    return 0;
}