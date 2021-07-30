#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, i, j, k, n;
    int c, cnt, flag;
    cin >> T;

    while(T--){
        cin >> n;
        int P[n], Fp[n-1], Q[n], Fq[n-1];

        for(i=0; i<n; i++){
            cin >> P[i];
            Q[i] = P[i];
        }

        for(i=0; i<n-1; i++){
            Fp[i]=P[i]+P[i+1];
        }

        sort(Fp, Fp+n-1);

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){

                flag =1;
                cnt = 0;
                c = 0;

                if(i!=j){
                    //Swap
                    int temp = Q[i];
                    Q[i] = Q[j];
                    Q[j] = temp;

                    //Check if different permutation
                    for(k=0; k<n; k++){
                        if(Q[k] == P[k]) c++;
                    }
                    if(c==k) continue;

                    //Calculate Fq
                    for(k=0; k<n-1; k++){
                        Fq[k]=Q[k]+Q[k+1];
                    }
                    sort(Fq, Fq+n-1);

                    //Check if Fq==Fp
                    for(k=0; k<n-1; k++){
                        //Break out of loop condition
                        if(Fq[k]!=Fp[k]){
                            flag=0;
                            break;
                        }
                        cnt += 1;
                    }

                    //Break out of loop condition
                    if(cnt==k && flag==1)
                        break;

                }
                //Break out of loop condition
                if(cnt==k && flag==1)
                    break;

                for(k=0; k<n; k++){
                    Q[k] = P[k];
                }
            }
        }

        for(k=0; k<n; k++){
            cout << Q[k] << " ";
        }
        cout << "\n";
    }

    return 0;
}

