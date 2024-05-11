#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

int bin_to_dec(string l){
	int i,de=0,n,p2=1;
	n=l.size();
	for(i=n-1;i>=0;i--){
		if (l[i]=='1')  de+=p2;
		p2*=2;
	}
	return de;
}

string dec_to_bin(int sde){
	string l="";
	while(sde!=0){
	if(sde%2==1) l= '1' + l;
	else if(sde%2==0) l= '0' + l;
	sde/=2;
	}

	return l;
}

int main(){
	int il9 ,sde, i;
	string l;
	fstream liczby;
	liczby.open ("liczby.txt", ios::in);
	for(i=0; i<1000;i++){
        liczby>>l;
		if(l.size()==9){
		il9++;
		sde+=bin_to_dec(l);
		}
	}
	l=dec_to_bin(sde);
	cout<<l<<" "<<il9;
	return 0;
}
