    #include<bits/stdc++.h>
    using namespace std;
    #define vi vector<int> 
    #define vii vector<vi> 
    #define vl vector<long> 
    #define vll vector<vl> 
    #define mod1 1000000007
    #define quick ios_base::sync_with_stdio(false);cin.tie(0);
    #define fr(a,b,c) for(int i = a ; i < b ; i+=c) 
    #define test_case int test; cin>>test; 
    #define yes cout<<"YES"<<endl
    #define no cout<<"NO"<<endl
    #define input(x) for(auto& it:x) cin>>it;
    #define ll long long

    ll sumofdigits(int a){
        ll sum = 0;
        while(a){
            sum+=a%10;
            a/=10;
        }
        return sum;
    }

    void solve(){
    int a,b;
    cin>>a>>b;
    if(b-a==1){
        yes;
    }
    else if(a>b && (abs(a-b)+1)%9==0){
        yes;
    }
    else no;
    return;
    
    }

    int32_t main(){
        quick;
        test_case;
        while(test--){
            solve(); 
        }
        return 0;
    }
