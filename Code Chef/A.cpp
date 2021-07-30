#include<bits/stdc++.h>
using namespace std;

void solve(){
    int i=0, j=0, n=0;
    long long cnt=0;
    long long sum=0;

    cin >> n;

    long long a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(i=0; i<n-1; i++)
    {
        sum = a[i];
        for(j=i+1; j<n; j++)
        {
            sum += a[j];
            if(sum==0){
                cnt += 1;
            }
        }
    }
    sum = 0;
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    if(sum==0){
        cnt -= 1;
    }

    cout << cnt << "\n";
}

int main()
{
    solve();
    return 0;
}
