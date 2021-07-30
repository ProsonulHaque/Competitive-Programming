#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    ll n=0, i=0, k2=0, total=0, ans=0;
    cin >> n;

    for(i=1; i<=n; i++){
        k2 = i*i;
        total = k2*(k2-1)/2;
        ans = total-4*(i-1)*(i-2);
        cout << ans << endl;
    }

    return 0;
}
