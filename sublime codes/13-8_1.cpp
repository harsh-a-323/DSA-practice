#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vii vector<vi> 
#define vl vector<long long int> 
#define vll vector<vl> 
#define mod1 1000000007
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fr(a,b,c) for(int i = a ; i < b ; i+=c) 
#define test_case int test; cin>>test; 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
#define pb push_back
#define input(x) for(auto& it:x) cin>>it;
#define output(x) for(auto& it:x) cout<<it<<" "; 

// void solve() {
//     int n,k;
//     cin>>n>>k;
//     vi arr(n);
//     input(arr);
//     int  l = 0,r=n-1;
//     sort(arr.begin(),arr.end());
//     output(arr);
//     cout<<endl;
//     while(k--){
//         if(arr[l]+arr[l+1]<arr[r]){
//             arr.erase(arr.begin()+l,arr.begin()+l+2);
//         }
//         else{
//             arr.erase(arr.end()-1,arr.end());
//         }
//         output(arr);
//         cout<<endl;
//     }
//     cout<<endl<<accumulate(arr.begin(),arr.end(),(ll)0)<<endl;
// }

void solve(){
    int n,q;
    cin>>n>>q;
    vi arr(n),x(q);
    input(arr);
    input(x);
    for(int it : x){
                ll temp = (ll)1<<it;
                // cout<<endl<<temp;
        if(*max_element(arr.begin(),arr.end())>=pow(2,it)){
            for(int i=0;i<n;i++){
                if(arr[i] % temp==0){
                    // cout<<arr[i]<<" "<<temp<<" . ";
                    arr[i]+=(ll)1<<it-1;
                }
            }
        }
    }
    // cout<<endl;
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main() {
    quick;
    test_case;
    while (test--) {
        solve();
    }
    return 0;
}
