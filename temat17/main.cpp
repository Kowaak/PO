#include <iostream>

using namespace std;
class Copy {
private:
    int number;
public:
    Copy(int p_number){
        number = p_number;
    }
    Copy(const Copy &obiekt){
        number = obiekt.number;
    }
    void displayNumber(){
        cout<<number<<endl;
    }
};

int main()
{
    Copy c1(15);
    Copy c2 = c1;

    c1.displayNumber();
    c2.displayNumber();
    return 0;
}
