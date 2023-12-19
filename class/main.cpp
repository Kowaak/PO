#include <iostream>

using namespace std;

class Klasa
{
    private:
        int numerp = 5;
        int numer11 = 5;
        int numer22 = 10;
        string slowa = "Programowanie objektowe.";
        float cena;
    public:
        int numer = 7;
        int numer1 = 5;
        int numer2 = 10;
            void print1(int b){
                string a;
                cin>>a;
                cout<<"giga "<<a<<" dla numeru "<<b<<endl;
            }
            void print2(){
                cout<<numer<<endl;
            }
            string print3(){
                return slowa;
            }
            int sum(){
                return numer11 + numer22;
            }
            void print4(string a){
                cout<<a<<endl;
            }
            void setValues(float a){
                cena = a;
            }
            void cena2(){
                cout<<cena<<endl;
            }
            void display(){
                cout<<"Deep learning"<<endl;
            }
};

int main()
{
    Klasa zmi1,zmi2,cena[5],displ;
    /*
    zmi1.print1(1);
    zmi1.print1(2);
    cout<<zmi1.numer<<endl;
    zmi1.print2();
    cout<<zmi1.numer1+zmi1.numer2<<endl;
    cout<<zmi1.sum()<<endl;
    cout<<zmi1.print3()<<endl;
    zmi1.print4("Programowanie obiektowe");
    zmi2.print4("Unreal Engine.");*/

    //cena[1].setValues(15.49);
    //cena[1].cena2();
    //cena[2].setValues(45.99);
    //cena[2].cena2();
    displ.display();

    return 0;
}
