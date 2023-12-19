#include <iostream>

using namespace std;

class class_a {
public:
    class_a() {}
    class_a(string str) : imie{ str } {}
    class_a(string str, int wie) : class_a(str) { wiek = wie; }
    int wiek{ 16 };
    string imie{ wiek < 18 ? "alpha" : "K" };
};


int main() {
    class_a a{"Adam",17};
    cout<<a.wiek<<endl;
    cout<<a.imie<<endl;
    int y = 4;
}
