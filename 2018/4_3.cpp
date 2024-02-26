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
    vector<int> v1(101), v2(101);
    
    for(int i=0; i<1000; i++){
        for(int j=0; j<10; j++){
            in >> x;
            v1[x]=1;
        }
        for(int j=0; j<10; j++){
            in2 >> y;
            v2[y]=1;
        }
        if(v1==v2){
            cout << i+1 << " ";
            ans++;
        }
        v1.clear();
        v1.resize(101);
        v2.clear();
        v2.resize(101);
    }

    cout << "\nile wierszy: " << ans;

    return 0;
}