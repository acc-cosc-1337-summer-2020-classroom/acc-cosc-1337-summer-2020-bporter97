//cpp
#include "sales_employee.h"

SalesEmployee::SalesEmployee(double h, double r, double c)
{
  hours = h;
  rate = r;
  commission = c;
}

double SalesEmployee::get_pay() const
{
  return (hours * rate) + commission;;
}
