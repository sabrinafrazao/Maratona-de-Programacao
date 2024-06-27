#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

using namespace std;

int main(){ _

    string a, b, c, r;

    cin>>a;
    cin>>b;
    cin>>c;

    if(a == "vertebrado" && b == "ave" && c== "carnivoro"){
        r = "aguia";
    }else  if(a == "vertebrado" && b == "ave" && c== "onivoro"){
        r = "pomba";
    }else  if(a == "vertebrado" && b == "mamifero" && c== "onivoro"){
        r = "homem";
    }else  if(a == "vertebrado" && b == "mamifero" && c== "herbivoro"){
        r = "vaca";
    }else  if(a == "invertebrado" && b == "inseto" && c== "hematofago"){
        r = "pulga";
    }else  if(a == "invertebrado" && b == "inseto" && c== "herbivoro"){
        r = "lagarta";
    }else  if(a == "invertebrado" && b == "anelideo" && c== "hematofago"){
        r = "sanguessuga";
    }else  if(a == "invertebrado" && b == "anelideo" && c== "onivoro"){
        r = "minhoca";
    }

    cout<<r<<endl;

    return 0;
}