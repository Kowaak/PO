#include <iostream>

using namespace std;
class Print{
public:
    float pln,kurs;
    Print(float x,float y){
        pln=x;
        kurs=y;
    }
    void wyn(){
        cout<<"Za "<<pln<<" pln dostaniesz: "<<pln/kurs<<" euro"<<endl;
    }
};
int main()
{
    Print p1(5,2),p2(10,3);
    p1.wyn();
    p2.wyn();
    return 0;
}
