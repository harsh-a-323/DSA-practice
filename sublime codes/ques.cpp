
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        if(r-l<4){
            if((l&1)) cout<<1<<endl;
            else cout<<0<<endl;
            return 0;
        }
        if((l&1)){
            cout<<(r-(l-1))/4<<endl;
        }
        else{
            cout<<(r-l)/4<<endl;
        }
    }
}