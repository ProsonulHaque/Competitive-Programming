#include<bits/stdc++.h>
using namespace std;

struct Date{
    int day, month, year;
};

bool compare(const Date &d1, const Date &d2){
    if (d1.year<d2.year)
        return true;
    else if(d1.year==d2.year && d1.month<d2.month)
        return true;
    else if(d1.year==d2.year && d1.month==d2.month && d1.day<d2.day)
        return true;
    else
        return false;
}

void solve(){
    int n=0, i=0;
    int day=0, month=0, year=0;

    cin >> n;

    Date dates[n];

    for(i=0; i<n; i++){
        scanf("%d/%d/%d", &day, &month, &year);
        dates[i] = {day, month, year};
    }

    sort(dates, dates+n, compare);

    for(i=0; i<n; i++){
        printf("%d/%d/%d", dates[i].day, dates[i].month, dates[i].year);
        printf("\n");
    }
}

int main(){
    solve();
    return 0;
}
