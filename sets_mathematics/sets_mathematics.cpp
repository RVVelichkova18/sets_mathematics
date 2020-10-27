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

void enterElementsOfArrays(float masivA[], float masivB[])
{
    int n, m;
    
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

int main()
{
    float masivA[200], masivB[200];
    enterElementsOfArrays(masivA, masivB);
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
