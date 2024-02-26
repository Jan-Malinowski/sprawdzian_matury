#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream in("punkty.txt");

    int x, y;
    int ans=0;

    vector<int> v1(10), v2(10);

    for(int i=0; i<1000; i++){
        in >> x >> y;
        while(x>0){
            v1[x%10]=1;
            x/=10;
        }
        while(y>0){
            v2[y%10]=1;
            y/=10;
        }
        if(v1==v2){
            ans++;
        }
        v1.clear();
        v1.resize(10);
        v2.clear();
        v2.resize(10);
    }
    
    cout << ans;

    return 0;
}