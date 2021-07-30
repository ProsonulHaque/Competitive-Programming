#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, b, y=0;

    cin >> l >> b;

    while(l<=b){
        y += 1;
        l = 3 * l;
        b = 2 * b;
    }

    cout << y;

    return 0;
}
