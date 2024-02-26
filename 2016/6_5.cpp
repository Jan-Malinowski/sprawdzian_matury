#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

long long int c(long long int x){
    int p=0;
    long long int ans=0, g=x;
    int z=x%10;
    x/=10;
    while(x>0){
        ans+=(x%10)*pow(z, p);
        p++;
        x/=10;
    }
    return ans;
}   

int main(){
    ifstream in("liczby.txt");

    long long int x;
    long long int ans=0;
    long long int maxx=0, minn=1e9, maxdz=0, mindz=0;

    for(int i=0; i<999; i++){
        in >> x;
        if(c(x)>maxx){
            maxx=c(x);
            maxdz=x;
        }
        if(c(x)<minn){
            minn=c(x);
            mindz=x;
        }
    }
    
    cout << maxx << " " << maxdz << "\n" << minn << " " << mindz;

    return 0;
}