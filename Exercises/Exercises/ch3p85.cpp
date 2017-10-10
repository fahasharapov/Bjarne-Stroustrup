#include "../../std_lib_facilities.h"


int main(){



	
/*

Write a program that converts spelled out numbers such as "zero" and "two" into digits,
such as 0 and 2. When the user inputs a number, the program should print out the corresponding
digit. Do it for the values 0, 1, 2, 3, 4 and write out You are out of range. Numbers must be 
from 0 - 4.

*/


/*
	string number;
	

	while (cin >> number)
	{
		if (number == "zero")
		{
			cout << "Your entered number is 0"  << endl;
		}

		else if (number == "one")
		{
			cout << "Your entered number is 1"  << endl;
		}

		else if (number == "two")
		{
			cout << "Your entered number is 2"  << endl;
		}

		else if (number == "three")
		{
			cout << "Your entered number is 3"  << endl;
		}

		else if (number == "four")
		{
			cout << "Your entered number is 4"  << endl;
		}

		else 
			cout << "You are out of range. Numbers must be from 0 - 4." << endl;

	}

	*/



	//Write a program that prompts the user to enter some pennies, nickels, dimes, etc...


	int pennies;
	int nickels;
	int dimes;
	int quarters;
	int half_dollars;
	int one_dollar;

	cout << "Enter pennies: ";
	cin >> pennies;

	cout << "Enter nickels: ";
	cin >> nickels;

	cout << "Enter dimes: ";
	cin >> dimes;

	cout << "Enter quarters: ";
	cin >> quarters;

	cout << "Enter half_dollars: ";
	cin >> half_dollars;

	cout << "Enter dollars: ";
	cin >> one_dollar;

	cout << endl;

	if (pennies == 1 || pennies == 0)
	cout << "You have " << pennies << " penny." << endl;
	else
		cout << "You have " << pennies << " pennies." << endl;

	if (dimes == 1 || dimes == 0)
	cout << "You have " << nickels << " nickel." << endl;
	else
		cout << "You have " << nickels << " nickels." << endl;

	if (nickels == 1 || nickels == 0)
	cout << "You have " << dimes << " dime." << endl;
	else
		cout << "You have " << dimes << " dimes." << endl;

	if (quarters == 1 || quarters == 0)
	cout << "You have " << quarters << " quarter." << endl;
	else
		cout << "You have " << quarters << " quarters." << endl;

	if (half_dollars == 1 || half_dollars == 0)
	cout << "You have " << half_dollars << " half dollar." << endl;
	else
		cout << "You have " << half_dollars << " half dollars." << endl;

	if (one_dollar == 1 || one_dollar == 0)
	cout << "You have " << one_dollar << " dollar." << endl;
	else
		cout << "You have " << one_dollar << " dollars." << endl;

	int sum_in_cents = 0;
	pennies = pennies * 1;
	nickels = nickels * 5;
	dimes *= 10;
	quarters *= 25;
	half_dollars *= 50;
	one_dollar *= 100;

	sum_in_cents = pennies + dimes + nickels + quarters + half_dollars + one_dollar;

	double sum_in_dollars = 0.0;
	sum_in_dollars = sum_in_cents / 100.0;

	cout << "The value of all of your coins is " << sum_in_cents << " cents." << endl;
	cout << "The value of all of your coins is $" << sum_in_dollars << " dollars." << endl;


	keep_window_open();


}