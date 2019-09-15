// Name:Wilbert Rodriguez
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
//so I can use setw(#)

int main()
{

  std::cout << "Welcome to the Business Trip Tracker!\n\n";

  int days;
  double hotel_exp,meal_exp,total_exp;
  //sets up the variables

  std::cout << "What is the buisness trip location? ";
  std::string location;
  std::cin >> location;
  //obtains the location using a string type

  std::cout << "How many days will the trip take? ";
  std::cin >> days;
  //obtains the amount of days on a trip

  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_exp;
  //obtains the hotel expenses for the trip

  std::cout << "What is the total meal expense? ";
  std::cin >> meal_exp;
  //obtains the meal expenses for the trip

  std::cout << "Location" << std::setw(9) << "Days" << std::setw(10)
  << "Hotel" << std::setw(9) << "Meal" << std::setw(10) << "Total\n";
  //Puts the data into the desired format

  total_exp = hotel_exp + meal_exp;
  //calculates the total expenses for the trip

  std::cout << location << std::setw(11) << days << std::setw(10)
  << hotel_exp << std::setw(9) << meal_exp << std::setw(9) << total_exp <<"\n";
  //puts the data below the previous names

  return 0;
}
