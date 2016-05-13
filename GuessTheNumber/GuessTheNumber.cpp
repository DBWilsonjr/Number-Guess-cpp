// GuessTheNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	system("color F0");

	//Declare Variables
	string fortune[12] = {"You should get 15 puppies; it will improve your day.\n", "Your lucky number is 53!\n", "You will come into money soon!\n",	"Ask again later.\n", "Rethink that risky project.\n", "Are you sure your friends have your best interests at heart?\n", "All good things come with time. And hard work.\n", "Those who hesitate will miss the boat.\n", "Who goes skiing this time of year!?\n", "Does this line make my code look fat?\n", "Reconsider the color cyan.\n", "SUNDAY SUNDAY SUNDAY!!!\n"};
	int random[500] = {0};
	int guess[500] = {0};
	int a = 0;
	char yesNo = 'y';

	//Program Start
	do
	{
		system("CLS");
		a++;
		cout << "\t\t\t* * * * * * * * * * * *" << endl;
		cout << "\t\t\t*                     *" << endl;
		cout << "\t\t\t*   Guess my number!  *" << endl;
		cout << "\t\t\t* Learn your fortune! *" << endl;
		cout << "\t\t\t*                     *" << endl;
		cout << "\t\t\t* * * * * * * * * * * *\n" << endl;
		if (a > 1)
			cout << "Previous number: " << random[a-1] <<"\nPrevious guess: "<< guess[a-1]<<"!\n" << endl;
		random[a] = rand() % 10;
		cout << "Pick a number between 0 and 10: ";
		cin >> guess[a];
		if (guess[a] >= 0 && guess[a] <= 10)
		{
			if (guess[a] == random[a])
				cout << "That's amazing! My number was " << random[a] << " and you guessed it!\n" << fortune[rand() % 10] << endl;
			else
				cout << "Sorry, my number was " << random[a] << " and you guessed " << guess[a] << "!\n" << endl;
		}
		else
			cout << "That's not a number between 1 and 10!\n" << endl;
		cout << "Try again (y or n)?";
		cin >> yesNo;
	}
	while (yesNo == 'y' || yesNo == 'Y');
	
	//Closing
	cout << "\nThank you for playing!\n" << endl;
	system("pause");
	return 0;
}

