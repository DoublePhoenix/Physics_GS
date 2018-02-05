#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double pedalForce = 0.0;
double radiusSmall = 0.0;
double radiusPedal= 0.0;
double radiusTire = 0.0;
double radiusbigGear= 0.0;
double output = 0.0;
 char repeat = 'y';
 char stop = 'n'; 
// while loop to allow repeat of problem solving process
while(repeat=='y'){
// get input from user
cout<< fixed;
cout << setprecision(3);
cout<< "Input Force from Leg:";
cin >> pedalForce;
cout << "Input Radius of the Small Gear:";
cin >> radiusSmall;
cout << "Input Radius of The Pedal:";
cin >> radiusPedal;
cout << "Input Radius of Tire:";
cin >> radiusTire;
cout << "Input Radius of Big Gear:";
cin >> radiusbigGear;
// display output
output = pedalForce*(radiusSmall*radiusPedal)/(radiusTire*radiusbigGear);
cout << "Output on Road:" << output << endl;
cout<<"Do You Wish to do Another Problem Y/N?:";
cin >> repeat;
system("pause");}

return 0;
}
