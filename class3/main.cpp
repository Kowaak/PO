#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Numbers {
private:
    vector <int> numbers;
public:
    void setNumbers(int a,int b,int c){
        numbers.push_back(a);
        numbers.push_back(b);
        numbers.push_back(c);
    }
    void avgnumbers(){
        float suma;
        for(int i=0;i<numbers.size();i++){
            suma += numbers[i];
        }
        cout<<fixed<<setprecision(2)<<suma/numbers.size()<<endl;
    }
};

int main()
{
    Numbers n1,n2;
    n1.setNumbers(5,3,4);
    n1.avgnumbers();

    n2.setNumbers(7,4,2);
    n2.avgnumbers();
    return 0;
}
