#include <iostream>

int main() {
  std::cout << "radian = 55.555555555555555555555555555555555 \n";
  long double PI = (360/55.555555555555555555555555555555555)/2;
  std::cout << "PI: " << PI << "\n";
  long double round = (PI*2)*55.555555555555555555555555555555555;
  std::cout << "Round degrees: " << round << "\n";
}