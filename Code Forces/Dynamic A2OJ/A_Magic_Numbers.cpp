/*
    ***************************
    *    Author: rafa45       *
    *    Date: 22 Sep 2021    *
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


    string num;
    cin >> num;

    int i = 0, n = num.size();
    string ans = "YES";

    while(i<n){
        if(i<num.size()-2 && num.substr(i, 3) == "144"){
            i+=3;
        }
        else if(i<num.size()-1 && num.substr(i, 2) == "14"){
            i+=2;
        }
        else if(num[i] == '1'){
            i++;
        }
        else{
            ans = "NO";
            break;
        }
    }

    cout << ans;


    return 0;
}