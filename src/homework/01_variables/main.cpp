//write include statements

#include "variables.h"


using std::cout; using std::cin; using std::setw; using std::fixed;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount{0};
	double tip_rate{0};
	double tip_amount{0};
	double tax_amount{0};
	double total{0};

	cout<<"Please Enter the cost of your meal: ";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Please Enter the rate you wish to tip your server: ";
	cin>> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<fixed<<std::setprecision(2);
	cout<<setw(17)<<"Meal Amount: "<<setw(7)<<meal_amount<<"\n";
	cout<<setw(17)<<"Sales Tax: "<<setw(7)<<tax_amount<<"\n";
	cout<<setw(17)<<"Tip Amount: "<<setw(7)<<tip_amount<<"\n";
	cout<<setw(17)<<"Total: "<<setw(7)<<total<<"\n";


	return 0;
}
