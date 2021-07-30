/*
Author: rafa45
Date: 11 Jul 2021
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int t;
    cin >> t;


    while(t--){
        int n; cin >> n;

        vector<int> a(n);
        vector<int> b(n);
        vector<int> dec;
        vector<int> inc;

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        if(accumulate(a.begin(), a.end(), 0) != accumulate(b.begin(), b.end(), 0)){
            cout << -1 << endl;
            continue;
        }

        for(int i=0; i<n; i++){
            int t = 0;
            if(a[i]>b[i]){
                t = a[i]-b[i];
                while(t--) dec.push_back(i+1);
            } 
            if(a[i]<b[i]){
                t = b[i]-a[i];
                while(t--) inc.push_back(i+1);
            }
        }

        cout << dec.size() << endl;
        
        for(int i=0; i<dec.size(); i++){
            cout << dec[i] << " " << inc[i] << endl;
        }
    }


    return 0;
}