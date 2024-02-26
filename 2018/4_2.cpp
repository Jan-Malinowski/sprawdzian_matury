#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    ifstream in("NM_DANE_PR/dane1.txt");
    ifstream in2("NM_DANE_PR/dane2.txt");


    int x, y, par1, par2;
    int ans=0;
    
    for(int i=0; i<1000; i++){
        par1=0, par2=0;
        for(int j=0; j<10; j++){
            in >> x;
            if(x%2==0){
                par1++;
            }
        }
        for(int j=0; j<10; j++){
            in2 >> y;
            if(y%2==0){
                par2++;
            }
        }
        if(par1==5 && par2==5){
            ans++;
        }
    }

    cout << ans;

    return 0;
}