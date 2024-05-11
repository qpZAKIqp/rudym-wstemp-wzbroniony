#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string zamien_2_16(string s2) {
	int d=0,n,i,j,p2,z;
	char c;
	string s16="",spom="";
	n=s2.size();
	for(i=n-1,z=0;i>=0;i--){
		spom=s2[i]+spom;
		z++;
		if(z%4==0){
			p2=1;	d=0;
			for (j=3;j>=0;j--) {
				d=d+(spom[j]-'0')*p2;
				p2=p2*2;
			}
			if(d<=9)	c=d+'0';	else	 c=d+'A'-10;
			s16=c+s16;
			spom="";z=0;

		}
	}
	if(spom.empty()!=1){
		n=spom.size();
		d=0;
		for(j=n-1;j>+0;j--){
				d=d+(spom[j]-'0')*p2;
				p2*=2;
			}
		if(d<=9)	c=d+'0';	else	c=d+'A'-10;
			s16=c+s16;
	}
	return s16;
}


string zamien_16_2(string s16) {
	int d,n,i,j;
	string spom,s2="";
	n=s16.size();
	for(i=n-1;i>=0;i--){
		if(s16[i]>='A'&&s16[i]<='F') d=s16[i]-'A'+10;
		else d=s16[i]-'0';
		for(j=3;j>=0;j--){
			if(d%2==1) s2='1'+s2;
			else	s2='0'+s2;
			d/=2;
		}
	}
	while (s2[0]!='1') s2.erase(0,1);
	return s2;
}

int main() {
	int d;
	string s,s2;
	char w='z';
	while (w!='K' && w!='k'){
		cout<<"\n1. Zamiana 2 na 16 - A";
		cout<<"\n1. Zamiana 16 na 2 - B";
		cout<<"\n1. Koniec - K: \n";
		cin>>w;
		switch (w) {
			case 'A': case 'a':	cout<<"Wpisz liczbe w sys. bin: ";
						cin>>s;
						s2=zamien_2_16(s);
						cout<<s2<<endl;
						break;
			case 'B': case 'b':	cout<<"Wpisz liczbe w sys. hex: ";
						cin>>s;
						s2=zamien_16_2(s);
						cout<<s2<<endl;
						break;
		}
	}
	return 0;
}

