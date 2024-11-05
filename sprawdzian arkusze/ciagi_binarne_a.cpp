#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ifstream in("binarne.txt");

    string s, s1, s2, longest="";
    int ans=0;
    while(in >> s){
        s1=s.substr(0, s.size()/2);
        s2=s.substr(s.size()/2, s.size()/2);

        if(s1==s2){
            ans++;
            if(s.size()>longest.size()){
                longest=s;
            }
        }
    }

    cout << ans << "  " << longest << " " << longest.size();

    return 0;
}