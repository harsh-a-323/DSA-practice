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

void solve(){    
    ll n;
    cin>>n;
    vl arr(n);
    input(arr);
    
}
 
     
int main(){
    quick;
    test_case;
    while(test--){
        solve();
    }
    return 0;
}