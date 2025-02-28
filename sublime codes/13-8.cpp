#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vii vector<vi> 
#define vl vector<long> 
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

bool comp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.second < b.second;
}

void solve() {
    ll n;
    cin >> n;
    
    // Reserve space to avoid reallocations
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }

    // Sort based on the first element
    sort(a.begin(), a.end());

    // Prefix sum computation
    vector<ll> p(n);
    p[0] = a[0].first;
    for (int i = 1; i < n; ++i) {
        p[i] = a[i].first + p[i - 1];
    }

    vector<pair<int, int>> ans;
    for (int i = 0; i < n - 1; ++i) {
        int ok = i;
        if (p[i] >= a[i + 1].first) {
            ll temp = p[i];
            int j = i;
            while (j < n - 1 && temp >= a[j + 1].first) {
                ok++;
                temp = p[j + 1];
                j++;
            }
        }
        ans.pb({ok, a[i].second});
    }
    
    // Add the last element
    ans.pb({n - 1, a[n - 1].second});

    // Sort based on the original indices
    sort(ans.begin(), ans.end(), comp);

    // Output results
    for (const auto& it : ans) {
        cout << it.first << " ";
    }
    cout << endl;
}

int main() {
    quick;
    test_case;
    while (test--) {
        solve();
    }
    return 0;
}
