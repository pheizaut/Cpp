/*
Tehtävä karkausvuosi 
*/

#include <iostream>

using namespace std;

int main()
{
    //muuttujat
    int vuosiluku;
    char uudelleen;

    //silmukka
    do
    {

        // kysymyksen tulostus ja syöte
        cout << "anna vuosiluku" << endl;
        cin >> vuosiluku;
        //karkausvuosi algoritmi
        if (((vuosiluku % 4 == 0) && (vuosiluku % 100 != 0)) || (vuosiluku % 400 == 0))
        {

            cout << "\n"
                 << vuosiluku << " on karkausvuosi\n\n";
        }

        else
        {

            cout << "\n"
                 << vuosiluku << " ei ole karkausvuosi\n\n";
        }

        // silmukka kysymys
        cout << "haluatko tarkistaa toisen vuoden? (y/n) ";
        cin >> uudelleen;
        cout << "\n\n";

    } while (uudelleen == 'y');

    return 0;
}
