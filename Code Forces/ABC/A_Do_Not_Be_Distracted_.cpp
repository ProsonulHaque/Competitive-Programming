/*
    ***************************
    *    Author: rafa45       *
    *    Date: 28 Sep 2021    *
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
        int n;
        string tasks;
        cin >> n >> tasks;

        string ans = "YES";

        unordered_map<char, int> mp;

        for(int i=0; i<n; i++){
            if(mp.count(tasks[i]) == 0){
                mp[tasks[i]] = i;
            }
            else{
                if(i-mp[tasks[i]]>1){
                    ans = "NO";
                    break;
                }
                else{
                    mp[tasks[i]] = i;
                }
            }
        }

        cout << ans << endl;
    }


    return 0;
}