#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ifstream in("binarne.txt");

    string s, shortest(999, '0');
    int ans=0;
    while(in >> s){
        for(int i=0; i<s.size(); i+=4){
            if(s[i]=='1' && (s[i+1]=='1' || s[i+2]=='1')){
                ans++;
                if(s.size()<shortest.size()){
                    shortest=s;
                }
                break;
            }
        }
    }

    cout << ans << " " << shortest.size();

    return 0;
}