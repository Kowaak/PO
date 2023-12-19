#include <iostream>
#include <math.h>
using namespace std;
//oblicz sile przyciagania miedzy ksiezycem a ziemia, dane ile razy ksiezyc jst mniejszy od ziemi pamietacie pamietacie ile razy ksiezyc jest mniejszy od ziemi 81 yyyyyyyy 4 cm
//przeciazenie konstruktora

class Moon{
public:
    double wyn;
    Moon(double odle=384000000,double moo=7.34e+22,double ziem=5.97e+24,double G=6.67e-11){
        wyn = G*((moo*ziem)/(odle*odle));
        cout<<"Si³a grawitacji wynosi: "<<wyn<<endl;
    }
};
int main()
{
    Moon p1;
    return 0;
}
