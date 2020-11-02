//declaring libraries
#include <iostream> 
#include "Header.h"
using namespace std;

int main() //declaring the main function
{
    float masivA[200], masivB[200]; //declaring arrays called masivA and masivB
    int n = 0, m = 0; //declaring variables with value = 0
    bool doShowMenu = true; //set the varible doShowMenu to be true

    do 
    {
        doShowMenu = mainMenu(masivA, masivB, n, m); //shows the numbers from the array
    } while (doShowMenu); //while loop
}
