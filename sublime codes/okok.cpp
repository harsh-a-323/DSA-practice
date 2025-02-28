#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vii vector<vi> 
#define vl vector<long> 
#define vll vector<vl> 
#define mod 1000000007
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fr(a,b,c) for(int i = a ; i < b ; i+=c) 
#define test_case int test; cin>>test; 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
#define input(x) for(auto& it:x) cin>>it;
#define output(x) for(auto& it:x) cout<<it<<" ";
ll power(ll XX, ll YY) {ll ans = 1; while (YY) {if (YY & 1) ans = (ans * XX)%mod; YY >>= 1; XX = (XX * XX)%mod;} return ans;}
ll nCr(ll NN, ll RR){
    double sum = 1; for(ll i = 1; i <= RR; i++){sum = sum * (NN - RR + i) / i;} return sum;} 

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;

    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= min(i, k); ++j) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i][j-1] + dp[i - 1][j - 1] ;
            }
        }
    }

    return dp[n][k];
}

void solve(){   
    int a,b;
    cin>>a>>b;
    vi arr(a);
    input(arr);
    int max_ele = *max_element(arr.begin(),arr.end());
    if(max_ele>=arr.size()){
        cout<<1<<endl;
        return;
    }
    map<int,int> mp;
    for(auto it :arr){
        mp[it]++;
    }
    bool ans = true;
    for(auto it:mp){
        if(b!=a){
            ans = false;
            break;
        }
        if(it.second!=2){
            ans = false;
            break;
        }
    }
    if(ans){
        cout<<(b/2)  + 1<<endl;
        return;
    }
    else{
        cout<<2<<endl;
        return;
    }
    
}
 
     
int main(){
    quick;
    test_case;
    while(test--){
        solve();
    }
    return 0;
}