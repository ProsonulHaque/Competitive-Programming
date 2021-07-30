#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll i=0;
    ll n=0;
    ll s=0;
    ll num=0;

    cin >> n;

    num = n/2;

    ll sum = num*(num+1)/2;

    if(sum>n){
        while(sum>n){
            num = num/2;
            sum = num*(num+1)/2;
        }
    }

    for(i=num+1; i<n; i++){
        sum += i;
        if(sum%n==0){
            cout << i << "\n";
            break;
        }
    }
}

int main(){

    solve();

    return 0;
}
