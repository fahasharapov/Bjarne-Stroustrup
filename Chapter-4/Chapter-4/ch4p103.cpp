#include "../../std_lib_facilities.h"

int main(){

	/*
	const double cm_per_inch = 2.54;
	double length = 1;
	char unit = 0;

	cout << "Please, enter a length followed by a unit (c or i): ";
	cin >> length >> unit;

	if (unit == 'i')
		cout << length << "in == " << cm_per_inch*length << "cm\n";
	else
		cout << length << "cm == " << length/cm_per_inch << "in\n";


	*/



	//TRY THIS, P.105

	//VERSION 1

	/*
	double yens = 0;
	double euros = 0;
	double pounds = 0;
	
	cout << "Enter Yens: ";
	cin >> yens;
	cout << "Enter Euros: ";
	cin >> euros;
	cout << "Enter Pounds: ";
	cin >> pounds;

	cout << endl;
	cout << yens << " yens == " << yens * 0.0089 << " dollars." << endl;
	cout << euros << " euros == " << euros * 1.18 << " dollars." << endl;
	cout << pounds << " pounds == " << pounds * 1.32 << " dollars." << endl;
	*/


	//VERSION 2

	/*
	
	char currency = ' ';
	int amount = 0;

	cout << "Please, enter the amount followed by a currency (y or e or p): ";
	while (cin >> amount >> currency)
	{

	if (currency == 'y')
		cout << amount << " yens == " << amount * 0.0089 << " dollars." << endl;
	else if
		(currency == 'e')
		cout << amount << " euros == " << amount * 1.18 << " dollars." << endl;
	else if
		(currency == 'p')
		cout << amount << " pounds == " << amount * 1.32 << " dollars." << endl;
	else
		cout << "Sorry, check the entered amount. Something is not right." << endl;

	}


	*/

	//VERSION 3 USING SWITCH

	
	/*

	cout << "Please, enter the amount followed by a currency (y for yen, e for euro, r for ruble): ";
	double amount = 0.0;
	char currency = ' ';
	cin >> amount >> currency;
	
	switch(currency)
	{
	case 'y': 
		cout << amount << " yens == " << amount * 0.0089 << " dollars." << endl;
		break;
	case 'e':
		cout << amount << " euros == " << amount * 1.19 << " dollars." << endl;
		break;
	case 'r':
		cout << amount << " rubles == " << amount * 0.017 << " dollars." << endl;
		break;
	
	default:
		cout << "Sorry, check the entered currency. Something is not right." << endl;
	}


	*/

	//TRY THIS - P.111

/*
	int i = 1;
	char letter = 'a';
	int alphabet_value = 0;

	while (i < 27)
	{
		alphabet_value = letter;
		cout << letter << "\t" << alphabet_value << endl;
		letter = ('a'+ i);
		++i;
	}
*/



/*

//TRY THIS - P.113

char letter = 'A';
int alphabet_value = 0;

for (int i = 1; i < 27; ++i)
{
	alphabet_value = letter;
	cout << letter << "\t" << alphabet_value << endl;
	letter = ('A'+ i);
}

*/

/*
 cout << square(2) << endl;
 cout << sqrt(2) << endl;
*/


//VECTORS

/*vector <int> myVector;
myVector.push_back(20);
myVector.push_back(30);


for (int i = 0; i < myVector.size(); ++i)
{
	cout << myVector[i] << endl;
}

*/

// ANOTHER VECTOR EXAMPLE


/*
vector <int> v;
int age = 0;

while (cin >> age)
{
	v.push_back(age);
}

for (int i = 0; i < v.size(); ++i)
cout << "Vector v[" << i << "] ==> " << v[i] << endl;

*/


//ANOTHER VECTOR EXAMPLE USING FOR-LOOP

/*

vector <double> temperatures;

for (double temp; cin >> temp;)
	temperatures.push_back(temp);

for (int i = 0; i < temperatures.size(); ++i)
	cout << temperatures[i];
*/



//SORT ALGORITHM AND VECTOR

/*
vector <int> vNumbers;
vNumbers.push_back(20);
vNumbers.push_back(50);
vNumbers.push_back(40);

sort(vNumbers.begin(), vNumbers.end());

for (int i = 0; i < vNumbers.size(); ++i)
cout << vNumbers[i] << endl;

cout << vNumbers[1] << endl;

*/

// ENTERING AND DISPLAYING WORDS
vector <string> words;
for (string temp; cin >> temp;)
	words.push_back(temp);

cout << "Count of words: " << words.size() << endl;

sort(words.begin(), words.end());

for (int i = 0; i < words.size(); ++i)
{
	if (i == 0 || words[i-1] != words[i])
		cout << words[i] << endl;
}




	keep_window_open();
}