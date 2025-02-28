#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') c++;
            else break;
        }
        int n = s.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<c;i++){
            int k = 0;
            int j = i;
            while(j<=c && s[j]=='1'){
                k++;
                j++;
            }
            ans.push_back({k,i});
        }
        sort(ans.begin(),ans.end());
        cout<<ans.back().second+1<<" "<<(ans.back().second+n-c==0?1:ans.back().second+n-c)<<" "<<1<<" "<<n<<endl;
    }
}
