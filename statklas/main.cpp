#include <iostream>
using namespace std;
class Print{
private:
    static float licz_obj;
    int licz;
public:
    Print(int p_licz){
        licz = p_licz;
        ++licz_obj;
    }
    static int getNum(){
        return licz_obj;
    }
};
float Print::licz_obj = 0.5;
void display(){
    cout<<"Liczba objektow: "<<Print::getNum()<<endl;
}
int main()
{
    display();
    Print p1(5),p2(7),p3(9),p4(12);
    display();
    return 0;
}
