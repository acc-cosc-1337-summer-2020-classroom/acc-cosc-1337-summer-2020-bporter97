//h
#include<iostream>
#include<cmath>

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
private:

public:
  virtual double get_pay() const = 0;
};

#endif
