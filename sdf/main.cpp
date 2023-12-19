
#include <string>
#include <cstring>
#include <iostream>
#include <cstdio>

using namespace std;

class Print
{

public:
    string imie;
    string nazwisko;


    Print()
          {
              imie="Zbigniew";
              nazwisko="Kucharski";
              cout<<"utworzono obiekt z uzytkownikiem: "<<imie<<" "<<nazwisko<<endl;
          }
          ~Print()
          {
              cout<<"Zakonczono dzialanie obiektu z uzytkownikiem: "<<imie<<" "<<nazwisko<<endl;
          }
};
int main()
{
    Print p1,p2;


    return 0;
}
