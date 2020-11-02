// sets_mathematics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
using namespace std;

//podmnojestva (chastichni i pulni)
//sbor
//sechenie
//razlika
//cartesianski produkt
//vuvejdane na danni
//menu





int main()
{
	cout << "----------PLEASE ENETER VALUES BEFORE PROCEEDING OT THE PROGRAM---------- " << endl;
	cout << endl;

	float masivA[200], masivB[200];
	int n = 0, m = 0;

	cout << "Enter how many elements you want to have in the first set (from 2 to 100): ";

	//have to find out how to display error message if wrong data is entered in while cycles!!!

	do {

		cin >> n;

	} while (n < 2 or n > 100);

	cout << "Enter the elements of the first array: " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> masivA[i];
	}


	cout << "Enter how many elements you want to have in the second set (from 2 to 100): ";
	do {

		cin >> m;

	} while (m < 2 or m > 100);

	cout << "Enter the elements of the second array: " << endl;

	for (int i = 0; i < m; i++)
	{
		cin >> masivB[i];
	}

	bool doShowMenu = true;
	do {
		doShowMenu = mainMenu(masivA, masivB, n, m);
	} while (doShowMenu);
    
}
