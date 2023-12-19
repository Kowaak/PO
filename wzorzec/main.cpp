#include <iostream>

using namespace std;

int szukaj(string wzorzec, string tekst)
{
	for(int i=0;i <= tekst.size() - wzorzec.size();i++) //po tekœcie
	{
		int c = 0;
		for(int j=0;j<wzorzec.size();j++)
		{
			if(wzorzec[j] != tekst[i + c])
				break;
			if(j == wzorzec.size() - 1)
				return i+1;
			++c;
		}
	}
	return -1;
}
int main()
{
    string wzorzec="ka", tekst = "karykatura";
	int pos = szukaj(wzorzec, tekst);

	if(pos == -1)
		cout<<"Wzorca nie znaleziono";
	else
		cout<<"Wzorzec znaleziono na "<<pos<<" pozycji";

	return 0;
}
