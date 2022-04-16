class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int ans=0;
        for(auto temp:operations)
        {
            ans=(temp[1]=='+')?ans+=1:ans-=1;
            
        }
        return ans;
        
    }
};