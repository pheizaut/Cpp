/*
Tehtävä 9 ohjelma, joka kysyy postinumeroa ja kertoo sen perusteella minne lähetys on menossa
*/

#include <iostream>

using namespace std;

int main()
{
    //muuttujat
    int postinumero;

    // kysymyksen tulostus ja syöte
    cout << "anna postinumero" << endl;
    cin >> postinumero;
    cout << "\n";

    // Posti alueen tulos
    if (postinumero == 67100)
    {
        cout << "Kokkola";
    }
    else if (postinumero == 68600)
    {
        cout << "Pietarsaari";
    }
    else if (postinumero == 84100)
    {
        cout << "Ylivieska";
    }
    else if (postinumero == 90100)
    {
        cout << "Oulu";
    }

    // muu postinumero
    else if (postinumero > 10000 && postinumero < 100000)
    {
        cout << "jakelukeskus Helsinki!";
    }

    //muistutus
    if (postinumero > 10000 && postinumero < 100000)
    {
        cout << "\n\nLaheta jouluposti ajoissa!";
    }

    // postinumero error
    else
    {
        cout << "vaara postinumero";
    }

    cout << "\n";
    return 0;
}
