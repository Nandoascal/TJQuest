#include <iostream>
#include <limits>
#include <cmath>
#undef max

using namespace std;


int main()
{
	double velocity,
           efficiency,
           mass0,
		   mass1;
    //velocity is delta v, efficiency is v_e, mass0 is initial mass, mass1 is final mass


	
	cout << "T.J. enter your velocity: ";
	cin >> velocity;
	while(!cin || velocity <= 0) //input validation, could've been put in a function, but ehhhhhh copy pasta is cool
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input! Input a new one: ";
		cin >> velocity;
	}
	
	cout << "T.J. enter your efficiency: ";
	cin >> efficiency;
	while(!cin || efficiency <= 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input! Input a new one: ";
		cin >> efficiency;
	}
	
	cout << "T.J. enter the mass: ";
	cin >> mass1;
	while(!cin || mass1 <= 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input! Input a new one: ";
		cin >> mass1;
	}
	
	mass0 = mass1 * exp(velocity/(9.8 * efficiency)); 
	
	cout << "Your initial mass should be: " << mass0;
	
	return 0;
}
