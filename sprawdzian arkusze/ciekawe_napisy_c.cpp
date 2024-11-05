#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main(){
    ifstream in("NAPIS.txt");

    string s;
    map<string, int> v;

    while(in >> s){
        if(v[s]==1){
            v[s]++;
            cout << s << '\n';
        }
        v[s]++;
    }

    return 0;
}