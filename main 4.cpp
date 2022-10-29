#include <iostream>
using namespace std ;
/* Tamrin 4th tabdil second be hours minute ..*/
int main() {
    int a,b,c,d;

    cout << "Enter your time (second) :" ;
    cin>> a ;
    b= a/ 3600 ;
    c= (a- b*3600)/60;
    d=(a-b*3600) - (60*c);
    cout <<"It's "<< b <<"hours and "<< c<<"minutes and "<<d<< "seconds" ;

    return 0;
}
