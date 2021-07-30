#include<iostream>
using namespace std;

unsigned long long power(int n)
{
    const unsigned int M = 1000000007;

    unsigned long long f = (2 % M);

    for (int i = 1; i <= n; i++){
        f = f*(10 % M);
    }
    f = f%M;
    return f;
}

void solve(){
    int n=0;

    cin >> n;

    if(n==1)
        cout << 0;
    else if(n==2)
        cout << 2;
    else
        cout << power(n-2);
}

int main(){

    const unsigned int M = 1000000007;

    unsigned long long f = (2 % M);

    cout << f;

    return 0;
}


