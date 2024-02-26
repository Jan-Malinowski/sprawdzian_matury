#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    ifstream in("NM_DANE_PR/dane1.txt");
    ifstream in2("NM_DANE_PR/dane2.txt");


    int x, y;
    int ans=0;
    
    for(int i=0; i<1000; i++){
        for(int j=0; j<10; j++){
            in >> x;
        }
        for(int j=0; j<10; j++){
            in2 >> y;
        }
        if(x==y){
            ans++;
        }
    }

    cout << ans;

    return 0;
}