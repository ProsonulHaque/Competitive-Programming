#include<iostream>
const unsigned int M = 1000000007;
using namespace std;

unsigned long long power(int b, int p)
{
    unsigned long long f = 1;

    for (int i = 1; i <= p; i++){
        f = (f*b)%M;
    }

    return f;
}

void solve(){
    int n=0;
    unsigned long long a = 0, b = 0, c=0, val = 0;

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
        cout << val;
    }
}

int main(){

    solve();

    return 0;
}
