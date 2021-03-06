#pragma once
#include <iostream>
using namespace std;

int difference(float* masivA, float* masivB, int n, int m, float masivC[]) //declaring a function with 5 paragraphs
{
	int k = 0;
	for (int i = 0; i < n; i++) 
	{
		bool found = false;
		for (int j = 0; j < m; j++) 
		{
			if (masivA[i] == masivB[j]) //if the both arrays are equivalent set the found variable to be true and break the for loop
			{
				found = true;
				break;
			}
		}
		if (!found) 
		{
			masivC[k++] = masivA[i]; //if the previous if found isn't true
		}
	}
	return k;
}

void showDifference(float* masivA, float* masivB, int n, int m) //declaring a function with 4 paragraphs
{
	float masivC[100];

	int diffA = difference(masivA, masivB, n, m, masivC);
	if (diffA == 0)
	{
		cout << "There is no difference for set A" << endl; //outputs the text from the brackets in a new line
	}
	else
	{
		cout << "The difference for set A is: "; //outputs the text from the brackets

		for (int i = 0; i < diffA; i++)
		{
			cout << masivC[i]; //outputs the numbers from
		}
		cout << endl;
	} //outputs the numbers from array masivC

	int diffB = difference(masivB, masivA, m, n, masivC);

	if (diffB == 0)
	{
		cout << "There is no difference for set B" << endl; //outputs the text from the brackets in a new line
	}
	else
	{
		cout << "The difference for set B is: ";
		for (int i = 0; i < diffB; i++) /*for loop that counts the numbers inside the array*/
		{
			cout << masivC[i];
		}
	}

	cout << endl;
	cout << "Visualization: " << endl; 
	cout << endl;
	cout << "   ****   ****" << endl;
	cout << " ***************" << endl;
	cout << "******** ********" << endl;    /*outputs the text from the brackets in a new line */
	cout << "******** ********" << endl;
	cout << "******** ********" << endl;
	cout << " ***************" << endl;
	cout << "   ****   ****" << endl;
}

float findUnion(float* masivA, float* masivB, int n, int m) //declaring a function with 4 paragraphs
{
	cout << "Union is: { ";
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
			if (masivA[i] == masivB[j]) //if the both arrays are equivalent stop the program
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

	cout << "}" << endl;
	cout << endl;
	cout << "Visualization: " << endl;
	cout << endl;
	cout << "   ****   ****" << endl;
	cout << " ***************" << endl;
	cout << "*****************" << endl;
	cout << "*****************" << endl;     /*outputs the text from the brackets in a new line */
	cout << "*****************" << endl;
	cout << " ***************" << endl;
	cout << "   ****   ****" << endl;

	return 0;
}

int findIntersection(float* masivA, float* masivB, int n, int m, float masivI[]) //declaring a function with 5 paragraphs
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

void printIntersection(float* masivA, float* masivB, int n, int m) //declaring a function with 4 paragraphs
{
	float masivI[100];
	int intersectCount = findIntersection(masivA, masivB, n, m, masivI);
	if (intersectCount != 0)
	{
		cout << "Intersection is: { ";
		for (int i = 0; i < intersectCount; i++)
		{
			cout << masivI[i] << " ";
		} //outputs the numbers of masivI
		cout << "}" << endl;

		cout << endl;
		cout << "Visualization: " << endl;
		cout << endl;
		cout << "   ****   ****" << endl;
		cout << " *      *      *" << endl;
		cout << "*      ***      *" << endl;
		cout << "*      ***      *" << endl;     /*outputs the text from the brackets in a new line */
		cout << "*      ***      *" << endl;
		cout << " *      *      *" << endl;
		cout << "   ****   ****" << endl;
	}
	else
	{
		cout << "There is no Intersection!"<<endl;
	}
}

bool isSubset(float* masivA, float* masivB, int m, int n) //declaring a function with 4 paragraphs
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++) //usual for loop
	{
		for (j = 0; j < m; j++)
		{
			if (masivB[i] == masivA[j]) //if the first array is equivalent to the second one stop the program
				break;
		}
		if (j == m)
			return 0;
	}

	return 1;
}

void showSubset(float* masivA, float* masivB, int n, int m) //declaring a function with 4 paragraphs
{
	if (m < n)
	{
		if (isSubset(masivA, masivB, n, m)) 
			cout << "* B is subset of A" << endl;  /*outputs the text from the brackets in a new line */
		else
			cout << "* B is not subset of A" << endl;  
	}

	else
	{
		if (isSubset(masivB, masivA, m, n)) //
			cout << "* A is subset of B" << endl;
		else
			cout << "* A is not subset of B" << endl;
	}

	cout << endl;
	cout << "Visualization: " << endl;
	cout << endl;
	cout << "   ****" << endl;
	cout << " *      *" << endl;
	cout << "*   **   *" << endl;
	cout << "*  *  *  *" << endl;    /*outputs the text from the brackets in a new line */
	cout << "*   **   *" << endl;
	cout << " *      *" << endl;
	cout << "   ****" << endl;
}

void cartesianProduct(float* masivA, float* masivB, int n, int m) //declaring a function with 4 paragraphs
{
	cout << endl;
	cout << "* Cartesian product is: { ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "(" << masivA[i] << ", " << masivB[j] << ") "; //displays the numbers in the arrays
		}
	}
	cout << "} ";
}

bool secondMenu(float* masivA, float* masivB, int n, int m) //declaring a function with 4 paragraphs that shows us the menu
{
	int choice2;

	cout << "___________________________Options__________________________" << endl; //outputs our menu
	cout << "2) Union of the sets A and B " << endl;
	cout << "3) Cartesian product of the sets A and B " << endl;
	cout << "4) Intersection of the sets A and B" << endl;
	cout << "5) Set difference of the sets A and B" << endl;
	cout << "6) Subsets of the sets A and B" << endl;
	cout << "7) Return to main options" << endl;
	cout << "____________________________________________________________" << endl;
	cout << "Enter your choice: ";
	cin >> choice2;

	if (choice2 != 2 && choice2 != 3 && choice2 != 4 && choice2 != 5 && choice2 != 6 && choice2 != 7) 
	{
		cout << "There is no such option here! Bye for now!" << endl;  /*outputs the text from the brackets in a new line */
		cout << endl;
	}
	else 
	{
		//this is the case for the menu options
		switch (choice2) 
		{
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
		case 7:
			return false;
		default:
			break;
		}
	} 

	return false;
}
//main menu
bool mainMenu(float* masivA, float* masivB, int n, int m) //declaring a function with 5 paragraphs
{

	bool secondmenu;
	int choice;

	cout << endl;
	cout << "1) Try our program for operations with mathematical sets!" << endl;
	cout << "0) Quit." << endl;
	cout << "________________________________________________________________" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice != 1 && choice != 0) //if statement  
	{
		cout << "______________________________________________________________" << endl;
		cout << "There is no such option here! Bye for now!"<<endl;
	}
	else 
	{
		//this is the case for the menu options
		switch (choice) 
		{
		case 1: 
		{
			cout << endl;
			cout << "Enter how many elements you want to have in the first set (from 2 to 100): ";
			//have to find out how to display error message if wrong data is entered in while cycles!!!

			do 
			{
				cin >> n; //input a number from a variable n

			} while (n < 2 or n > 100); // while loop that counts all numbers from 2 to 100

			cout << "* Enter the elements of the first array: " << endl; //output the text in the quotes
			cout << "A = ";
			for (int i = 0; i < n; i++) // Enter the elements of the array masivA
			{
				cin >> masivA[i];
			}

			cout << "Enter how many elements you want to have in the second set (from 2 to 100): "; //output the text in the quotes
			do 
			{
				cin >> m; //input variable m 

			} while (m < 2 or m > 100); //while loop

			cout <<"* Enter the elements of the second array: " << endl; //output the text in the quotes
			cout << "B = ";
			for (int i = 0; i < m; i++)  // Enter the elements of the array masivB
			{
				cin >> masivB[i];
			}
			//opens the second menu and repeats it
			do 
			{
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
