#include <iostream>

using namespace std;

class Sum{
private:
    int liczba_1;
    int liczba_2;
public:
    Sum(){
        liczba_1 = 4;
        liczba_2 = 8;
    }

    Sum(int p_liczba_2):Sum(){liczba_2 = p_liczba_2;}

    void sum(){
        cout<<liczba_1 << "+" << liczba_2<<" = "<<liczba_1+liczba_2<<endl;
    }
};

int main()
{
    Sum s1, s2(7);
    s1.sum();
    s2.sum();
    return 0;
}
