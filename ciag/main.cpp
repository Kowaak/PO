#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    int tab[5];
    cout << "Podaj 5 liczb: " << endl;
    cin>>tab[0];
    cin>>tab[1];
    cin>>tab[2];
    cin>>tab[3];
    cin>>tab[4];
    for(int i=0;i<5;i++){
        if(tab[i]<tab[i+1]){
            a=a-1;
        }
    }
    if(a==0){cout<<"Rosnacy"<<endl;}
    else{cout<<"Nie rosnacy"<<endl;}

    a=4;
    for(int i=0;i<5;i++){
        if(tab[i]==tab[i+1]){
            a=a-1;
        }
    }
    if(a==0){cout<<"Staly"<<endl;}
    else{cout<<"Nie staly"<<endl;}

    a=4;
    for(int i=0;i<5;i++){
        if(tab[i]>tab[i+1]){
            a=a-1;
        }
    }
    if(a==0){cout<<"Malejacy"<<endl;}
    else{cout<<"Nie malejacy"<<endl;}
    return 0;
}
