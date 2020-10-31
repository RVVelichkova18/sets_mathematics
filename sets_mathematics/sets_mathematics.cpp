// sets_mathematics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float masivA[200], masivB[200];
int n, m;
float sechenieMasiv[200];
int sechenieIndex;


//podmnojestva (chastichni i pulni)
//sbor
//sechenie
//razlika
//cartesianski produkt
//vuvejdane na danni
//menu



void cartesianProduct(float masivA[], float masivB[], int n, int m)
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

void enterElementsOfArrays(float masivA[], float masivB[], int n, int m)
{

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
}

bool secondMenu(float masivA, float masivB, int n, int m) {
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
	if (choice2 != 2 && choice2 != 3 && choice2 != 4) {
		cout << "There is no such option here! Bye for now!";
	}
	else {
		//this is the case for the menu options
		switch (choice2) {
			//the case for the first option
			case 2:

				cout << endl;
				return true;
				break;
				//the case for the second option
			case 3:

				cout << endl;
				return true;
				break;
				//the brake state of the program
			case 4:
				return false;
			default:
				break;
		}
	}
	return false;

}

//main menu
bool mainMenu(float masivA, float masivB, int n, int m) {


	bool secondmenu;
	int choice;
	//Greetings and the menu options
	cout << "----------WELCOME  TO  OUR  PROGRAM---------- " << endl;
	cout << endl;
	cout << "1)Enter (1) if you want to know how to use mathematical sets operations." << endl;
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
				enterElementsOfArrays(masivA, masivB, m, n);
				//opens the second menu and repeats it
				do {
					secondmenu = secondMenu(masivA, masivB, n, m);
				} while (secondmenu);

				return true;
			}
				  //exit
			case 4:
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
    
    enterElementsOfArrays(masivA, masivB, n, m);
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
