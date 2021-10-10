/*
    ***************************
    *    Author: rafa45       *
    *    Date: 30 Aug 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int GCD(int a, int b){
    if(a == 0) return b;
    return GCD(b%a, a);
}

int LCM(int a, int b){
    int gcd = GCD(a, b);
    return (a*b)/gcd;
}



int main()
{
    IOS

    /*Method 1 (Bruteforce)*/

    // int k, l, m, n, d;
    // cin >> k >> l >> m >> n >> d;

    // int ans = 0;

    // for(int i=1; i<=d; i++){
    //     if(i%k == 0 || i%l==0 || i%m==0 || i%n==0)
    //         ans++;
    // }

    // cout << ans;
    
    /*Method 1 (Bruteforce)*/
    

    /*Method 2 (Inclusion-Exclusion Principle)*/

    vector<int> nums(4);
    for(int &x:nums) cin >> x;
    
    int d; cin >> d;

    int ans = 0;

    for(int i=1; i<(1<<4); i++){
        int lcm = 1;
        int num = 0;
        int cnt = 0;

        for(int j=0; j<4; j++){
            num = 1<<j;
            if(num&i) lcm = LCM(lcm, nums[j]), cnt++;
        }

        if(cnt%2) ans += d/lcm;
        else ans -= d/lcm;
    }

    cout << ans;

    /*Method 2 (Inclusion-Exclusion Principle)*/
    


    return 0;
}