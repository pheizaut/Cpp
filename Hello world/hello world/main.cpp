#include <iostream>

using namespace std;

int main()
{
    // muuttujat
    int age;

    // toiminta
    cout << "Hei maailma!" << endl; // tulostaa tekstin ja rivin vaihto
    cout << "Anna ika:";

    cin >> age; // teksti syöttö
    cout << "minun ikani on " << age << " vuotta!";

    return 0; // paluuarvo kustuvalle ohjelmalle 0
}