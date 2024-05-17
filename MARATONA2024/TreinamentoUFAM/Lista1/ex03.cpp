#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){

    long long int a, b, c;
    long long Qtd;
    string t;

    cin >>a>>b>>c;
    cin>>t;

    if(t == "A"){
        Qtd = (a +((b*3.0)/2.0) + (c*5)/2.0);
    }else if(t == "B"){
         Qtd = (b +(2*(a+(5.0*c)/2)/3));
    }else if(t == "C"){
         Qtd = (c +(2*(a+(3*b)/2.0)/5.0));
    }

    cout <<Qtd << endl;
    
    return 0;
    
}