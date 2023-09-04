#include<bits/stdc++.h>
using namespace std;

void threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
     set<vector<int>>ans;
     vector<vector<int>>v;
      for(int i=0;i<nums.size()-2;i++){
          int l=i+1; 
          int h=n-1;
          while(l<h){
              if(nums[i]+nums[l]+nums[h]<0){
                  l++;
              }else if(nums[i]+nums[l]+nums[h]>0){
                  h--;
              }else{
                  ans.insert({nums[i],nums[l],nums[h]});
                  l++;
                  h--;
              }
          }
      }
    
    for(auto it:ans){
        v.push_back(it);
    }
      
    for(int i=0;i<v.size();i++){
           for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
           }
           cout<<endl;
        }
    }


int main(){
     vector<int>nums={-1,0,1,3};
     threeSum(nums);
}

