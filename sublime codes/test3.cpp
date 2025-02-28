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
  


void solve(){
    int n;
    cin>>n;
    vi arr(n);
    input(arr);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            while(arr[i]!=0){
                i++;
            }
            ans++;
        }
    }
    cout<<ans<<endl;
}
 
     
int main(){
    quick;
    test_case;
    while(test--){
        solve(); 
    }
    return 0;
}