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
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1==s2){
            ans++;
        }
    }

    cout << ans;

    return 0;
}