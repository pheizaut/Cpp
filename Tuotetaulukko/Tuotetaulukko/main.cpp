/*
Tehtävä tuotetaulukko
*/

#include <iostream>

using namespace std;

//taulukon tulostin
void print_array(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}

int main()
{
    //muuttujat ja taulukot
    int varasto[501] = {0};
    int tuotenro;
    char again = 'y';

    //silmukka
    do
    {

        //kysyy tuotenumeron
        cout << "kirjoita tuotenumero" << endl;
        cin >> tuotenro;

        //kysyy kappalemäärän ja lisää sen taulukkoon
        cout << "kirjoita kappalemaara" << endl;
        cin >> varasto[tuotenro];

        //silmukka kysymys
        cout << "haluatko syottaa lisaa tietoja (y/n)" << endl;
        cin >> again;

    } while (again == 'y');

    // tulosta taulukko
    print_array(varasto, 501);

    return 0;
}