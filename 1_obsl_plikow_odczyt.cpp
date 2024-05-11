#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	int x;
	fstream f1;
	f1.open("plik_o.txt", ios::in);
	cout<<"oto zawartosc pliku plik_o.txt:\n";
	while (!f1.eof()) {
		if(f1>>x) cout<<x<<" ";
	}
	f1.close();
	cout<<"\n\n";
	system("PAUSE");
	return 0;
}
