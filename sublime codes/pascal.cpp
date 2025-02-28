#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vii vector<vi> 
#define vl vector<long> 
#define vll vector<vl> 
#define mod1 1000000007
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fr(a,b,c) for(int i = a ; i < b ; i+=c) 
#define test_case int test; cin>>test; 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
#define input(x) for(auto& it:x) cin>>it;
#define push_back pb
#define output(x) for(auto& it:x) cout<<it<<" "; 

    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            vector<int> temp;
            for(int j=0;j<i;j++){
                if(j==0 || j==i-1){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
            for(auto it : temp){
                cout<<it<<" ";
            }
            cout<<endl;
            ans.push_back(temp);
        }
        return ans;
    }

int main(){
    vector<vector<int>> ans = generate(5);
    for(auto it : ans){
        for(auto it1 : it){
            cout<<it1<<" ";
        }
        cout<<endl;
    }
}