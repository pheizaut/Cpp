/*
Tehtävä 7 ohjelma polttoainekuitin tulostamiseen
*/

#include <iostream>

using namespace std;

int main()
{
    //muuttujat
    int type;
    float amount;

    // kysymyksen tulostus ja syöte
    cout << "1. bensa, 2. diesel" << endl
         << "valitse numero ";
    cin >> type;
    cout << "kirjoita litramaara ";
    cin >> amount;

    //kuitin tulos
    cout << "\nPolttoainekutti:\n"
         << endl;

    if (type == 1) //Bensa kutin tulostus
    {
        cout << "Bensa 1.726 euroa/litra" << endl;
        cout << "ostettu " << amount << " litraa" << endl;
        cout << "Maksettava " << amount * 1.726 << " euroa\n"
             << endl;
    }
    else if (type == 2) //Diesel kutin tulostus
    {
        cout << "Diesel 1.532 euroa/litra" << endl;
        cout << "ostettu " << amount << " litraa" << endl;
        cout << "Maksettava " << amount * 1.532 << " euroa\n";
    }

    else //väärä valinta error
    {
        cout << "vaara polttoaine tyyppi";
    }
}
