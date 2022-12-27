#include <iostream>
using namespace std;
main(){

int number;
int newNumber;
int position2;
int position3;
int position4;
int output;

cout << "Enter the 4 digit number: ";
cin >> number;

position4 = number % 10;
newNumber = number / 10;
position3 = newNumber % 10;
newNumber = number / 100;
position2 = newNumber % 10;
newNumber = number / 1000;

// output = position1;

output = (newNumber + position3) + (position2 * position4);
cout << "Output: "<< output;

}