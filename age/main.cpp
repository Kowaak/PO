#include <iostream>

using namespace std;
class Age{
private:
    float x,y,z;
public:
    Age(){
        cout<<"Nie podano wspolrzednych"<<endl;
    }
    Age(float a){
        x = a;
        cout<<"Podana wspolrzedna x: "<<x<<endl;
    }
    Age(float a,float b){
        x = a;
        y = b;
        cout<<"Podana wspolrzedna x: "<<x<<" i y: "<<y<<endl;
    }
    Age(float a,float b,float c){
        x = a;
        y = b;
        z = c;
        cout<<"Podana wspolrzedna x: "<<x<<", y: "<<y<<" i z:"<<z<<endl;
    }
};
int main()
{
    Age p1,p2(12),p3(13,21),p4(31,21,31);
    return 0;
}
