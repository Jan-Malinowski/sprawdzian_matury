#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ifstream in("slowa.txt");

    string s1 ,s2;
    int ans=0;

    while(in >> s1 >> s2){
        if(s2.find(s1)!=string::npos){
            ans++;
        }
    }

    cout << ans;

    return 0;
}