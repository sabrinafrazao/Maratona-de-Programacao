#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _

    int n;
    float pc, pr, ps;
    cin>>n;

    int C = 0, r=0, s=0, t=0;
    vector<pair<int, string>>c(n);

    for(int i = 0; i <n; i++){

        cin>>c[i].first>>c[i].second;
        t+=c[i].first;

        if(c[i].second == "C"){
            C+=c[i].first;
        }
        if(c[i].second == "R"){
            r+=c[i].first;
        }
        if(c[i].second == "S"){
            s+=c[i].first;
        }

    }

    pc = (C/(t*1.0)) *100;
    pr=(r/(t*1.0)) *100;
    ps = (s/(t*1.0)) *100;

    cout<<"Total: "<<t<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<C<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<pc<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<pr<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<ps<<" %"<<endl;

    return 0;
}