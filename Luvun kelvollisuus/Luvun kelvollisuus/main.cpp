/*
Tehtävä 26 funktio, joka joka pyytää käyttäjältä luvun annetulta väliltä ja tarkistaa luvun kelvollisuuden. 
*/

#include <iostream>
using namespace std;

// funktion esittely
int pyyda_luku_valilta(int alaraja, int ylaraja);

// pääohjelma
int main()
{
    // muuttujat
    int luku;
    int alaraja;
    int ylaraja;

    // aloitus teksti
    cout << "ohjelma alkaa" << endl;

    // kysytään yläraja ja alaraja
    cout << "anna alaraja" << endl;
    cin >> alaraja;
    cout << "anna ylaraja" << endl;
    cin >> ylaraja;
    cout << endl;

    // kutsutaan funtio
    cout << "kutsutaan funktio" << endl;
    luku = pyyda_luku_valilta(alaraja, ylaraja);

    // tulostetaan funktion palauttama luku
    cout << luku;

    return 0;
}

// funktio
int pyyda_luku_valilta(int alaraja, int ylaraja)
{
    // muuttuja
    int luku;

    // silmukka
    do
    {
        // luvun syöte
        cout << "anna luku valilta " << alaraja << "-" << ylaraja << endl;
        cin >> luku;

        // kelvollinen luku viesti
        if (luku > alaraja && luku < ylaraja || luku == alaraja || luku == ylaraja)
        {
            cout << "\nluku on ok, palautetaan syotettu luku: " << endl;
        }

        // väärä luku viesti
        else if (luku < alaraja || luku > ylaraja)
        {
            cout << "luku " << luku << " ei ole kelvollinen\n"
                 << endl;
        }

        // silmukasta poistuminen
    } while (luku < alaraja || luku > ylaraja);

    // palautetaan luku
    return luku;
}