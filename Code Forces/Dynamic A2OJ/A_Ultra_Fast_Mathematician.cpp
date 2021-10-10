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


    string num1, num2, res;
    cin >> num1 >> num2;

    for(int i=0; i<num1.size(); i++){
        if(num1[i]!=num2[i]) res += '1';
        else res += '0';
    }

    cout << res;

    return 0;
}