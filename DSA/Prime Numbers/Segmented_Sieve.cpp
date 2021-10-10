/*
    ***************************
    *    Author: rafa45       *
    *    Date: 11 Aug 2021    *
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


void simpleSieve(int n, vector<int> &prime){
    vector<bool> status(n+1, true);
    for(int i=2; i*i<=n; i++){
        if(status[i]){
            for(int p=i*i; p<=n; p+=i){
                status[p] = false;
            }
        }
    }

    for(int i=2; i<=n; i++) 
        if(status[i]) prime.push_back(i);
}

void segmentedSieve(int n){
    int sq = sqrt(n);
    vector<int> prime;
    simpleSieve(sq, prime);

    int initial = prime.size();
    int low = sq+1, high = 2*sq;

    while(low<n){
        if(high>n) high = n;
        vector<bool> status(high-low+1, true);

        for(int i=0; i<initial; i++){
            int lowLim = low/prime[i]*prime[i];
            if(lowLim < low) lowLim += prime[i];

            while(lowLim<=high){
                status[lowLim-low] = false;
                lowLim += prime[i];
            }
        }

        for(int i=0; i<status.size(); i++)
            if(status[i]) prime.push_back(i+low);
        
        low += sq;
        high += sq;
    }

    for(int p:prime) cout << p << endl;
}

int main()
{
    IOS

    int n; cin >> n;
    segmentedSieve(n);


    return 0;
}