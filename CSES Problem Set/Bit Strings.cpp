#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define m 1000000007

ll power(ll b, ll p){
    ll i=0, mul=1;

    for(i=1; i<=p; i++){
        mul *= b%m;
        mul %= m;
    }
    return mul;
}

int main(){
    ll n=0;
    cin >> n;

    cout << power(2, n) << endl;

    return 0;
}

