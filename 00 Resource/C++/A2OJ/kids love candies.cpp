#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, i, cat, num, candy, kid;
    cin >> T;

    while(T--){
        kid = 0;
        cin >> cat >> num;
        for(i=0; i<cat; i++){
            cin >> candy;
            kid += candy/num;
        }
        cout << kid << "\n";
    }

    return 0;
}

