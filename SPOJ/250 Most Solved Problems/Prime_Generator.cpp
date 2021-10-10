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

void simpleSieve(int n, vector<int> &initialPrimes){
    vector<bool> status(n+1, true);

    for(int i=2; i*i<=n; i++){
        if(status[i]){
            for(int p=i*i; p<=n; p+=i){
                status[p] = false;
            }
        }
    }

    for(int i=2; i<=n; i++) 
        if(status[i]) initialPrimes.push_back(i);
}

vector<int> segmentedSieve(int m, int n){
    int sq = sqrt(n);
    vector<int> initialPrimes, primes;
    simpleSieve(sq, initialPrimes);

    int low = m, high = n;

    vector<bool> status(high-low+1, true);
    if(low == 1) status[0] = false;

    for(int i=0; i<initialPrimes.size(); i++){
        int lowLim = low/initialPrimes[i]*initialPrimes[i];
        if(lowLim < low) lowLim += initialPrimes[i];
        if(lowLim == initialPrimes[i]) lowLim += initialPrimes[i];

        while(lowLim<=high){
            status[lowLim-low] = false;
            lowLim += initialPrimes[i];
        }
    }

    for(int i=0; i<status.size(); i++)
        if(status[i]) primes.push_back(i+low);
   
    return primes;
}

int main()
{
    IOS


    int tc;
    cin >> tc;

    while(tc--){
        int m, n; cin >> m >> n;
        vector<int> primes = segmentedSieve(m, n);
        for(int i=0; i<primes.size(); i++){
            cout << primes[i] << endl;
        }
        cout << endl;
    }


    return 0;
}