#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool hex_to_bin(string s){
    long long int ans=0;
    int last, first, p=0;

    for(int i=s.size()-1; i>=0; i--){
        ans+=(s[i]-'0')*pow(8, p);
        p++; 
    }

    last=ans%10;

    while(ans>0){
        first=ans%10;
        ans/=10;
    }

    if(first==last){
        return true;
    }
    return false;
}

int main(){
    ifstream in("dane.txt");

    string s;
    int ans=0;

    while(in >> s){
        if(hex_to_bin(s)){
            ans++;
        }
    }

    cout << ans;

    return 0;
}