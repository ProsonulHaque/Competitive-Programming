#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    ll n=0, i=0, j=0, cnt=0;
    cin >> n;

    for(i=1; i<n; i++){
        cnt+=(n-1)/i;
    }

    cout << cnt << endl;

    return 0;
}

