#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream in("dane.txt");

    string s;
    int ans=0;

    while(in >> s){
        if(s[0]==s.back()){
            ans++;
        }
    }

    cout << ans;

    return 0;
}