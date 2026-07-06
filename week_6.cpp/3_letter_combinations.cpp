#include<bits/stdc++.h>
using namespace std;
vector<vector<char>> nums = {
    {},              // Index 0: Placeholder
    {},              // Index 1: Placeholder
    {'a', 'b', 'c'}, // Index 2
    {'d', 'e', 'f'}, // Index 3
    {'g', 'h', 'i'}, // Index 4
    {'j', 'k', 'l'}, // Index 5
    {'m', 'n', 'o'}, // Index 6
    {'p', 'q', 'r', 's'}, // Index 7
    {'t', 'u', 'v'}, // Index 8
    {'w', 'x', 'y', 'z'}  // Index 9
};
class Solution{
    public:
     void print_all(vector<vector<char>> nums,vector<char>&arr,string s,int i){
           if(i==s.length()){
            cout<<"[";
            for(int k=0;k<arr.size();k++){
                cout<<arr[k];
                if(k<arr.size()-1){
                    cout<<",";
                }
                
            }
            cout<<"]"<<endl;
            return ;
           }
            int j=0;
            while(j<nums[s[i]-'0'].size()){
                arr.push_back(nums[s[i]-'0'][j]);
                print_all(nums,arr,s,i+1);
                arr.pop_back(); 
                j++;
            }
        
        }
};
int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
   cin>>s;
    vector<char>arr;
    Solution a;
    a.print_all(nums, arr, s, 0);

    return 0;
}