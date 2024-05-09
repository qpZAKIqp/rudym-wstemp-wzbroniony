#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <fstream>

using namespace std;

int pierwsze_test(int z){
	int i,p=1;
	for(i=2;i*i<=z;i++)
		if(z%i==0){
			p=0;
			break;
		}
	return p;
}

int main(){
	int ilp=0,z;
	fstream liczby;
    liczby.open("liczby.txt",ios::in);
	while(liczby>>z){
		z--;
		ilp=ilp+pierwsze_test(z);
	}
	liczby.close();
	cout<<ilp;
	return 0;
}
