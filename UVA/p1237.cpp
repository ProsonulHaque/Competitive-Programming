/*
Author: rafa45
Date: 22 Jul 2021
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
        int d; cin >> d;
        vector<string> dbC(d);
        vector<int> dbL(d);
        vector<int> dbH(d);

        for(int i=0; i<d; i++){
            cin >> dbC[i] >> dbL[i] >> dbH[i];
        }

        int q; cin >> q;
        while (q--)
        {
            int p; cin >> p;
            int count = 0;
            string company;
            for(int i=0; i<d; i++){
                if(p >= dbL[i] && p <= dbH[i]){
                    count++;
                    company = dbC[i];
                } 
            }
            if(count == 0 || count > 1) cout << "UNDETERMINED" << endl;
            else cout << company << endl;
        }
        if(t!=0) cout << endl;
    }


    return 0;
}