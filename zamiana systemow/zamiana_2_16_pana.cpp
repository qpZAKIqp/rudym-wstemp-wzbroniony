#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

string zamien_16_2(string s16) {
	int i,n,d;
	string s2="",s4;
	n=s16.length();
	for (i=n-1;i>=0;i--) {
		if (s16[i]<='9') d=s16[i]-'0';
		else d=s16[i]-'A'+10;
		s4="";
		while (d>0) {
			if (d%2==0) s4='0'+s4;
			else s4='1'+s4;
			d=d/2;
		}
		while (s4.size()<4) s4="0"+s4;
		s2=s4+s2;
	}
	return s2;
}

string zamien_2_16(string s2) {
	string s16="";
	int n,n4,i,j,d,p;
	char c;
	while (s2.length()%4>0) s2='0'+s2;
	n=s2.length();
	n4=n/4;
	for (i=0;i<n4;i++) {
		d=0;
		p=1;
		for (j=3;j>=0;j--) {
            d=d+(s2[j+4*i]-'0')*p;
            p=p*2;
		}
		if (d<=9) c='0'+d;
		else c='A'+d-10;
		s16=s16+c;
	}
	return s16;
}

int main()
{
    char w;
    string s2,s16;

    while(w!='3')
    {
		cout << "\n1. Zamiana z dwojkowych na szesnastkowe.  - 1";
		cout << "\n2. Zamiana z szesnastkowych na dwojkowee.  - 2";
		cout << "\n3. Koniec.  -  3\n";
		cin>>w;
			switch(w)
			{
			  case '1': system("cls");
						cout << "Wpisz liczbe w zapisie dwojkowym: "<<endl;
						cin >> s2;
						s16=zamien_2_16(s2);
						cout<<"liczba w zapisie szesnastkowym: "<<s16;
						break;

			  case '2': system("cls");
						cout<<"podaj liczbe w systemie szsnastkowym: "<<endl;
						cin>>s16;
						s2=zamien_16_2(s16);
						cout<<"liczba w zapisie dwojkowym: "<<s2;
						break;
			}
			cout<<"\n";
    }
    return 0;
}
