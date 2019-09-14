// Sales prediction

#include <iostream>

int main()
{
 // Last year's sales
 unsigned last_year = 2103419277;

 // Display last year's Sales

 std::cout << "Last year's sales were $"<< last_year <<"\n";

 // the constant for the increase in sales this year

 const double INCREASE = .18;

 // calculate this years projected sales and make a variable for it

 unsigned this_year = (last_year * INCREASE) + last_year;

 // dislay next this years projected Sales

 std::cout << "This year's sales prediction: $"<< this_year<<"\n";

 return 0;


}
