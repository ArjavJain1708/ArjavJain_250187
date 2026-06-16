class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>store;
        int result=0;
       for(int i=0;i<queries.size();i++){
        result= 0; 
         for(int j=queries[i][0];j<=queries[i][1];j++){
            result= result xor arr[j];
         }
          store.push_back(result);
       } 
 return store;   }
};