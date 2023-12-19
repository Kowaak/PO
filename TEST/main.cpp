#include <iostream>
using namespace std;
class Name{
public:
    Name(){
        cout<<"Nie podano zadnego imienia"<<endl;
    }
    Name(string imie){
        cout<<"Podano imie: "<<imie<<endl;
    }

};
int main()
{
    Name n1,n2("Natalia");
    return 0;
}
