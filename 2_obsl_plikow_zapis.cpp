#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	int x,n,i;
	fstream f1;
	f1.open("plik_n.txt", ios::out);
	cout<<"Ile liczb chcesz zapisac w pliku:\n";
	cin>>n;
	for (i=0;i<n;i++) {
		cout<<"Liczba "<<i+1<<": ";
		cin>>x;
		f1<<x<<endl;
	}
	f1.close();
	return 0;
}
