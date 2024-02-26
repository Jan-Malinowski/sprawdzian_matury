#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    ifstream in("punkty.txt");

    int x, y;
    int bok=0, srodek=0, obok=0;
    
    for(int i=0; i<1000; i++){
        in >> x >> y;
        if((x==5000 && y<=5000) || (y==5000 && x<=5000)){
            bok++;
        }
        else if(x<5000 && y<5000){
            srodek++;
        }
        else{
            obok++;
        }
    }

    cout << "na boku: " << bok << "\nwewnatrz: " << srodek << "\nna zewnatrz: " << obok;

    return 0;
}