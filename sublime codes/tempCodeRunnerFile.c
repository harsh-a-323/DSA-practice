#include<bits/stdc++.h>
using namespace std;

void generate(int k,string s,int left, int right,vector<string>& arr){
    if(left==k && right == k){
        int l =0 ;
        for(auto it : s){
            if(it=='(') l++;
            else if(it==')') l--;
            if(l<0) return;
        }
        arr.push_back(s);
        return;
    }
    if(left<k) generate(k,s+'(',left+1,right,arr);
    if(right<k) generate(k,s+')',left,right+1,arr);
}

void func(vector<int>& arr,int target, int curr_sum, int i, int ans){
        if(curr_sum==target){
            ans++;
            return;
        }
        if(curr_sum>target){
            return;
        }
        func(arr,target,curr_sum,i+1,ans);
        func(arr,target,curr_sum+arr[i],i+1,ans);
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int ans  =  0;
        func(arr,target,0,0,ans);
        return ans;
    } 

int main(){
    cout<<perfectSum({5,2,3,10,6,8},10);
}