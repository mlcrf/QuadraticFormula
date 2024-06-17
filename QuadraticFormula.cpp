#include <iostream>
#include <cmath>

int main() {
  
  // Variables that hold values
  double a, b, c;
  
  // User input for a
  std::cout << "Enter a: ";
  std::cin >> a;
  // User input for b
  std::cout << "Enter b: ";
  std::cin >> b;
  // User input for c
  std::cout << "Enter c: ";
  std::cin >> c;

  // Create roots
  double root1, root2;
  // Solve with quadratic formula
  root1 = (-b + std::sqrt(b*b-4*a*c))/ (2*a);
  root2 = (-b - std::sqrt(b*b-4*a*c))/ (2*a);

  // Outputing answers
  std::cout << "Root 1 is " << root1 << "\n" << "Root 2 is " << root2 << "\n";
}