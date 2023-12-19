#include <iostream>

using namespace std;
class Print{
public:
    Print(int a){
        cout<<"Jeden"<<endl;
    }
    Print(char a,int b){
        cout<<"dwa"<<endl;
    }
};
int main()
{
    Print p1(123),p2('b',222);
    return 0;
}
