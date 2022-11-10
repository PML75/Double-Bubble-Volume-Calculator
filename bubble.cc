#include "bubble.h"

double Bubble::GetRadius() const
{
  return radius_;
}
void Bubble::SetRadius(double tRadius)
{
  radius_ = tRadius;
}
double Bubble::CalculateVolume()
{
  return (4 * 3.1415 * (radius_*radius_*radius_))/3;
}

Bubble CombineBubbles(Bubble &b1, Bubble &b2)
{
  Bubble b3;
  b3.SetRadius(b1.GetRadius() + b2.GetRadius());
  return b3;
}
