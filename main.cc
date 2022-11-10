#include <iomanip>
#include <iostream>

#include "bubble.h"

int main() {

  Bubble b1; Bubble b2;

  double radius1, radius2;
  std::cout << "Please enter the radius of the first bubble: ";
  std::cin >> radius1;

  b1.SetRadius(radius1);
  
  std::cout << "Please enter the radius of the second bubble: ";
  std::cin >> radius2;

  b2.SetRadius(radius2);
  

  Bubble combined;

  combined = CombineBubbles(b1, b2);

  double volume = combined.CalculateVolume();
  
  std::cout
      << "The bubbles have now combined and created a bubble with the volume "
         "of: "
      << std::fixed << std::setprecision(2) << volume << std::endl;
  return 0;
}
