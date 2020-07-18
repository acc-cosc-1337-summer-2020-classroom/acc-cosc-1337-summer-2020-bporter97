//h
#include "employee.h"

#ifndef SALES_EMPLOYEE_H
#define SALES_EMPLOYEE_H

class SalesEmployee : public Employee
{
private:
  double rate;
  double commission;
  double hours;
  double total_pay;

public:
  SalesEmployee(double h, double r, double c)
  double get_pay() const;
};

#endif
