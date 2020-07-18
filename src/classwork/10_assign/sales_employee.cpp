//cpp
#include "sales_employee.h"

SalesEmployee(double h, double r, double c)
{
  hours = h;
  rate = r;
  comission = c;
}

double SalesEmployee::get_pay() const
{
  total_pay = (hours * rate) + comission;

  return total_pay;
}
