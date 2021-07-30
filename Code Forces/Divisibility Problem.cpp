#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, T, cnt;
    cin >> T;

    while(T--){
        cin >> a >> b;

        if(a%b==0) cout << 0 << "\n";
        else if(a>b){
            cout << b-(a%b) << "\n";
        }
        else if(a<b){
            cout << b-a << "\n";
        }
    }

    return 0;
}
