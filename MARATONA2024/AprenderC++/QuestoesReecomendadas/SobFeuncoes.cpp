// Como deixar a varialvel de uma função valer para a variavel que 
// referencia na main()

#include<bits/stdc++.h>

using namespace std;


int somar(int &x, int &y){
    x = 30;
    int soma;

    soma = x+y;

    return soma;
}

int main(){
    int a, b, s;
    a =5;
    b= 4;

    s = somar(a,b);

    cout<<s<<endl;

    return 0;
}