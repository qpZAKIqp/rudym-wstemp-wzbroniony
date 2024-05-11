#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

int zamien_16_10(string s) {
	int d,n,p16,i;
	d=0;
	p16=1;
	n=s.size();
	for (i=n-1;i>=0;i--) {
		if(s[i]<='9')d=d+(s[i]-'0')*p16;
		else d=d+(s[i]-'A'+10)*p16;
		p16=p16*16;
	}
	return d;
}

string zamien_10_16(int d) {
	string z;
	int r;
	char c;
	z="";

	while (d>0) {
		r=d%16;
		if(r<=9)	c=r+'0';
		else	 c=r+'A'-10;

		z=c+z;
		d=d/16;
	}
	return z;
}

int main() {
	int d;
	string s;
	char w='z';
	while (w!='K' && w!='k'){
		cout<<"\n1. Zamiana 16 na 10 - A";
		cout<<"\n1. Zamiana 10 na 16 - B";
		cout<<"\n1. Koniec - K: \n";
		cin>>w;
		switch (w) {
			case 'A': case 'a':	cout<<"Wpisz liczbe w sys. hex: ";
						cin>>s;
						d=zamien_16_10(s);
						cout<<d<<endl;
						break;
			case 'B': case 'b':	cout<<"Wpisz liczbe w sys. dec: ";
						cin>>d;
						s=zamien_10_16(d);
						cout<<s<<endl;
						break;
		}
	}
	return 0;
}
/*switch (d%16){
		case 0:	z='0'+z;	break;
		case 1:	z='1'+z;	break;
		case 2:	z='2'+z;	break;
		case 3:	z='3'+z;	break;
		case 4:	z='4'+z;	break;
		case 5:	z='5'+z;	break;
		case 6:	z='6'+z;	break;
		case 7:	z='7'+z;	break;
		case 8:	z='8'+z;	break;
		case 9:	z='9'+z;	break;
		case 10:z='A'+z;	break;
		case 11:z='B'+z;	break;
		case 12:z='C'+z;	break;
		case 13:z='D'+z;	break;
		case 14:z='E'+z;	break;
		case 15:z='F'+z;	break;*/

