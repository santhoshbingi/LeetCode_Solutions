class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       map<int , int> mp;
       for(int i=0;i<nums.size();i++)
       {
        mp[nums[i]]++;
       }
       int greater_frequency=0;
       for(const auto &k:mp)
       {
         if(k.second>greater_frequency)
         {
            greater_frequency=k.second;
         }
       }
       //return greater_frequency;
       int Count=greater_frequency;
       int cnt=0;
       for(const auto &k:mp)
       {
        if(k.second==greater_frequency)
        {
           cnt=cnt+Count;
        }
       }
       return cnt;

       
    }
};