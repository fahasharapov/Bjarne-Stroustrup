#include "../../std_lib_facilities.h"

int main(){

	cout << "Enter the name of the person you want to write to." << endl;
	string first_name;
	cin >> first_name;
	cout << "\nDear " << first_name << "," << endl;
	cout << "Hope you are doing fine! It's been a while since we have seen each other." 
		 << "\nThought to write you a letter and see if you are doing okay!"
		 << "\nWe are fine over here. Same old, nothing new, living our lives :) " << endl;

	string friend_name;
	cout << "\nEnter your friend's name: ";
	cin >> friend_name;

	cout << "\nHave you seen " << friend_name << " lately?" << endl;
	
	char friend_sex = 0;
	cout << "\nPlease, enter your friend's gender (m - for male / f - for female): ";
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "\nIf you see " << friend_name << ", please ask him to call me.";
	if (friend_sex == 'f')
		cout << "\nIf you see " << friend_name << ", please ask her to call me.";

	cout << "\nPlease, enter the age of the recepient: ";
	int age = 0;
	cin >> age;

	cout << "\nI hear you just had a birthday and you are " << age << " years old." << endl;

	if (age <= 0 || age >= 100)
		simple_error("you are kidding!");
	if (age < 12)
		cout << "Next year you will be " << age + 1;
	if (age == 17)
		cout << "Next year you will be able to vote.";
	if (age > 70)
		cout << "I hope you are enjoying your retirement.";

	cout << "\n\nYour sincerely," << endl;
	cout << "Faha Sharapov" << endl;


	keep_window_open();

}