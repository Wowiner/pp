#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout<< "Ile masz lat:";
    cin>> wiek;

 if (wiek<18)
 {
        cout<< "Nie jestes pelnoletni, nie mozesz zostac prezydentem.";
 }


 else if ((wiek>=18) && (wiek<35))
 {
     cout<< "Jestes pelnoletni, lecz nie mozesz zostac prezydentem.";
 }


 else
 {
     cout<< "Jestes pelnoletni, mozesz zostac prezydentem.";
 }


 return 0;
}
