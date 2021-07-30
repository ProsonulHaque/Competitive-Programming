#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define m 1000000007

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=0;
    ll a=0, b=0;

    cin >> t;

    while(t--){
        cin >> a >> b;

        if((max(a,b)<=min(a,b)*2) && (a+b)%3==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
