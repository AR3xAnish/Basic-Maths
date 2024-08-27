#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N>0){
        int lastdigit=N%10;
        N=N/10;
        cout<<"Last digit: "<<lastdigit<<" "<<endl;
    };
}