#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream in("liczby.txt");

    long long int x;
    long long int ans=0;

    for(int i=0; i<999; i++){
        in >> x;
        if(x%10==2){
            x/=10;
            if(x%10==0){
                ans++;
            }
        }
    }
    
    cout << ans;

    return 0;
}