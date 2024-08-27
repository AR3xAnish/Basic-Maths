#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    long int revN=0;
    while(x>0||x<0){
        int ldigit=x%10;
        revN=(revN*10)+ldigit;
        x=x/10;
    };
    if(revN>=INT_MAX ||revN<=INT_MIN){
        cout<<0;
    };
    cout<<revN;
}