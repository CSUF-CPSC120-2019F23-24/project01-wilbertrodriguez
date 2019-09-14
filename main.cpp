// Name:Wilbert Rodriguez
// This program calculates and displays business expenses.

#include <iostream>

int main()
{

  std::cout << "Welcome to the Business Trip Tracker!\n\n";

  int days;
  double hotel_exp,meal_exp;

  std::cout << "What is the buisness trip location? " << std::endl;
  std::string location;
  std::cin >> location;

  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_exp;

  std::cout << "What is the total meal expense? ";
  std::cin >> meal_exp;




  return 0;
}
