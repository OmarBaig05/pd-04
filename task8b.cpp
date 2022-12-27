#include <iostream>
using namespace std;
main(){

int numb;
int sum;
int modulus;
int div1;
int mod2;
int div2;
int mod3;
int div3;

cout << "Enter the 4digit number: ";
cin >> numb;
modulus = numb % 10;
div1 = numb / 10;
mod2 = div1 % 10;
div2 = numb / 100;
mod3 = div2 % 10;
div3 = numb / 1000;
sum = modulus + div3 + mod2 + mod3 ;
cout << "sum : "<<sum;
}