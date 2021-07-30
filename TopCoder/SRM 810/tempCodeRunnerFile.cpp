/*
    ***************************
    *    Author: rafa45       *
    *    Date: 24 Jul 2021    *
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
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class DistinctStrings
{
public:
vector <string> generate(int L, string letters, int N){
    vector<string> ans;
    for(int i=0; i<N; i++){
        string s;
        
        s += letters[i/100%10];
        s += letters[i/10%10];
        s += letters[i%10];

        while(s.size()<L) s += letters[0];
        ans.push_back(s);
    }

    return ans;
}
};