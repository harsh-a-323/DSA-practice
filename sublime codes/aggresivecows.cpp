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

bool canweplace(vi& arr,int dist, int c){
    int cowcnt = 1;
    int lastplaced = arr[0];
    for(int i = 1; i<arr.size(); i++){
        if(arr[i]-lastplaced>=dist){
            // cout<<arr[i]<<" "<<lastplaced<<" "<<cowcnt<<endl;
            lastplaced = arr[i];
            cowcnt++;
        }
    }
    // cout<<endl;
    if(cowcnt>=c) return true;
    else return false;
}

void solve(){   
    int n,c;
    cin>>n>>c;
    vi arr(n);
    input(arr);
    int s = 0;
    int e = arr[n-1];
    sort(arr.begin(),arr.end());
    while(s<e){
        int mid = s + (e-s)/2;
        // cout<<mid<<" mid"<<endl;
        if(canweplace(arr,mid,c)){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    cout<<(s - 1)<<endl;
}
 
     
int main(){
    quick;
    test_case;
    while(test--){
        solve();
    }
    return 0;
}