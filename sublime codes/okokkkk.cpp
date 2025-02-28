#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }

        vector<long long> ans;
        bool flag = true;
        while(flag){
            auto it = max_element(arr.begin(),arr.end());
            // if(it==arr.end()-1){
            //     it=max_element(arr.begin(),arr.end()-1);
            // }
            if(it!=arr.end()-1){
                cout<<*it<<endl;
                long long int k = (*(it) - *(it+1))/2;
                *(it) -= k;
                *(it+1) += k;
            }
            ans.push_back(*max_element(arr.begin(),arr.end())-*min_element(arr.begin(),arr.end()));
            for(auto it : arr){
                cout<<it<<" ";
            }
            cout<<endl<<ans.back()<<endl;
            if(ans.size()>=2){
                if(ans[ans.size()-1] - ans[ans.size()-2] == 0){
                    // cout<<"ans "<<ans[ans.size()-1]<<endl;
                    break;
                }
            }

        }

        while(flag){
            cout<<"IN MINIMIMUM"<<endl;
            auto it = min(arr.begin(),arr.end());
            // if(it==arr.end()-1){
            //     it=max_element(arr.begin(),arr.end()-1);
            // }
            if(it!=arr.begin()){
                cout<<*it<<endl;
                long long int k = (*(it-1)-*(it))/2;
                *(it) += k;
                *(it+1) -= k;
            }
            ans.push_back(*max_element(arr.begin(),arr.end())-*min_element(arr.begin(),arr.end()));
            for(auto it : arr){
                cout<<it<<" ";
            }
            cout<<endl<<ans.back()<<endl;
            if(ans.size()>=2){
                if(ans[ans.size()-1] - ans[ans.size()-2] == 0){
                    // cout<<"ans "<<ans[ans.size()-1]<<endl;
                    break;
                }
            }

        }
        cout<<"ans "<<ans.back()<<endl;
    }

    return 0;
}
