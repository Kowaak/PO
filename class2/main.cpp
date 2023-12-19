#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

class Print{
    private:
        float promien;
        string marka;
        string rozmiar_ramy;
        float rozmiar_kola;
        string kolor;
        float cena2;
        int war_poc;
        int war_kon;
    public:
        int number;
        string words;
        string nazwa;
        string typ;
        float cena;
        void poleKola(float r){
            cout<<"Pole kola o promieniu "<<r<<" wynosi: "<<PI*(r*r)<<endl;
        }
        void potega(int a,int b){
            cout<<a<<" do potegi "<<b<<" : "<<pow(a,b)<<endl;
        }
        void display(){
            cout<<"Deep Learning"<<endl;
        }
        void pobieranie(string a,string b,float c,string d,float e){
            marka = a;
            rozmiar_ramy=b;
            rozmiar_kola=c;
            kolor=d;
            cena2=e;
        }
        void wyswietlanie(){
             cout<<"Marka:"<<marka<<endl<<"Rozmiar ramy: "<<rozmiar_ramy<<endl<<"Rozmiar kola: "<<rozmiar_kola<<endl
             <<"Kolor: "<<kolor<<endl<<"Cena: "<<cena2<<"PLN"<<endl<<endl;
        }
        void printnum(int a,int b){
            cout<<"|";
            for (a;a<=b;a++){
                    cout<<a<<"|";
            }
            cout<<endl;
        }

};
int main()
{
    Print pl,p2,k1,k2;
    /*
    pl.cena = 4.59;
    pl.nazwa = "Chleb razowy";
    pl.typ = "Pieczywo";
    p2.cena = 4.99;
    p2.nazwa = "Coal";
    p2.typ = "Napoje";
    cout<<"1.produkt"<<endl<<"Typ: "<<pl.typ<<endl<<"Nazwa: "<<pl.nazwa<<endl<<"Cena: "<<pl.cena<<endl<<endl;
    cout<<"2.produkt"<<endl<<"Typ: "<<p2.typ<<endl<<"Nazwa: "<<p2.nazwa<<endl<<"Cena: "<<p2.cena<<endl<<endl;
    //k1.poleKola(5);
    //k2.poleKola(3);
    //pl.potega(3,2);
    //p2.potega(2,3);
    pl.display();
    pl.number = 15;
    pl.words = "Object Oriented Programming";
    cout<<pl.number<<endl;
    cout<<pl.words<<endl;
    pl.pobieranie("Kross","L",27.5,"Czarny",1650);
    pl.wyswietlanie();
    p2.pobieranie("Scott","XL",29,"Czerwony",1900);
    p2.wyswietlanie();
    */
    pl.printnum(2,9);
    p2.printnum(3,7);
    return 0;
}
