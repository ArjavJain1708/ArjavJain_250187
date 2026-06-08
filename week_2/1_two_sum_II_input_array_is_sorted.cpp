class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int l,i,j,result, a=-1;
        vector<int> final;
        l=numbers.size();
        for(i=0;i<l;i++)
        {  result=0;
        if (i > 0 && numbers[i] == numbers[i - 1]) {
            continue;
        }
        else{
            result=target-numbers[i];
            for(j=0;j<l;j++)
            {   if(i==j)
            {
                continue;
            }
                if(numbers[j]==result)
                { 
                   final.push_back(i+1);
                   final.push_back(j+1);
                  return final;
                  
                }
            }
        }
             
        
        }
      return final; 
    }
};