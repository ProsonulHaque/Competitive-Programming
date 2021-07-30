/*
Author: rafa45
Date: 16 Oct 2020
*/
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;

int main()
{
    int n, i, j, x;

    cin >> n;
    set<int> s;
    int a[n+1];

    for(i=1; i<=n; i++){
        s.insert(i);
    }

    memset(a, 0, sizeof(a));

    for(i=0; i<n; i++){
        cin >> x;
        a[x]=1;
        auto next = s.end();
        for(j=*next; j>=1; j--){
            if(a[j]==0){
                printf("\n");
                break;
            }
            printf("%d ", j);
            s.erase(j);
        }
    }

    return 0;
}

