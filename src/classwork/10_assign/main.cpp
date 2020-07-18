//main
#include "engineer.h"
#include "sales_employee.h"

int main()
{
  Employee *engineer = new Engineer(1500, 400);
  Employee *salesman = new SalesEmployee(40,10, 500)
  cout << "Pay of Engineer: $" << engineer->get_pay() << endl;
  cout << "Pay of Salesman: $" << salesman->get_pay() << endl;

  delete engineer;
  engineer = nullptr;

  delete salesman;
  salesman = nullptr;




  return 0;
}
