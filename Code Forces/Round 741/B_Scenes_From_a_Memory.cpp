/*
    ***************************
    *    Author: rafa45       *
    *    Date: 26 Aug 2021    *
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

vector<bool> isPrime(100, true);

void sieve(){
    int sq = sqrt(100);
    isPrime[1] = false;

    for(int i=2; i<sq; i++){
        for(int j=i*i; j<100; j+=i)
            isPrime[j] = false;
    }
}

int main()
{
    IOS

    sieve();

    int tc;
    cin >> tc;


    while(tc--){
        int k; cin >> k;

        string num; cin >> num;

        bool found = false;


        for(char ch:num){
            int n = ch-'0';
            if(!isPrime[n]){
                cout << 1 << endl << n << endl;
                found = true; break;
            }
        }

        if(found) continue;

        for(int i=0; i<k-1; i++){
            for(int j=i+1; j<k; j++){
                int n = (num[i]-'0')*10 + (num[j]-'0');
                if(!isPrime[n]){
                    cout << 2 << endl << n << endl; 
                    found = true; break;
                }
            }
            if(found) break;
        }
    }


    return 0;
}