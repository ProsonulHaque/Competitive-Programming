#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,k=0;
    cin>>t;

    while(t--){
        k=1;
        cin>>n;
        int a[n+1];
        int b[n+1];

        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        for(i=1;i<=n-1;i+=2){
            if(a[i]==a[i+1])
            {
                b[k++]=a[i];
                b[k++]=a[i+1];
            }
            else
                b[k++]=0;
        }

        cout<<k-1<<"\n";

        for(i=1;i<k;i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
