/*
Tehtävä 4 Kysy ympyrän säde ja tulosta ympyrän ala
*/

#include <iostream>

using namespace std;

int main()
{
    float radius; // muuttujat
    float pi = 3.14;

    cout << "anna ympyran sade \n"
         << endl;  // tulostaa kysymyksen
    cin >> radius; // ympyrän säteen syöttö
    cout << "\n";
    cout << "ympyran ala on " << pi * radius * radius << "\n"
         << endl; // tulostaa ympyrän alan

    return 0;
}
