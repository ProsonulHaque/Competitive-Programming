#include<bits/stdc++.h>
using namespace std;

int chefina(int n){
    if (n==3)
        return 2;

    int m=n/2;
    int S=(n*(n+1)/2);
    int sum = (m*(m+1)/2)-1+n;

    while(sum<S/2){
        m += 1;
        sum += m;
    }

    int L=m;

    sum = (L*(L+1)/2)-1+n;
    int F=1;

    while(sum>S/2){
        sum -= 1;
        F += 1;
    }

    int L1=F;
    int L2=n-L;
    int total=min(L1, L2);

    return total;
}

int main()
{
    int T=0, n=0;
    cin >> T;

    while(T--){
        cin >> n;

        if((n*(n+1)/2)%2==0)
            cout << chefina(n) << "\n";
        else{
            cout << 0 << "\n";
        }
    }

    return 0;
}
