#include <iostream>
using namespace std;
main(){

float vegPrice;
float fruitPrice;
float vegetableCoin;
float fruitCoin;
int weightOfVeg;
int weightOfFruit;
float total;
float totalRps;

cout << "Enter vegetable Price: ";
cin >> vegetableCoin;
cout << "Enter vegetable weight(Kg): ";
cin >> weightOfVeg;
cout << "Enter fruit Price: ";
cin >> fruitCoin;
cout << "Enter fruits weight(Kg): ";
cin >> weightOfFruit;

vegPrice = vegetableCoin * weightOfVeg;
fruitPrice = fruitCoin * weightOfFruit;
total = vegPrice + fruitPrice;
totalRps = total / 1.94 ;

cout << "Earning of Products in Rps: " << totalRps;
}
