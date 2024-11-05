#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

bool prime(int x){
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ifstream in("NAPIS.txt");

    string s;
    int ans=0, suma;

    while(in >> s){
        suma=0;
        for(int i=0; i<s.size(); i++){
            suma+=s[i];
        }
        if(prime(suma)){
            ans++;
        }
    }

    cout << ans;

    return 0;
}