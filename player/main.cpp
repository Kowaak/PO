#include <iostream>

using namespace std;
class Player{
private:
    string name;
    float exp;
public:
    void setData(string a, float b){
        name = a;
        exp = b;
    }
    void showLevel(){
        int lvl;
        if (exp >= 0 && exp <= 300){
            if (exp >= 0 && exp <= 99){
                lvl = 1;
                cout<<"Poziom gracza "<<name<<" : "<<lvl<<endl;
            }
            if (exp >= 100 && exp <= 199){
                lvl = 2;
                cout<<"Poziom gracza "<<name<<" : "<<lvl<<endl;
            }
            if (exp >= 200 && exp <= 299){
                lvl = 3;
                cout<<"Poziom gracza "<<name<<" : "<<lvl<<endl;
            }
        }else {
            cout<<"Podano zla wartosc"<<endl;
        }
    }
};
int main()
{
    Player p1,p2;
    p1.setData("Kuba",130);
    p1.showLevel();
    p2.setData("Bartek",210);
    p2.showLevel();
    return 0;
}
