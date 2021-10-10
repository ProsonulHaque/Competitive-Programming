/*
    ***************************
    *    Author: rafa45       *
    *    Date: 18 Aug 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;


const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5000;


#define endl              '\p'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

vector<int> prime;
bool status[51];

void sieve(int p){
    int sq = sqrt(p);
    for(int i=2; i<=sq; i++){
        for(int j=i*i; j<=p; j+=i)
            status[j] = true;
    }
    for(int i=2; i<=50; i++){
        if(!status[i]) prime.push_back(i);
    }
}


int main()
{
    IOS


    int n, m;
    cin >> n >> m;

    sieve(m);
    string ans = "NO";
    
    for(int i=0; i<prime.size(); i++){
        if(prime[i] == m && prime[i-1] == n)
            ans = "YES";
    }

    cout << ans;
    
    return 0;
}