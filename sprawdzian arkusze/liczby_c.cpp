#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool malejace(string s){

    for(int i=1; i<s.size(); i++){
        if(s[i]<s[i-1]){
            return false;
        }
    }

    return true;
}

long long int hex_to_bin(string s){
    long long int ans=0;
    int p=0;

    for(int i=s.size()-1; i>=0; i--){
        ans+=(s[i]-'0')*pow(8, p);
        p++; 
    }

    return ans;
}

int main(){
    ifstream in("dane.txt");

    string s, maxs, mins;
    long long int minn=1e9, maxx=0;
    int ans=0;
    while(in >> s){
        if(malejace(s)){
            ans++;
            if(maxx<hex_to_bin(s)){
                maxx=hex_to_bin(s);
                maxs=s;
            }
            if(minn>hex_to_bin(s)){
                minn=hex_to_bin(s);
                mins=s;
            }
        }
    }

    cout << ans << " " << maxs << " " << mins;

    return 0;
}