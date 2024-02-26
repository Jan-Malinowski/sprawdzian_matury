#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    ifstream in("NM_DANE_PR/dane1.txt");
    ifstream in2("NM_DANE_PR/dane2.txt");

    int l=0, r=0;
    vector<int> v1(10), v2(10), ans(20);
    
    for(int i=0; i<1000; i++){
        r=0;
        l=0;
        for(int j=0; j<10; j++){
            in >> v1[j];
        }
        for(int j=0; j<10; j++){
            in2 >> v2[j];
        }
        for(int j=0; j<20; j++){
            if(r==10){
                ans[j]=v1[l];
                l++;
            }
            else if(l==10){
                ans[j]=v2[r];
                r++;
            }
            else if(v1[l]<v2[r]){
                ans[j]=v1[l];
                l++;
            }
            else{
                ans[j]=v2[r];
                r++;
            }
        }

        for(int j=0; j<20; j++){
            cout << ans[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}