#include <iostream>
#include <math.h>
using namespace std;
class Print{
public:
    Print(float a = 10, float b = 5, float c = 4){
        float delta = b*b-4*a*c;

        if(delta > 0){
            cout<<"x1 = "<<(-b-sqrt(delta))/(2*a)<<endl;
            cout<<"x2 = "<<(-b+sqrt(delta))/(2*a)<<endl;
        }else if(delta < 0){
            cout<<"Brak miejsc zerowych"<<endl;
        }else{
            cout<<"x0 = "<<(-b)/2*a<<endl;
        }
    }
};
int main()
{
    Print t1(4,5,-3),t2(2,-2);
    return 0;
}
