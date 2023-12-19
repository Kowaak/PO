#include <iostream>

using namespace std;

int main()
{
    int nomi[9] = {1,2,5,10,20,50,100,200,500};
    int kwo;
    cout << "Podaj kwote reszty" << endl;
    cin>>kwo;
    for(int i=10;i>0;i--){
        if(nomi[i]<=kwo){
            kwo=kwo-nomi[i];
        }
        cout<<nomi[i]<<endl;
    }
    return 0;
}
