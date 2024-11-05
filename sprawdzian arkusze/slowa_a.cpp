#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream in("slowa.txt");

    string s;
    int ans=0;

    while(in >> s){
        if(s.back()=='A'){
            ans++;
        }
    }

    cout << ans;

    return 0;
}