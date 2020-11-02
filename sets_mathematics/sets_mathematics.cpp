#include <iostream> //declaring libraries
#include <Header.h>
using namespace std;

//podmnojestva (chastichni i pulni)
//sbor
//sechenie
//razlika
//cartesianski produkt
//vuvejdane na danni
//menu





int main() //declaring the main function
{
    cout << "----------PLEASE ENETER VALUES BEFORE PROCEEDING OT THE PROGRAM---------- " << endl;
    cout << endl; //output the text in the quotes

    float masivA[200], masivB[200]; //declaring arrays called masivA and masivB
    int n = 0, m = 0; //declaring variables with value = 0

    cout << "Enter how many elements you want to have in the first set (from 2 to 100): "; //have to find out how to display error message if wrong data is entered in while cycles!!!

    do {

        cin >> n; //input a number from a variable n

    } while (n < 2 or n > 100); // while loop that counts all numbers from 2 to 100

    cout << "Enter the elements of the first array: " << endl; //output the text in the quotes

    for (int i = 0; i < n; i++) // Enter the elements of the array masivA
    {
        cin >> masivA[i]; 
    }


    cout << "Enter how many elements you want to have in the second set (from 2 to 100): "; //output the text in the quotes
    do {

        cin >> m; //input variable m 

    } while (m < 2 or m > 100); //while loop

    cout << "Enter the elements of the second array: " << endl; //output the text in the quotes

    for (int i = 0; i < m; i++)  // Enter the elements of the array masivB
    {
        cin >> masivB[i];
    }

    bool doShowMenu = true; //set the varible doShowMenu to be true
    do {
        doShowMenu = mainMenu(masivA, masivB, n, m); //shows the numbers from the array
    } while (doShowMenu); //while loop
