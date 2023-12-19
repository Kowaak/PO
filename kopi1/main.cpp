#include <iostream>
#include <math.h>
using namespace std;
class Kolo{
private:
    float *pro;
public:
    Kolo(){
        pro = new float;
    }
    Kolo(Kolo &obiekt){
        pro = new float;
        *pro = *obiekt.pro;
    }
    void setNum(float pr){
        *pro = pr;
    }
    void getNum(){
        cout<<"Promien wynosi: "<<*pro<<endl;
        cout<<"Obwod wynosi: "<<2*M_PI*(*pro)<<endl;
        cout<<"Pole wynosi: "<<M_PI*((*pro)*(*pro))<<endl;
        cout<<endl;
    }
    ~Kolo(){
        delete pro;
    }
};
int main()
{
    Kolo ko1;
    ko1.setNum(25);
    ko1.getNum();

    Kolo ko2(ko1);
    ko2.getNum();
    Kolo ko3 = ko2;
    ko3.getNum();
    return 0;
}
