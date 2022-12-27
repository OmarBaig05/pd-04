#include <iostream>
using namespace std;
main(){

float bagSize;
float costOfBag;
float areaCoveredByBag;
float costOfFertilizer;
float AreaCost;

cout << "Enter bag size in pounds: ";
cin >> bagSize;
cout << "Enter cost of the bag: ";
cin >> costOfBag;
cout << "Enter area covered by each bag in square feet: ";
cin >> areaCoveredByBag;

costOfFertilizer = costOfBag / bagSize;
AreaCost = costOfBag / areaCoveredByBag;

cout << "Cost of the fertilizer per pound: " << costOfFertilizer << endl;
cout << "Cost of fertilizing the area per square feet : " << AreaCost;



}