#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

string zamiana_2_16(string s2){
    string s16="";
    int j, i, d, n, p2;
    char c;
    while(s2.size() % 4 != 0) s2= '0'+s2;
    n= s2.size();
    for(i = 0; i < n; i += 4){
        p2=1;
        d=0;
        for(j = i+3; j >= i; j--){
            d += (s2[j]-'0')*p2;
            p2 *= 2;
        }
        if(d % 16 >= 10){
            c = 'A' + d - 10;
        }else c = '0' + d;
        s16 += c;
    }
    return s16;
}

string zamiana_16_2(string s16){
    string s2, spom;
    int n, j, i, d;
    n = s16.size();
    for(i = n-1; i>=0; i--){
        if(s16[i] >= 'A') d = s16[i] - 'A'+10;
        else d = s16[i] - '0';
        cout << i << " " << d<< endl;
        for(j = 1; j <= 4; j++){
            if(d % 2 == 1) s2= '1' + s2;
            else s2= '0' + s2;
            d /= 2;
        }
    }
    while(s2[0] == '0') s2.erase(0,1);
    return s2;
}

int main(){
    string s16 , s2;
    char w='p';
    while(w != 'k' && w != 'K'){
        cout << "wybierz opcje:\n\t1. zamiana 2 na 16 - 1\n\t2. zamiana 16 na 2 - 2\n\t3. koniec - k\n";
        cin >> w;
        switch (w){
            case '1':   cout << "podaj liczbe w systemie dwojkowym: " << endl;
                        cin >> s2;
                        s16 = zamiana_2_16(s2);
                        cout << "twoja liczba w systemie szesnastkowym: " << s16 << endl;
                        break;
            case '2':   cout << "podaj liczbe w systemie szesnastkowym: " << endl;
                        cin >> s16;
                        s2 = zamiana_16_2(s16);
                        cout << "twoja liczba w systemie dwojkowym: " << s2 << endl;
                        break;        
        }
    }
    return 0;
}