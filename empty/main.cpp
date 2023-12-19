#include <iostream>
#include <string>
using namespace std;

int main() {

	string tekst;

	if(tekst.empty())
		cout<<"Nie ma co wypisywaæ\n";

	tekst.insert(0,"Ala ma kota");

	if(!tekst.empty())
		cout<<tekst<<endl;


	string tekst2("Ala ma kota!!!");
	int liczba_znakow = tekst2.size();
	cout<<"Podany ciag sklada sie z "<<liczba_znakow<<" znakow."<<endl;

    string tekst3("Ala ma kota!!!");
	cout<<tekst3<<endl;
	tekst3.clear();
	cout<<tekst3<<endl;

    string tekst4("Ala ma kota!!!");
	int liczba_znakow2 = tekst4.length();

	cout<<"Podany ciag sklada sie z "<<liczba_znakow2<<" znakow."<<endl;
	string tekst5("lokomotywa");
	cout<<tekst5<<endl;
	tekst5.resize(3);
	cout<<tekst5<<endl;
	tekst5.resize(tekst5.size()+4,'!');
	cout<<tekst5<<endl;

    string tekst6;
	cout<<tekst6.max_size()<<endl;

	string teksti("Filip"), teksta;
	teksta.insert(0," ");
	teksti.append(teksta);
	teksti.append("Zalecki ");
	cout<<teksti<<endl;

	string tekst8("Ala ma kota"), tekst8a("lokomotywa");
	cout<<tekst8<<" "<<tekst8a<<endl;
	tekst8.swap(tekst8a);
	cout<<tekst8<<" "<<tekst8a<<endl;

    string tekst9("Ala ma kota!?");
	cout<<tekst9<<endl;
	tekst9.pop_back(); //usuniêcie znaku ?
	tekst9.pop_back(); //usuniêcie znaku !
	cout<<tekst9<<endl;
	return 0;
}
