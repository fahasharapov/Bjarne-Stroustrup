#include "../../std_lib_facilities.h"

int main (){
	
	/*
	cout << "Enter your name and age: ";
	string first_name;
	double age;
	
	cin >> first_name >> age;
	
	cout << "Hello, " << first_name << " (age " << age << ")" << endl;
	
	*/
	
	
	// BELOW IS ANOTHER EXAMPLE //

	/*
	cout << "Please, enter your last name: ";
	string last_name;
	cin >> last_name;
	
	string full_name = first_name + ' ' + last_name;
	cout << "Bye now, " << full_name << "!" << endl;

	*/


	/*
	// BELOW IS ANOTHER EXAMPLE //


	string first;
	string second;
	cout << "Enter your full name: ";

	cin >> first >> second;

	if (first < second)
	{
		cout << first << " is alphabetically before " << second << endl;	
	}

	if (first > second)
	{
		cout << first << " is alphabetically after " << second << endl;	
	}

	if (first == second)
	{
		cout << "Entered names are identical." << endl;	
	}

	*/

	// BELOW IS ANOTHER EXAMPLE  -  DETECT REPEATED WORDS

	/*
	string previous = " ";
	string current;
	int count = 0;

	while (cin >> current){
		if (previous == current){			
			++count;
			cout << "Repeated words - " << current << endl;
			cout << "Repeated times - " << count << endl;			
		}
		previous = current;
	}

	*/


	// BELOW IS ANOTHER EXAMPLE - FIND AT LEAST 4 ERRORS

	/*int main(){

		string s = "Goodbye, cruel world! ";
		cout << s << "\n";
	
		cout << sizeof(string) << endl;
		cout << sizeof(int) << endl;
		cout << sizeof(bool) << endl;
		cout << sizeof(double) << endl;
		cout << sizeof(char) << endl;
	

		*/

	// BELOW IS ANOTHER EXAMPLE - SAFE/UNSAFE CONVERSIONS

	double d = 0;
	while (cin >> d)
	{
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d==" << d << " i==" << i << " i2==" << i2 << " char(" << c << ")" << endl;
	}

	keep_window_open();
	
}