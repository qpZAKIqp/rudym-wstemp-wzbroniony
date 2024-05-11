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

int main(){
	int de, i;
	string l, l_naj="";
	fstream liczby;
	liczby.open ("liczby.txt", ios::in);
	for(i=0; i<1000;i++){
        liczby>>l;
		if(l_naj.size()<l.size()) l_naj=l;
		else if(l_naj.size()==l.size() && l>l_naj) l_naj=l;
	}
	de=bin_to_dec(l_naj);
	cout<<l_naj<<" "<<de;
	return 0;
}
