#include <iostream>

using namespace std;
class Tria{
private:
    string c;
    string b;
    float a;
public:
    Tria(float pa,string pc,string pb) : a(pa),c(pc),b(pb){}
    /*void operator + (int c){
      if(c>0){
        cout<<"1"<<endl;
      }else if(c<0)
        cout<<"-1"<<endl;
    }
    void operator + (int c){
        if(c>0){
            cout<<c<<endl;
        }else if(c<0)
            cout<<-c<<endl;
        else cout<<c<<endl;
    }*/
    friend ostream &operator << (ostream &out, const Tria &obiekt){
        out<<"Imie: "<<obiekt.b<<endl;
        out<<"Nazwisko: "<<obiekt.c<<endl;
        out<<"wiek: "<<obiekt.a<<endl;
        return out;
    }
};
int main()
{
    Tria n1(24,"Kowalski","Jan"),n2(23,"Kowalska","Ania");
    cout<<n1<<n2;
    return 0;
}
