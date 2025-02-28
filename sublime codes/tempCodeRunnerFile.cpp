#include<bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cout<<"ENTER A BINARY STRING : "<<endl;
    cin>>t;
    vector<char> state = {'A','B','C'};
    int i = 0;
    int j = 0;
    vector<char> state_ans;
    bool ans = false;
    while(i<t.size()){
        if(j==2) ans = true;
        if(t[i]=='1' && j==0){
            j=0;
            i++;
            state_ans.push_back(j);
        }
        if(t[i]=='0' && j==0){
            
            j=1;
            i++;
            state_ans.push_back(j);
        }
        if(t[i]=='1' && j==1){
            
            j=0;
            i++;
            state_ans.push_back(j);
        }
        if(t[i]=='0' && j==1){
            
            ans = true;
            i++;
            j=2;
            state_ans.push_back(j);
        }
        if(j==2){
            state_ans.push_back(j);
            i++;
        }
        else if(t[i]!='1' || t[i]!='0'){
            cout<<"NOT A VALID STRING"<<endl; 
            return 0; 
        }
    }
    if(ans==false) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<"STATES : "<<endl;
        for(auto it:state_ans){
            cout<<state[it]<<" ";
        }
    }
}