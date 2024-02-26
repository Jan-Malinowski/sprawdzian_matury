#include <iostream>
#include <fstream>

using namespace std;

bool prime(int n){
    for(int i=2; i<n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
} 

int main(){
    ifstream in("punkty.txt");

    int x, y;
    int ans=0;

    for(int i=0; i<1000; i++){
        in >> x >> y;
        if(prime(x) && prime(y)){
            ans++;
        }
    }
    
    cout << ans;

    return 0;
}