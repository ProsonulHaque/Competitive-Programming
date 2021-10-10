/*
    ***************************
    *    Author: rafa45       *
    *    Date: 08 Sep 2021    *
    ***************************
*/


#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int MAX = 1024;
const int INF = 999999999;

int dp[MAX][22][80];
int oxy[MAX], nitro[MAX], weight[MAX];

int minWeight(int i, int O, int N){
    if(dp[i][O][N] != -1)
        return dp[i][O][N];
    
    int result = 0;

    //Two base cases
    if(O==0 && N==0)
        result = 0;
    else if(i == 0)
        result = INF;
    else
        result = min(minWeight(i-1, O, N), minWeight(i-1, max(O-oxy[i-1], 0), max(N-nitro[i-1], 0)) + weight[i-1]);

    dp[i][O][N] = result;

    return result;
}


int main()
{
    IOS


    int tc; scanf("%d", &tc);

    while(tc--){
        int O, N, n;
        scanf("%d %d %d", &O, &N, &n);

        for(int i=0; i<n; i++)
            scanf("%d %d %d", &oxy[i], &nitro[i], &weight[i]);
            
        for(int i=0; i<=n; i++)
            for(int j=0; j<=O; j++)
                for(int k=0; k<=N; k++)
                    dp[i][j][k] = -1;

        printf("%d\n", minWeight(n, O, N));
    }


    return 0;
}