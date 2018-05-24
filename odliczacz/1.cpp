#include <iostream>

using namespace std;

int poczatek,odejmowanie,x,y;

int main()

{
    cout << "Zapisz liczbe poczatkowa:";
    cin >> poczatek;

    cout << "Zapisz liczbe koncowa:";
    cin >> odejmowanie;

    x = poczatek-odejmowanie;
    cout << "Oto wynik z odejmowania:"<<x;
    y = poczatek+odejmowanie;
    cout << "Oto wynik z dodawania:"<<y;
}
