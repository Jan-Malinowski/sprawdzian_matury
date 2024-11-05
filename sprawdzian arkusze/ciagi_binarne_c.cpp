#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

long long int bin_to_dec(string s){
    long long int ans=0;
    int  p=0;

    for(int i=s.size()-1; i>=0; i--){
        ans+=(s[i]-'0')*pow(2, p);
        p++; 
    }


    return ans;
}

int main(){
    ifstream in("binarne.txt");

    string s, maxs;
    long long int maxx=0;
    while(in >> s){
        if(bin_to_dec(s)<=65535 && bin_to_dec(s)>maxx){
            maxx=bin_to_dec(s);
            maxs=s;
        }
    }

    cout << maxx << " " << maxs;

    return 0;
}