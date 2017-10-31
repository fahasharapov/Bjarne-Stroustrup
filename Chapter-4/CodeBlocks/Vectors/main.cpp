#include <iostream>
#include <algorithm>
using namespace std;


//void initialize_numbers(); //function prototype for exercise 7
//int get_number(); //function prototype for exercise 7

vector <string> rps_game;

void initialize_choices()
{
    rps_game.push_back("Rock");
    rps_game.push_back("Paper");
    rps_game.push_back("Scissors");
}

int main()
{
    //CHAPTER 4, EXERCISE #2, P.128

    /*
    vector <int> temperature;
    for (int temp; cin >> temp;)
        temperature.push_back(temp);

    cout << "Numbers after they are sorted: " << endl;
    sort(temperature.begin(), temperature.end());
    for (int x : temperature)
    cout << x << endl;
    cout << "The Median of entered temperatures is ==> " <<  temperature[temperature.size()/2] << endl;

    */


    //CHAPTER 4, EXERCISE #3, P.128

    /*

    //read a sequence of double values into a vector
    vector <double> distance;
    for (double temp; cin >> temp;)
        distance.push_back(temp);

    //compute and print the total distance
    double sum = 0;
    for (double x : distance)
        sum = sum + x;
    cout << "Total distance is ==> " << sum << endl;

    //find and print the smallest, greatest and the mean distance between two neighboring cities
    sort(distance.begin(), distance.end());
    cout << "The smallest distance is ==> " << distance[0] << endl;
    cout << "The greatest distance is ==> " << distance[distance.size()-1] << endl;
    cout << "The mean distance is ==> " << sum / distance.size() << endl;

    */

    //CHAPTER 4, EXERCISE #4, P.128


    /*

    //write a numbers guessing game

    string answer = "";
	int guess_max = 100;
	int guess_min = 1;

	while (guess_min != guess_max) {
		cout << "Is the number you are thinking of less than "
			<< (guess_max + guess_min + 1) / 2 << "?\n";
		cin >> answer;
		if (answer == "y" || answer == "Y" || answer == "yes" || answer == "Yes")
			guess_max = (guess_max + guess_min) / 2;
		else if (answer == "n" || answer == "N" || answer == "no" || answer == "No")
			guess_min = (guess_max + guess_min + 1) / 2;
		else {
			cout << "Bad input!\n";
		}
	}
	cout << "The number you are thinking of is " << guess_min << endl;


	*/


	//CHAPTER 4, EXERCISE #5, P.128

	/*

	//Prompt user to enter 2 doubles and 1 char
	cout << "Enter two numbers followed by the '+', '-', '*', '/' sign. ";
	double num1 = 0;
	double num2 = 0;
	char sign = ' ';
	cin >> num1 >> num2 >> sign;

	//Do the calculation...
	double sum = 0;

	if (sign == '+')
    {
        sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is " << sum;
        cout << endl;
    }

    else if
        (sign == '-')
    {
        sum = num1 - num2;
        cout << "Difference between " << num1 << " and " << num2 << " is " << sum;
        cout << endl;
    }

    else if
        (sign == '*')
    {
        sum = num1 * num2;
        cout << "Product of " << num1 << " and " << num2 << " is " << sum;
        cout << endl;
    }

    else if
        (sign == '/')
    {
        sum = num1 - num2;
        cout << "Ratio of " << num1 << " and " << num2 << " is " << sum;
        cout << endl;
    }

    else
        cout << "Something was mistyped. Please, try again." << endl;
        cout << endl;

    */



        //CHAPTER 4, EXERCISE #6, P.128


    //Making a vector holding the ten string values "zero", "two", etc...

    /*

    vector <string> values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string numbers = " ";

    cout << "Input a number from 0-9 to display them in letters. " << endl;

    while (cin >> numbers)
{
   if (numbers == " ") cout << "Number is missing. Try again." << endl;
   else if (numbers == "0") cout << numbers << " ==> " << values[0] << endl;
   else if (numbers == "zero") cout << numbers << " ==> " << values.size()-10 << endl;
   else if (numbers == "1") cout << numbers << " ==> " << values[1] << endl;
   else if (numbers == "one") cout << numbers << " ==> " << values.size()-9 << endl;
   else if (numbers == "2") cout << numbers << " ==> " << values[2] << endl;
   else if (numbers == "two") cout << numbers << " ==> " << values.size()-8 << endl;
   else if (numbers == "3") cout << numbers << " ==> " << values[3] << endl;
   else if (numbers == "three") cout << numbers << " ==> " << values.size()-7 << endl;
   else if (numbers == "4") cout << numbers << " ==> " << values[4] << endl;
   else if (numbers == "four") cout << numbers << " ==> " << values.size()-6 << endl;
   else if (numbers == "5") cout << numbers << " ==> " << values[5] << endl;
   else if (numbers == "five") cout << numbers << " ==> " << values.size()-5 << endl;
   else if (numbers == "6") cout << numbers << " ==> " << values[6] << endl;
   else if (numbers == "six") cout << numbers << " ==> " << values.size()-4 << endl;
   else if (numbers == "7") cout << numbers << " ==> " << values[7] << endl;
   else if (numbers == "seven") cout << numbers << " ==> " << values.size()-3 << endl;
   else if (numbers == "8") cout << numbers << " ==> " << values[8] << endl;
   else if (numbers == "eight") cout << numbers << " ==> " << values.size()-2 << endl;
   else if (numbers == "9") cout << numbers << " ==> " << values[9] << endl;
   else if (numbers == "nine") cout << numbers << " ==> " << values.size()-1 << endl;

   else cout << "Number " << numbers << " is out of range." << endl;

   cout << endl;

   cout << "Input a number from 0-9 to display them in letters. " << endl;
}

*/
    //CHAPTER 4, EXERCISE #7, P.129

    /*

initialize_numbers(); // function initialize_numbers is at the bottom of function main

cout << "Please, enter two floating-point values separated by an operator.\nThe operator can be + - * / % : ";

while (true)
{
    int num1 = get_number();
    char op = 0;
    cin >> op;

    int num2 = get_number();

    string oper;
    double result;

    switch(op)
    {
    case '+':
        oper = "Sum of ";
        result = num1 + num2;
        break;
    case '-':
        oper = "Difference between ";
        result = num1 - num2;
        break;
    case '*':
        oper = "Product of ";
        result = num1 * num2;
        break;
    case '/':
        oper = "Ratio of ";
        result = num1 / num2;
        break;
    case '%':
        oper = "Remainder of ";
        result = num1 % num2;
        break;
    default:
        cout << "Bad operator" << endl;
    }

    cout << oper << num1 << " and " << num2 << " is " << result << endl;

}


    return 0;



}

vector <string> numbers;

   void initialize_numbers()
   {
       numbers.push_back("zero");
       numbers.push_back("one");
       numbers.push_back("two");
       numbers.push_back("three");
       numbers.push_back("four");
       numbers.push_back("five");
       numbers.push_back("six");
       numbers.push_back("seven");
       numbers.push_back("eight");
       numbers.push_back("nine");
       numbers.push_back("ten");
   }

int get_number()
{
    const int not_a_symbol = numbers.size();

    int val = not_a_symbol;
    if (cin >> val) return val; // reads integers composed of digits

    cin.clear(); // clears string after failed attempt to read an integer

    string s;
    cin >> s;
        for (int i = 0; i < numbers.size(); ++i)
            if (numbers[i] == s) val = i;

    return val;

        */

//CHAPTER 4, EXERCISE #8 and 9, P.129

//Write a program to calculate how many squares are required to give at least 1000 grains.

/*

int squares = 0;
int sum_of_grains = 1;

for (int i = 1; i <= 64; ++i)
{
    ++squares;
    cout << squares << " ==> " << sum_of_grains << " grain(s)." << endl;
    sum_of_grains = sum_of_grains*2;
}


*/



//CHAPTER 4, EXERCISE #10, P.129

//ROCK, PAPER OR SCISSORS

initialize_choices();

cout << "-=ROCK, PAPER, SCISSORS=-" << endl << endl;
cout << "Player chooses 1 out of 3 options.\n1 ==> Rock\n2 ==> Paper\n3 ==> Scissors" << endl << endl;

string player;
string msg;
int i = 0;

char players_choice;


while(cin >> players_choice)
{
    switch(players_choice)
{
case '1':
    msg = "You chose ==> ";
    player = "Rock";
    break;
case '2':
    msg = "You chose ==> ";
    player = "Paper";
    break;
case '3':
    msg = "You chose ==> ";
    player = "Scissors";
    break;
default:
    cout << "Invalid character. Please, try again." << endl;
    return 0;
}
    cout << msg << player << endl;


    //Display computer's choice

        if (i >= 3) i = 0;
        cout << "Computer chose ==> " << rps_game[i] << endl;



    //RESULTS

    //DRAW
    if (player == "Rock" && rps_game[i] == "Rock")
        cout << "It is a Draw!" << endl << endl;
    else if (player == "Paper" && rps_game[i] == "Paper")
        cout << "It is a Draw!" << endl << endl;
    else if (player == "Scissors" && rps_game[i] == "Scissors")
        cout << "It is a Draw!" << endl << endl;


    //YOU WIN
    else if (player == "Rock" && rps_game[i] == "Scissors")
        cout << "You Win!" << endl << endl;
    else if (player == "Paper" && rps_game[i] == "Rock")
        cout << "You Win!" << endl << endl;
    else if (player == "Scissors" && rps_game[i] == "Paper")
        cout << "You Win!" << endl << endl;

     //COMPUTER WINS
    else if (player == "Rock" && rps_game[i] == "Paper")
        cout << "Computer Wins!" << endl << endl;
    else if (player == "Paper" && rps_game[i] == "Scissors")
        cout << "Computer Wins!" << endl << endl;
    else if (player == "Scissors" && rps_game[i] == "Rock")
        cout << "Computer Wins!" << endl << endl;

     ++i; // the next value in vector

}
return 0;
}



