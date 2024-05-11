#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
	int ilp=0, n, i;
	string l;
	fstream liczby;
	liczby.open ("liczby.txt", ios::in);
	for(i=0; i<1000;i++){
		liczby>>l;
		n=l.size();
		if (l[n-1]=='0') ilp++;
	}
	cout<<ilp;
	return 0;
}
