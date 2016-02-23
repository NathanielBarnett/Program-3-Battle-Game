// This is the implementation file for the utility functions.

#include "Utils.h"
using namespace std;

int GetUserInput(int min, int max)
{
	int input;
	bool Uchoice = false;
	do
	{
		cout << "Pick a number between " << min << "and "
			<< max << endl;
		cin >> input;
		if (input >= min && input <= max)
		{
			Uchoice = true;
		}
	} while (Uchoice);
	return input;
}


int GetRandom(int min, int max)
{
	int randNum;

	//seed random generator
	//srand (time(NULL));
	do
	{
		randNum = (rand() % max) + 1;
	} while (randNum > min && randNum < max);
	return randNum;
}