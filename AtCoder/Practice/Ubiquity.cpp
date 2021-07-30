#include<iostream>
const long long M = 1000000007;
using namespace std;

long long power(long long b, long long p)
{
    long long f = 1, i=0;

    for (i=1; i<=p; i++){
        f = (f*b)%M;
    }

    return f;
}

void solve(){
    long long n=0;
    long long a = 0, b = 0, c=0, val = 0;

    cin >> n;

    if(n==1)
        cout << 0;
    else if(n==2)
        cout << 2;
    else{
        a = power(10,n);
        b = power(9, n);
        c = power(8, n);
        val = (a-b-b+c)%M;
        if(val<0) val += M;
        cout << val;
    }
}

int main(){

    solve();

    return 0;
}
