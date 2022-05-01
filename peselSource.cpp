#include <iostream>
#include "peselHeader.h"

using namespace std;

char chooseFunction()
{
    char option = 0;
    while(1)
    {
        cout << "To generate PESEL press '1'" << endl << "To get data from your PESEL press '2'" << endl;
        option = getchar();
        if( option == '1' || option == '2' ) break;
        system("cls");
    }
    return option;
}
