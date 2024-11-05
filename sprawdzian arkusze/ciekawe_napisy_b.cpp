#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool rosnacy(string s){

    for(int i=1; i<s.size(); i++){
        if(s[i]<=s[i-1]){
            return false;
        }
    }

    return true;
}

int main(){
    ifstream in("NAPIS.txt");

    string s;
    while(in >> s){
        if(rosnacy(s)){
            cout << s << '\n';
        }
    }

    return 0;
}