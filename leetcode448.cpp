class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int>f(nums.size()+4);
        for(int i=0; i<nums.size();i++)
        {
            f[nums[i]]++;
        }
        for(int i=1; i<=nums.size();i++)
        {
            if(f[i]==0) ans.push_back(i);
        }
        return ans;
    }
};