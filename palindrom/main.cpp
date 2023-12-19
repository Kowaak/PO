#include <iostream>
#include <cstring>

using namespace std;

bool spr(char tab[]){
    int x=0,y=strlen(tab)-1,z=1;
    while(x<y){
        if(tab[x]!=tab[y])
                return false;
            ++x;
            --y;
    }
    return true;
}

int main()
{
    char tab[50];
    cout << "Podaj wyraz: ";
    cin>>tab;
    if(spr(tab)){
        cout<<"jest palindromem"<<endl;
    }else{
        cout<<"nie jest palindromem"<<endl;
    }
    return 0;
}
