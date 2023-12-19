#include <iostream>

using namespace std;

class Srednia {
public:
    float liczby[5];
    float sred;
    Srednia(){
        cout<<"Konstruktor"<<endl;
    }
    void srednia () {
        for(int j=0;j<5;j++){
            cout<<"Podaj liczbe: "<<endl;
            cin>>liczby[j];
        }
        for(int i=0;i<5;i++){
            sred += liczby[i];
        }
        sred = sred/5;
        cout<<"Srednia wynosi: "<<sred<<endl;
    }
    ~Srednia(){
        cout<<"Milego dnia"<<endl;
    }
};

int main()
{
    Srednia a;
    a.srednia();


    return 0;
}
