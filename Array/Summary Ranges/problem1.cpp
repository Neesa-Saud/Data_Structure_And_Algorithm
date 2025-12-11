class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        if(n == 0) return ans;
        int start = nums[0]; //suru maa start maa first index ko value raakhyo
        for(int i = 1; i <= n; i++) {
            if(i == n || nums[i] != nums[i-1] + 1){ //if i reaches the end or current number is not consecutive
                if(start == nums[i-1]) { //tala raakhay ko xau start maa nums[i] if tyo value chai check hunx ayaeta
                    ans.push_back(to_string(start));
                }
                else { 
                    ans.push_back(to_string(start) + "->" + to_string(nums[i-1]));
                }
                if(i < n) start = nums[i]; //start maa chai hamley ith value raakhaem so that we can start a new range
            }
        }
        return ans;
    }
};
