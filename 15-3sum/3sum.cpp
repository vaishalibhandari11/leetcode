class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        
        // 1. FIXED: Set k to n - 1 to prevent crashes
        int j = i + 1; int k = n - 1; 
        
        // 2. FIXED: Added the missing condition to loop through j and k
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0) {
                ans.push_back({nums[i], nums[j], nums[k]});
                while (j < k && nums[j] == nums[j + 1]) j++; // Skip duplicates
                while (j < k && nums[k] == nums[k - 1]) k--; // Skip duplicates
                j++; k--;
            } 
            else if (sum < 0) j++;
            else k--;
        }
    } // 4. FIXED: Removed the extra semicolon that was here
    
    return ans; // 3. FIXED: Added the missing return statement
   }
};
