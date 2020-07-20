//cpp
#include "engineer.h"

Engineer::Engineer(double bsPay, double bns)
{
  base_pay = bsPay;
  bonus = bns;
}

double Engineer::get_pay() const
{
  return base_pay + bonus;
}
