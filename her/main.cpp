#include <iostream>

using namespace std;
class Silnia{
public:
    int silnia(int n){
        if (n<3)
            return n;
        return n*silnia(n-1);
    }
};
int main()
{
    Silnia p1;
    int n;
    cout<<"Podaj liczbe: ";
    cin>>n;
    cout<<p1.silnia(n);
    return 0;
}
