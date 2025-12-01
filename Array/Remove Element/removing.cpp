class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int n = nums.size(),k=0;
        for(int i=0 ;i<n;i++)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k; //here returned the new array with size k 
    }
};
//but in vs code we have to print the new array and leetcode will handle it by itself , we just have to return the size of new array