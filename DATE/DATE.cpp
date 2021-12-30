#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    int day = 11;
    int mon = 12;
    int yea = 2022;

    date date1(day, mon, yea);

    date1.afficher();

   
}
