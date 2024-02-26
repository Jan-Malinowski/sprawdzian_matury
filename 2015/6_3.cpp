#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ifstream in("kody.txt");
    ifstream in2("cyfra_kodkreskowy.txt");

    vector<string> kod(10);
    string x;

    for(int i=0; i<10; i++){
        
        in2 >> x >> kod[i];
    }


    string ans;
    int par=0, npar=0;

    for(int i=0; i<500; i++){
        par=0;
        npar=0;
        in >> x;
        ans="11011010";
        for(int j=0; j<x.size(); j++){
            ans+=kod[x[j]-'0'];
        }
        x.reserve();
        for(int j=0; j<x.size(); j++){
            if(j%2==1){
                par+=x[j]-'0';
            }
            else{
                npar+=x[j]-'0';
            }
        }
        par=(par*3+npar)%10;
        par=(10-par)%10;
        ans+=kod[par];
        ans+="11010110";
        cout << ans << "\n";
    }



    return 0;
}