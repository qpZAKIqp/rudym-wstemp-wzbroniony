#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <fstream>

using namespace std;

void sito(bool a[]){
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
}
int hipoteza_Goldbaha(int z,bool a[]){
	int i,i2,ilr=0; //ilr-ilosc rozwiazan
	for(i=2;i<z/2;i+=2){
		if(a[i] && a[z-i]) ilr++;
		if(i==2){ 
			i++;
			if(a[i] && a[z-i]) ilr++;        
		}
		}
	return ilr;
}

int main(){
	int ilp=0,z,i,nwhg,nmhg;
	int hg[100][2]={0};
	bool a[1000001];
	fstream liczby;
    liczby.open("liczby.txt",ios::in);
	sito(a);	
	for(i=0;i<100;i++){
		liczby>>hg[i][0];
		hg[i][1]=hipoteza_Goldbaha(hg[i][0],a);
		if(i==0){
			nwhg=hg[i][1];
			nmhg=hg[i][1];
		}if(nwhg<hg[i][1])nwhg=hg[i][1];
		if(nmhg>hg[i][1])nmhg=hg[i][1];
	}
	for(i=0;i<100;i++){
		if(hg[i][1]==nwhg) cout<<"najwiencej rozkladow: "<<hg[i][0]<<" "<<hg[i][1]<<endl;
		if(hg[i][1]==nmhg) cout<<"najmniej rozkladow: "<<hg[i][0]<<" "<<hg[i][1]<<endl;
	}
	liczby.close();
	return 0;
}
