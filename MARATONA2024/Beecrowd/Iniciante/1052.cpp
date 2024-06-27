#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _
    int m;
    string r;

    cin>>m;

    switch (m)
    {
    case 1:
        r = "January";
        break;
    case 2:
        r = "February";
        break;
    case 3:
        r = "March";
        break;
    case 4:
        r = "April";
        break;
    case 5:
        r = "May";
        break;
    case 6:
        r = "June";
        break;
    case 7:
        r = "July";
        break;
    case 8:
        r = "August";
        break;
    case 9:
        r = "September";
        break;
    case 10:
        r = "October";
        break;
    case 11:
        r = "November";
        break;
    case 12:
        r = "December";
        break;
    
    default:
        break;
    }

    cout<<r<<endl;

    return 0;
}