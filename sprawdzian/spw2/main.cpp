#include <iostream>

using namespace std;

class Area{
private:
    float length;
    float width;
public:
    Area(float p_length, float p_width) {
        length = p_length;
        width = p_width;
    }
    Area(Area &obiekt){
        length = obiekt.length;
        width = obiekt.width;
    }
    void displayArea(){
        cout<<"Pole wynosi: "<<length*width<<endl;
    }
};

int main()
{
    Area a1(7, 25);
    Area a2 = a1;
    a1.displayArea();
    a2.displayArea();
    return 0;
}
