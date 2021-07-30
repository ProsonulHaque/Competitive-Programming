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


#define PRIME             M
#define mod               M
#define ll                long long
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);


int main()
{
    IOS


    int t;
    cin >> t;


    while(t--){
        int n, m; 
        cin >> n >> m;

        vector<string> original(n);
        vector<string> altered(n-1);

        for(int i=0; i<n; i++) cin >> original[i];
        for(int i=0; i<n-1; i++) cin >> altered[i];
        
        string stolen = "";
        
        for(int i=0; i<m; i++){
            unordered_map<char, int> before;
            unordered_map<char, int> after;
            for(int j=0; j<n; j++){
                before[original[j][i]]++;
                if(j<n-1) after[altered[j][i]]++;
            }
            for(auto elem : before){
                if(elem.second - after[elem.first]>0){
                    stolen += elem.first;
                    break;
                }
            }
        }

        cout << stolen << endl;
    }


    return 0;
}