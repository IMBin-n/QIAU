#include <iostream>
using namespace std ;
/*Tamrin 3rd  tabdil year be days and months */
int main() {
 int a ;
 int Days , Months;
  cout<< "Enter your age (year) :" ;
  cin>> a ;
  Days= a * 365 ;
  Months= 12 * a ;

  cout << "You lived " << Days << "days or "<< Months << "months" ;

    return 0;
}
