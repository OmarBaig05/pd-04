#include <iostream>
using namespace std;
main(){

string movie;
int NumOfAdultTickets;
int NumOfChildTickets;
int AdultTP;
int childTP;
float percentage;
int adultTicketPrice;
int childTicketPrice;
int total;
float DonationPercentage;
float afterDonation;

cout << "Enter movie name: ";  
cin >> movie;
cout << "Enter Adult tiket price: ";
cin >> AdultTP;
cout << "Enter child tiket price: ";
cin >> childTP;
cout << "Enter number of adult tickets sold: ";
cin >> NumOfAdultTickets;
cout << "Enter number of child tickets sold: ";
cin >> NumOfChildTickets;
cout << "Enter percentage to donate: ";
cin >> percentage;

cout << "_____________________________________"<<endl;

adultTicketPrice = NumOfAdultTickets * AdultTP;
childTicketPrice = NumOfChildTickets * childTP;
total = childTicketPrice + adultTicketPrice;
DonationPercentage = total * (percentage / 100 );
afterDonation = total - DonationPercentage;

cout << "Total amount generated: " << total << endl;
cout << "Amount after donation: " << afterDonation;



}