#include <iostream>
using namespace std;
class Exponentiation{
public:
    int potega(int a,int b){
        int wynik = a;
        for(int i=1;i<b;i++){
            wynik *= a;
        }
        return wynik;
    }
};
int main()
{
    Exponentiation e1,e2;
    cout<<"1. 3 do potegi 3 : "<<e1.potega(3,3)<<endl;
    cout<<"2. 3 do potegi 3 : "<<e2.potega(2,4)<<endl;
    return 0;
}
