#include <iostream>

using namespace std;
class TicketMachine{
private:
    float cena;
    int znizka;
public:
    void setPrices(float a,int b=0){
        cena = a;
        znizka = b;
    }
    void priceToPay(){
        switch(znizka){
    case 0:
        cout<<"Nalezna kwota (normalna cena): "<<cena<<" PLN"<<endl;
        break;
    case 1:
        cout<<"Nalezna kwota (znizka seniora): "<<(cena/100)*70<<" PLN"<<endl;
        break;
    case 2:
        cout<<"Nalezna kwota (znizka studencka): "<<(cena/100)*51<<" PLN"<<endl;
        break;
    default:
        cout<<"Nie ma takiej znizki"<<endl;
        }
    }
};
int main()
{
    TicketMachine t1,t2,t3;
    cout<<"Menu znizek"<<endl<<"0 - Normalna cena(0%)"<<endl<<"1 - znizka seniora(30%)"<<endl<<"2 - znizka studenca(49%)"<<endl<<endl;
    t1.setPrices(75,1);
    t1.priceToPay();
    t2.setPrices(100,2);
    t2.priceToPay();
    t3.setPrices(65);
    t3.priceToPay();

    return 0;
}
