#include <iostream>

using namespace std;
class Triangle{
private:
    float a,h;
    float stan;
public:
    void setValue(float b,float c){
            a=b;
            h=c;
    }
    void deposit(float a2){
        cout<<"Wplacona kwota: "<<a2<<endl;
        stan +=a2;
    }
    void withdraw(float b2){
        cout<<"Wyplacona kwota: "<<b2<<endl;
        stan -=b2;
    }
    void status(){
        cout<<"Stan konta: "<<stan<<endl;
    }
    void calculateArea(){
        cout<<"Pole trojkata wynosi"<<(a*h)/2<<endl;
    }

};
int main()
{
    Triangle t1,t2;
    //t1.setValue(4,2);
    //t1.calculateArea();
    //t2.setValue(8,4);
    //t2.calculateArea();
    t1.deposit(5000);
    t1.status();
    t1.withdraw(1500);
    t1.status();
    t1.deposit(1000);
    t1.status();
    return 0;
}
