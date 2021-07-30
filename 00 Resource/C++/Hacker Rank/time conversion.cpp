#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here. hh:mm:ssAM
     */
     int i=0;
     string mil;
     //string hour = s[0]+s[1];
     const char *str = hour;
     int h = atoi(str);

     if(s[8]=='A' && h==12){
         s[0]='0';
         s[1]='0';
     }
     else if(s[8]=='P' && h>=1 && h<=11){
        string hr = to_string(h+12);
        s[0] = hr[0];
        s[1] = hr[1];
     }
     while(s[i]!='A'||s[i]!='P'){
         mil[i] = s[i];
         i++;
     }

     return mil;
}

int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
