#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int zamien_2_10(string s) {
	int d,n,p2,i;
	d=0;
	p2=1;
	n=s.size();
	for (i=n-1;i>=0;i--) {
		d=d+(s[i]-'0')*p2;
		p2=p2*2;
	}
	return d;
}

string zamien_10_2(int d) {
	string z;
	z="";
	while (d>0) {
		if (d%2==0) z='0'+z;
		else z='1'+z;
		d=d/2;
	}
	return z;
}

int main() {
	int d;
	string s;
	char w='z';
	while (w!='K' && w!='k'){
		cout<<"\n1. Zamiana 2 na 10 - A";
		cout<<"\n1. Zamiana 10 na 2 - B";
		cout<<"\n1. Koniec - K: \n";
		cin>>w;
		switch (w) {
			case 'A': case 'a':	cout<<"Wpisz liczbe w sys. bin: ";
						cin>>s;
						d=zamien_2_10(s);
						cout<<d<<endl;
						break;
			case 'B': case 'b':	cout<<"Wpisz liczbe w sys. dec: ";
						cin>>d;
						s=zamien_10_2(d);
						cout<<s<<endl;
						break;
		}
	}
	return 0;
}

