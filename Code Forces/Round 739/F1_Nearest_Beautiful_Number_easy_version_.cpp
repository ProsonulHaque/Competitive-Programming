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


#define endl              '\n'
#define PRIME             M
#define mod               M
#define ll                long long
#define all(v)            (v).begin(),(v).end()
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    IOS


    int tc;
    cin >> tc;


    while(tc--){
        int n, k; cin >> n >> k;

        while(true){
            ll temp = n;
            unordered_set<int> st;
            while(temp){
                st.insert(temp%10);
                temp /= 10;
            }
            if(st.size()<=k){
                cout << n << endl;
                break;
            }
            else{
                string s = string;

            }
            n++;
        }
    }


    return 0;
}