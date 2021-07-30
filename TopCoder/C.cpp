#include<bits/stdc++.h>
using namespace std;

#define endl              "\n"
#define ll                long long
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

////////----------------------------------Code Starts from Here----------------------------------////////

class OneForYou{
public:
ll coinCount(ll n){
    ll ans = 0;
    ll cnt = 1;
    ll i = 1;
    if(n<=1) return 0;
    while(cnt<=N){
        ans += i;
        cnt += i+1;
        i++;
    }
    return ans;
}
};

int main(){
    OneForYou c;
    cout << c.coinCount(11);
}
