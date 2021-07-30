#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define m 1000000007

int main(){
    ll n=0, i=0, cnt=0;
    cin >> n;

    for(i=5; i<=n; i*=5){
        cnt += n/i;
    }

    cout << cnt << endl;
    return 0;
}
