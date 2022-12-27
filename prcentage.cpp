#include <iostream>
using namespace std;
main(){

float Subject1, Subject2, Subject3, Subject4, Subject5;
float percentage;

cout << "Enter subject 01 marks (out of 100): ";
cin >> Subject1;
cout << "Enter subject 02 marks (out of 100): ";
cin >> Subject2;
cout << "Enter subject 03 marks (out of 100): ";
cin >> Subject3;
cout << "Enter subject 04 marks (out of 100): ";
cin >> Subject4;
cout << "Enter subject 05 marks (out of 100): ";
cin >> Subject5;

percentage =(( Subject1 + Subject2 + Subject3 + Subject4 + Subject5 )/500 ) * 100;
cout << "Percentage: "<<percentage;

}
