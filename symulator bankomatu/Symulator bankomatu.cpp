#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w Banku!";
    cout << "Podaj PIN:";
    cin >> PIN;
if(PIN=="3729")
{
   cout << "Poprawny PIN.";
}
else
{
    cout << "Niepoprwany PIN.";
}
return 0;
}
