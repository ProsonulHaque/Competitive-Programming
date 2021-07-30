#include<iostream>
using namespace std;

long long solve(){
    long long a=0, b=0, c=0, d=0, p1=0, p2=0, p3=0, p4=0, p=0;

    cin >> a >> b >> c >> d;

    p1 = a*c;
    p2 = a*d;
    p3 = b*c;
    p4 = b*d;

    p = max(max(p1, p2), max(p3, p4));

    return p;
}

int main(){

    cout << solve() << "\n";

    return 0;
}

