#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

float odl(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
} 

int main(){
    ifstream in("punkty.txt");

    int x, y;
    vector<pair<int, int> > v(1000);
    float ans=0;
    int x1, y1, x2, y2;

    for(int i=0; i<1000; i++){
        in >> x >> y;
        v[i]={x, y};
    }
    
    for(int i=0; i<1000; i++){
        for(int j=i+1; j<1000; j++){
            if(ans<odl(v[i].first, v[j].first, v[i].second, v[j].second)){
                ans=odl(v[i].first, v[j].first, v[i].second, v[j].second);
                x1=v[i].first;
                y1=v[i].second;
                x2=v[j].first;
                y2=v[j].second;
            }
        }
    }

    cout << x1 << " " << y1 << " " << x2 << " " << y2;

    return 0;
}