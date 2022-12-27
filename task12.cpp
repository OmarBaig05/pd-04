#include <iostream>
using namespace std;
main(){

float subject1;
float subject2;
float subject3;
float totalMarks;
float output;

cout << "Enter the marks of the first subject: ";
cin >> subject1;
cout << "Enter the marks of the second subject: ";
cin >> subject2;
cout << "Enter the marks of the third subject: ";
cin >> subject3;
cout << "Enter the total marks: ";
cin >> totalMarks;

output =( ( (subject1 / totalMarks) + (subject2 / totalMarks) + (subject3 / totalMarks) ) / 3 ) * 100;

cout << "Output: " << output;
}