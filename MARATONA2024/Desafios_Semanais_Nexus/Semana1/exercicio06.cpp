#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int i, ano, mes, dias;

    cin >>i;

    ano = i/365;
    mes = (i%365)/30;
    dias = ((i%365)%30);

    cout<<ano<<" ano(s)"<<endl;
    cout<<mes<<" mes(es)"<<endl;
    cout<<dias<<" dia(s)"<<endl;

    return 0;
}