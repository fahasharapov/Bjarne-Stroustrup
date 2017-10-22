#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

/******* OUTPUTING VALUES OF VECTOR'S INDICES  *******/


/*
 vector <int> myVector = {1, 2, 6, 3, 10, 2};

 sort(myVector.begin(), myVector.end());

    for (int x : myVector)
        cout << x << endl;

    cout << "Median of myVector is " << myVector[myVector.size()/2] << endl;

*/


/***** WRITE A PROGRAM THAT "BLEEPS" OUT WORDS THAT YOU DON'T LIKE ******/

/*
vector <string> disliked = {"hummus","radish","squash"};

vector <string> words;
for (string temp; cin >> temp;){
    if (temp != disliked[0] && temp != disliked[1] && temp != disliked[2])
    words.push_back(temp);
    else
        words.push_back("BEEP");
}
// outputting entered words

for (int i = 0; i < words.size(); ++i)
    cout << words[i] << endl;

*/

//WRITE A PROGRAM... DRILL P.126

/******* STEP 1 *********/
/*
int num_one = 0;
int num_two = 0;

cout << "Input two numbers (integers): " << endl;

while (cin >> num_one >> num_two)
{
cout << "Number 1 ==> " << num_one << endl;
cout << "Number 2 ==> " << num_two << endl;
cout << endl << endl;
}

*/

/******* STEP 2 *********/

/*
int small = 0;
int big = 0;
int temp = 0;

cout << "Input two numbers (integers): " << endl;

while (cin >> small >> big)
{
if (small > big)
    {
        temp = small;
        small = big;
        big = temp;

cout << "Smaller Number ==> " << small << endl;
cout << "Bigger Number ==> " << big << endl;
cout << endl << endl;

    }

else
{
    cout << "Smaller Number ==> " << small << endl;
    cout << "Bigger Number ==> " << big << endl;
    cout << endl << endl;
}

}
*/

/******* STEP 3 *********/

/*

int small = 0;
int big = 0;
int temp = 0;

cout << "Input two numbers (integers): " << endl;

while (cin >> small >> big)
{
if (small > big)
    {
        temp = small;
        small = big;
        big = temp;

cout << "Smaller Number ==> " << small << endl;
cout << "Bigger Number ==> " << big << endl;
cout << endl << endl;

    }

else if (small < big)
{
    cout << "Smaller Number ==> " << small << endl;
    cout << "Bigger Number ==> " << big << endl;
    cout << endl << endl;
}

else if (small == big)
    cout << "Both Numbers are equal." << endl;
    cout << endl << endl;
}
*/


/******* STEP 4 *********/
/*

double small = 0;
double big = 0;
double temp = 0;

cout << "Input two numbers (doubles): " << endl;

while (cin >> small >> big)
{
if (small > big)
    {
        temp = small;
        small = big;
        big = temp;

cout << "Smaller Number ==> " << small << endl;
cout << "Bigger Number ==> " << big << endl;
cout << endl << endl;

    }

else if (small < big)
{
    cout << "Smaller Number ==> " << small << endl;
    cout << "Bigger Number ==> " << big << endl;
    cout << endl << endl;
}

else if (small == big)
    cout << "Both Numbers are equal." << endl;
    cout << endl << endl;
}
*/


/******* STEP 5 *********/

/*

double small = 0;
double big = 0;
double temp = 0;

cout << "Input two numbers (doubles): " << endl;

while (cin >> small >> big)
{
if (small > big)
    {
        temp = small;
        small = big;
        big = temp;

cout << "Smaller Number ==> " << small << endl;
cout << "Bigger Number ==> " << big << endl;
    if ((big - small) < 1.0/100)
        cout << "The Numbers are almost equal." << endl;
cout << endl << endl;


    }

else if (small < big)
{
    cout << "Smaller Number ==> " << small << endl;
    cout << "Bigger Number ==> " << big << endl;
    if ((big - small) < 1.0/100)
        cout << "The Numbers are almost equal." << endl;
    cout << endl << endl;
}

else if (small == big)
    cout << "Both Numbers are equal." << endl;
    cout << endl << endl;
}

*/

/******* STEP 6 *********/

/*
double smallest = 1;
double biggest = 100;


double num = 0;
cout << "Enter any number : " << endl;
while (cin >> num)
    if (num > biggest)
    {
        biggest = num;
        cout << biggest << " - This number is the largest so far." << endl;
        cout << endl;
    }

    else if (num < smallest)
    {
        smallest = num;
        cout << smallest << " - This number is the smallest so far." << endl;
        cout << endl;
    }

    else
    {
        cout << "Entered number ==> " << num << endl;
        cout << endl;
    }

*/

/******* STEPS 7, 8, 9, 10, 11 *********/

    double num = 0;
    string units;
    int entered_values = 0;
    double sum_entered_values = 0;

    vector <double> all_nums;
    while (cin >> num >> units)
    {

        all_nums.push_back(num);

       if (units == "cm")
            cout << num << "cm ==> " << num * 10 << " millimeters." << endl;
       else if (units == "in")
            cout << num << "in ==> " << num * 2.54 << " centimeters." << endl;
       else if (units == "ft")
            cout << num << "ft ==> " << num * 12 << " inches." << endl;
       else if (units == "m")
            cout << num << "m ==> " << num * 100 << " centimeters." << endl;
            else
                cout << "Unit either is missing or unknown. Please, try again." << endl;

          entered_values += 1;
          //if (units == "cm"){sum_entered_values += num*10;}
          //else if (units == "in"){sum_entered_values += num*2.54;}
          //else if (units == "ft"){sum_entered_values += num*12;}
           if (units == "m")
                {
                    sum_entered_values += num*100;
                }

    cout << endl << endl;

    }

    cout << "entered values ==> " << entered_values << endl;
    cout << "sum of entered meter values ==> " << sum_entered_values << endl;

    sort(all_nums.begin(), all_nums.end());
    for (int i = 0; i < all_nums.size(); ++i)
    {
        cout << all_nums[i] << " ";
    }

        cout << endl << endl;

}
