//h
#include "employee.h"

#ifndef ENGINEER_H
#define ENGINEER_H

class Engineer: public Employee
{
private:
  double base_pay;
  double bonus;

public:
  Engineer(double bsPay, double bns);
  double get_pay() const;
  ~Engineer(){}

};
#endif
