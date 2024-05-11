#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <fstream>

using namespace std;

int main(){
	bool a[1000001];
	int i,j,N=1000000;
	for(i=2;i<=N;i++) a[i]=true;
	for(i=2;i*i<=N;i++){
		if (a[i]){
			j=2*i;
			while(j<=N){
				a[j]=false;
				j=j+i;

		}
	}
	}
	cout<<"liczby w przedziale <2;1000000>: \n";
	for(i=2;i<=N;i++) if(a[i]) cout<<i<<" ";
	return 0;
}
