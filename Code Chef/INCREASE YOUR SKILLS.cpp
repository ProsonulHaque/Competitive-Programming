#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a=0, d=0, k=0, n=0, inc=0;
    long long i=0, s=0;

    cin >> a >> d >> k >> n >> inc;

    s = a;

    for(i=2; i<=n; i++){
        s += d;
        if(i%k==0) d += inc;
    }

    cout << s << "\n";
}

int main()
{
    int t=0;
    cin >> t;

    while(t--) solve();
    return 0;
}
