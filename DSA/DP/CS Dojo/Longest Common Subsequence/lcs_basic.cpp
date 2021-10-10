/*
    ***************************
    *    Author: rafa45       *
    *    Date: 09 Sep 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;

#define endl              '\n'
#define IOS               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int M = 100, N = 100;
int dp[M][N];

int LCS(string p, string q, int m, int n){
    if(dp[m-1][n-1] != -1)
        return dp[m-1][n-1];
    
    int result = 0;

    //base case
    if(m==0 || n==0) 
        result = 0;
    else if(p[m-1] == q[n-1])
        result = 1+LCS(p, q, m-1, n-1);
    else
        result = max(LCS(p, q, m, n-1), LCS(p, q, m-1, n));
    
    dp[m-1][n-1] = result;

    return result;
}


int main()
{
    IOS

    memset(dp, -1, sizeof(dp));

    string s1, s2;
    cin >> s1 >> s2;

    cout << "LCS Length: " << LCS(s1, s2, s1.length(), s2.length());

    return 0;
}