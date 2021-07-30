#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int n=0, i=0;
    int pol=0, crime=0;

    cin >> n;
    int event[n];

    for(i=0; i<n; i++){
        cin >> event[i];
    }

    for(i=0; i<n; i++){
        //Crime
        if(event[i]==-1){
            if(pol>0){
                pol--;
            }
            else{
                crime++;
            }
        }
        //Recruit
        else{
            pol += event[i];
        }
    }

    cout << crime << endl;
    return 0;
}
