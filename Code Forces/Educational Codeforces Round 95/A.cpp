#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long x, y, k, n=0;

    cin >> x >> y >> k;

    if(((k*(y+1)-1)%(x-1))==0)
        n = ((k*(y+1)-1)/(x-1))+k;
    else
        n = ((k*(y+1)-1)/(x-1))+1+k;
    /*Alternative method
    ceil(a / b) = (a + b - 1) / b
    //So
    n = ((k*(y+1)-1)+(x-2))/(x-1)+k;
    */
    cout << n << "\n";
}

int main(){
    int t=0;

    cin >> t;

    while(t--) solve();

    return 0;
}
