#include<bits/stdc++.h>
using namespace std;

string solve(){
    int i=0, j=0, n=0;

    cin >> n;

    int b[n], g[n];

    for(i=0; i<n; i++)
    {
        cin >> b[i];
    }

    for(i=0; i<n; i++)
    {
        cin >> g[i];
    }

    sort(b, b+n);
    sort(g, g+n);

    int ans[2*n];

    if(b[0]<=g[0]){
        j=0;
        for(i=0; j<n; i+=2)
        {
            ans[i]=b[j];
            j+=1;
        }
        j=0;
        for(i=1; j<n; i+=2)
        {
            ans[i]=g[j];
            j+=1;
        }
    }
    else{
        j=0;
        for(i=0; j<n; i+=2)
        {
            ans[i]=g[j];
            j+=1;
        }
        j=0;
        for(i=1; j<n; i+=2)
        {
            ans[i]=b[j];
            j+=1;
        }
    }

    for(i=0; i<(2*n)-1; i++)
    {
        if(ans[i]>ans[i+1]){
            return "NO";
        }
    }

    return "YES";
}

int main()
{
    int t=0;
    cin >> t;

    while(t--)
        cout << solve() << "\n";
    return 0;
}
