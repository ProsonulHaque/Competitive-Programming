#include<iostream>
using namespace std;

void team(){
    int i=0, n=0;
    int a=0, b=0, c=0;

    cin >> n;

    int solutions[n], cnt=0;

    for(i=0; i<n; i++){
        cin >> a >> b >> c;
        if(a+b+c>=2)
            cnt += 1;
    }

    cout << cnt << "\n";
}

int main(){

    team();

    return 0;
}

