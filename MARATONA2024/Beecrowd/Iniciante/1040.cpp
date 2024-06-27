#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

using namespace std;

int main(){ _
    float a, b, c, d;

    cin>>a>>b>>c>>d;

    float m = ((2*a) + (3*b) + (4*c) + (1*d))/10;

    if(m>=7.0) {
        cout<<"Media: "<<fixed<<setprecision(1)<<m<<endl;
        cout<<"Aluno aprovado."<<endl;

    }else if(m<5.0){
        cout<<"Media: "<<fixed<<setprecision(1)<<m<<endl;
        cout<<"Aluno reprovado."<<endl;
    }else if(m>=5.0 && m<=6.9){
         cout<<"Media: "<<fixed<<setprecision(1)<<m<<endl;
         cout<<"Aluno em exame."<<endl;

         float notaEx;

         cin>>notaEx;

         float mr= (m+notaEx)/2.0;

         if(mr>5.0){
            cout<<"Nota do exame: "<<fixed<<setprecision(1)<<notaEx<<endl;
            cout<<"Aluno aprovado."<<endl;
             cout<<"Media final: "<<fixed<<setprecision(1)<<mr<<endl;
         }else{
            cout<<"Nota do exame: "<<fixed<<setprecision(1)<<notaEx<<endl;
            cout<<"Aluno reprovado."<<endl;
            cout<<"Media final: "<<fixed<<setprecision(1)<<mr<<endl;
         }
    }

    return 0;
}