#include <iostream>
using namespace std;
main(){

int date;
string month;
int year;
int output;

cout << "Enter date of birth: ";
cin >> date;
cout << "Enter month of birth: ";
cin >> month;
cout << "Enter year of birth: ";
cin >> year;

output = 2022 - year;
cout << "Your age is: "<<output;

}