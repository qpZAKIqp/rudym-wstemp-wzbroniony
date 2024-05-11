#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

string zamien_10_U2(int d) {
	int i;
	string U2="";
	char c='0';
	if(d<0){
        c='1';
        d=d+128;
	}
    while(d>0){
        if(d%2==0) 	U2='0'+U2;
        else 		U2='1'+U2;
        d/=2;
    }
    while(U2.size()<7)	U2='0'+U2;
    U2=c+U2;
	return U2;
}

int zamien_U2_10(string U2) {
	int i,p2=1,d=0;
	for(i=7;i>=0;i--){
		if(i!=0)	d=d+(U2[i]-'0')*p2;
		else		d=d+(U2[i]-'0')*p2*(-1);
		p2*=2;
	}
	return d;
}

int main(){
	int d;
    char w;
    string U2;

    while(w!='3')
    {
		cout << "\n1. Zamiana z dziesietny na U2.  - 1";
		cout << "\n2. Zamiana z U2 na dziesietny.  - 2";
		cout << "\n3. Koniec.  -  3\n";
		cin>>w;
			switch(w)
			{
			  case '1': system("cls");
						cout << "Wpisz liczbe w zapisie dziesietnym;: "<<endl;
						cin >> d;
						U2=zamien_10_U2(d);
						cout<<"liczba w kodzie U2: "<<U2;
						break;

			  case '2': system("cls");
						cout<<"podaj liczbe w kodzie U2: "<<endl;
						cin>>U2;
						d=zamien_U2_10(U2);
						cout<<"liczba w zapisie Dziesietnym: "<<d;
						break;
			}
			cout<<"\n";
    }
    return 0;
}
