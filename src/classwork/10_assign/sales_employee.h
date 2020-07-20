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

public:
  SalesEmployee(double h, double r, double c);
  double get_pay() const;
  ~SalesEmployee(){}
};

#endif
