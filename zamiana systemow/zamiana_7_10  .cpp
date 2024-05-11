#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

int zamien_7_10(string s) {
	int d,n,p7,i;
	d=0;
	p7=1;
	n=s.size();
	for (i=n-1;i>=0;i--) {
		d=d+(s[i]-'0')*p7;
		p7=p7*7;
	}
	return d;
}

string zamien_10_7(int d) {
	string z;

	char c;
	z="";
	while (d>0) {0
		c=d%7+'0';
		z=c+z;
		d=d/7;
	}
	return z;
}

int main() {
	int d;
	string s;
	char w='z';
	while (w!='K' && w!='k'){
		cout<<"\n1. Zamiana 7 na 10 - A";
		cout<<"\n1. Zamiana 10 na 7 - B";
		cout<<"\n1. Koniec - K: \n";
		cin>>w;
		switch (w) {
			case 'A': case 'a':	cout<<"Wpisz liczbe w sys. siodemkowym: ";
						cin>>s;
						d=zamien_7_10(s);
						cout<<d<<endl;
						break;
			case 'B': case 'b':	cout<<"Wpisz liczbe w sys. dec: ";
						cin>>d;
						s=zamien_10_7(d);
						cout<<s<<endl;
						break;
		}
	}
	return 0;
}


