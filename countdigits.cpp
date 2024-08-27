#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int even=N;
        int count=0;
        int lastdigit;
        while(even>0){
            lastdigit=even%10;
            if(lastdigit!=0){
                if(N%lastdigit==0){
                    count++;
                };
            };
            even=even/10;
        };
        return count;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}