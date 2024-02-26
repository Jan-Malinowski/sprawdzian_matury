#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ifstream in("kody.txt");

    string x;
    string ans;
    int par=0, npar=0;

    for(int i=0; i<500; i++){
        par=0;
        npar=0;
        in >> x;
        x.reserve();
        for(int j=0; j<x.size(); j++){
            if(j%2==1){
                par+=x[j]-'0';
            }
            else{
                npar+=x[j]-'0';
            }
        }
        cout << par << " " << npar << "\n";
    }



    return 0;
}