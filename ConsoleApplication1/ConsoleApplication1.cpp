// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
	srand(time(0));
	int number;
	number = rand() % 100 + 1;
	int guess;
	do {
		cout << "Guess the number: ";
		cin >> guess;
		if (guess < number)
			cout << "Your guess is lower than the number" << endl;
		else if (guess > number)
			cout << "Your guess is higher than the number" << endl;
		else
			cout << "Your guess is correct" << endl;
	} while (guess != number);
	system("Pause");
    return 0;
}

