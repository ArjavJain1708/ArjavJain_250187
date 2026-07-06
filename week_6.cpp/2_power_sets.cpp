#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void print_all(vector<int> nums,vector<int>&arr,int idx){
        if(idx==nums.size()){
            cout<<"[";
            for(int i=0;i<arr.size();i++){
                cout<<arr[i];
                if(i<arr.size()-1){
                    cout<<",";
                }
                
            }
            cout<<"]";
            return;
        }
        // if pick;
        arr.push_back(nums[idx]);
        print_all(nums,arr,idx+1);
        arr.pop_back();
        print_all(nums,arr,idx+1);
    }
};
