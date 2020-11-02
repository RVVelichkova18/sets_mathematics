// sets_mathematics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//podmnojestva (chastichni i pulni)
//sbor
//sechenie
//razlika
//cartesianski produkt
//vuvejdane na danni
//menu



int difference(float masivA[], float masivB[], int n, int m, float masivC[])
{
	int k = 0;
	for (int i = 0; i < n; i++) {
		bool found = false;
		for (int j = 0; j < m; j++) {
			if (masivA[i] == masivB[j]) {
				found = true;
				break;
			}
		}
		if (!found) {
			masivC[k++] = masivA[i];
		}
	}
	return k;
}

void showDifference(float masivA[], float masivB[], int n, int m)
{
	float masivC[100];

	int diffA = difference(masivA, masivB, n, m, masivC);
	if (diffA == 0)
	{
		cout << "There is no difference for set A" << endl;
	}
	else
	{
		cout << "The difference for set A is: ";

		for (int i = 0; i < diffA; i++)
		{
			cout << masivC[i];
		}
		cout << endl;
	}

	int diffB = difference(masivB, masivA, m, n, masivC);

	if (diffB == 0)
	{
		cout << "There is no difference for set B" << endl;
	}
	else
	{
		cout << "The difference for set B is: ";
		for (int i = 0; i < diffB; i++)
		{
			cout << masivC[i];
		}
	}

	cout << endl;
}

float findUnion(float* masivA, float* masivB, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << masivA[i] << " ";
	}
	int flag;
	for (int j = 0; j < m; j++)
	{
		flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (masivA[i] == masivB[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag != 1)
		{
			cout << masivB[j] << " ";
		}
	}
	return 0;
}

int findIntersection(float* masivA, float* masivB, int n, int m, float masivI[])
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (masivA[i] == masivB[j])
			{
				masivI[k++] = masivA[i];
			}
		}
	}
	return k;
}

void printIntersection(float* masivA, float* masivB, int n, int m)
{
	float masivI[100];
	cout << "sechenie: ";
	int intersectCount = findIntersection(masivA, masivB, n, m, masivI);
	for (int i = 0; i < intersectCount; i++)
	{
		cout << masivI[i] << " ";
	}
}

bool isSubset(float* masivA, float* masivB, int m, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (masivB[i] == masivA[j])
				break;
		}
		if (j == m)
			return 0;
	}
	return 1;
}


void showSubset(float* masivA, float* masivB, int n, int m)
{

	if (m < n)
	{
		if (isSubset(masivA, masivB, n, m))
			cout << "masivB is subset of masivA" << endl;
		else
			cout << "masivB is not subset of masivA" << endl;
	}
	else
	{
		if (isSubset(masivB, masivA, m, n))
			cout << "masivA is subset of masivB" << endl;
		else
			cout << "masivA is not subset of masivB" << endl;
	}
}

void cartesianProduct(float* masivA, float* masivB, int n, int m)
{
    cout << "cartesian product is: {";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "(" << masivA[i] << ", " << masivB[j] << ") ";
        }
    }
    cout << "} ";
}



bool secondMenu(float* masivA, float* masivB, int n, int m) {
	int choice2;
	cout << "----------Options----------" << endl;
	cout << "2) Union of the sets A and B " << endl;
	cout << "3) Cartesian product of the sets A and B " << endl;
	cout << "4) Intersection of the sets A and B" << endl;
	cout << "5) Set difference of the sets A and B" << endl;
	cout << "6) Subsets of the sets A and B" << endl;
	cout << "0) Quit" << endl;
	cout << "Enter your choice: ";
	cin >> choice2;
	if (choice2 != 2 && choice2 != 3 && choice2 != 4 && choice2 != 5 && choice2 != 6) {
		cout << "There is no such option here! Bye for now!";
	}
	else {
		//this is the case for the menu options
		switch (choice2) {
			//the case for the first option
		case 2: findUnion(masivA, masivB, n, m);

				cout << endl;
				return true;
				break;
				//the case for the second option
			case 3: cartesianProduct(masivA, masivB, n, m);

				cout << endl;
				return true;
				break;
				//the brake state of the program
			case 4: printIntersection(masivA, masivB, n, m);

				cout << endl;
				return true;
				break;
			case 5: showDifference(masivA, masivB, n, m);

				cout << endl;
				return true;
				break;
			case 6: showSubset(masivA, masivB, n, m);

				cout << endl;
				return true;
				break;
			case 0:
				return false;
			default:
				break;
		}
	}
	return false;

}

//main menu
bool mainMenu(float* masivA, float* masivB, int n, int m) {

	bool secondmenu;
	int choice;
	//Greetings and the menu options
	cout << "----------WELCOME  TO  OUR  PROGRAM---------- " << endl;
	cout << endl;
	cout << "1) Show greeting" << endl;
	
	cout << "0) Quit" << endl;
	cout << "Enter your choice:";
	cin >> choice;
	if (choice != 1 && choice != 0) {
		cout << "There is no such option here! Bye for now!";
	}
	else {
		//this is the case for the menu options
		switch (choice) {
		case 1: {
			cout << "welcome" << endl;
			//opens the second menu and repeats it
			do {
				secondmenu = secondMenu(masivA, masivB, n, m);
			} while (secondmenu);

			return true;
		}
			  //exit
		case 0:
			cout << "Bye for now!" << endl;
			return false;

		default:
			break;
		}
	}
	//stops the main menu from repeating
	return false;
}


int main()
{
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
