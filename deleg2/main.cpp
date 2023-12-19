#include <iostream>

using namespace std;
class Assort{
private:
    string imie;
    string nazwisko;
    string wiek;
public:
    Assort(string pk,string pm,int wp){
    imie = pk;
    nazwisko = pm;
    wiek = wp;
    }
    Assort(string pk,string pm):Assort(pk,pm,"Nie podano"){}
    Assort(string pk):Assort(pk,"Nie podano","Nie podano"){}
    Assort():Assort("Nie podano","Nie podano","Nie podano"){}
    void display(){
        cout<<"Imie: "<<imie<<endl;
        cout<<"Nazwisko: "<<nazwisko<<endl;
        cout<<"Wiek: "<<wiek<<endl;
    }
};
int main()
{
    Assort a1,a2("Adam"),a3("Adam","Nowak"),a4("Adam","Nowak",21s);
    a1.display();
    a2.display();
    a3.display();
    a4.display();
    return 0;
}
