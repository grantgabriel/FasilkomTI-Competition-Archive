#include <bits/stdc++.h>
using namespace std;
#define sekali ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ambis return 0;


int main(){
    sekali
    map<string,string> tabel2={
        {"CD","AA"},{"BB","AB"},{"AC","AC"},{"CC","AD"},
        {"CB","BA"},{"DB","BB"},{"AD","BC"},{"DD","BD"},
        {"DA","CA"},{"DC","CB"},{"BC","CC"},{"BD","CD"},
        {"AA","DA"},{"BA","DB"},{"CA","DC"},{"AB","DD"}
    };
    map<string,string> tabel1={
        {"AB","AA"},{"DC","AB"},{"CC","AC"},{"CB","AD"},
        {"CA","BA"},{"DA","BB"},{"CD","BC"},{"DD","BD"},
        {"BC","CA"},{"AA","CB"},{"BA","CC"},{"DB","CD"},
        {"BD","DA"},{"AD","DB"},{"BB","DC"},{"AC","DD"}
    };
    string input;
    cin>>input;
    int len=input.length();
    for(int i=0;i<len;i+=2){
        string dec=input.substr(i,2);
        dec=tabel2[dec];
        dec=tabel1[dec];
        input.insert(i,dec);
        input.erase(i+2,2);
    }
    cout<<input<<endl;

    ambis
}
