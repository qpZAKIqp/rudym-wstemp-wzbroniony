#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int n,i,x;
	fstream f1;
	f1.open("plik_n.txt",ios::out|ios::app);
	cout<<"Ile liczb chcesz dopisac do pliku? n=";
	cin>>n;
	for (i=0;i<n;i++) {
	    cout<<"\nliczba "<<i+1<<": ";
		cin>>x;
		f1<<x<<endl;;
	}

	f1.close();
    cout<<"\nLiczby dopisano...";
    cout<<"\n\n";
    system("PAUSE");
    return 0;
}
