#include <iostream>
using namespace std;
main(){

float initialVelocity;
float finalVelocity;
float time;
float acceleration;

cout << "Enter Initial Velocity: ";
cin >> initialVelocity;
cout << "Enter Final Velocity: ";
cin >> finalVelocity;
cout << "Enter time: ";
cin >> time;

acceleration = (finalVelocity - initialVelocity )/time;
cout << "Acceleration: "<< acceleration;

}