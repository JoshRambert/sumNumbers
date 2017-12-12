#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

    //Create the variables to hold the values for the users input and the two random numbers
    const int RANGE = 99;
    int rand_NUM1;
    int rand_NUM2;
    int userInput;


int main()
{
    //necessary to make the random generator operate
    srand(time(0));

    //Assign the number variables to random
    rand_NUM1 = rand();
    rand_NUM2 = rand();

    //Make sure that the random numbers do not go above 99
    rand_NUM1 = rand_NUM1 % RANGE+1;
    rand_NUM2 = rand_NUM2 % RANGE+1;

    //Not output the current status
    cout << "What is the sum of " << rand_NUM1 << " and " << rand_NUM2 << endl;

    //have the user input their answer
    cin >> userInput;

    if (userInput != rand_NUM1 + rand_NUM2)
    {
        cout << "That answer is incorrect :-/ " << endl;
    }
    else
    {
        cout << "That answer is correct! well done :-D " << endl;
    }

    //Display the equation
    cout << setw(4) << rand_NUM1 << endl;
    cout << "+" << setw(3) << rand_NUM2 << endl;
    cout << "--- " << endl;
    cout << setw(4) << rand_NUM1 + rand_NUM2 << endl;

    return 0;
}
