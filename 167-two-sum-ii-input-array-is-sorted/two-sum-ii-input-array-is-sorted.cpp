class Solution {
public:
    vector<int>pairsum(vector<int>arr,int target){
    int st=0,end=arr.size()-1;
    int currSum=0;
    vector<int>ans;
    while(st<end){
        currSum=arr[st]+arr[end];
        if(currSum==target){
            ans.push_back(st+1);
            ans.push_back(end+1);
            return ans;
        }
        else if(currSum>target){
        end--;}
        else{
        st++;}
    }
return ans;
}
vector<int> twoSum(vector<int>& nums, int target) {
    
        return pairsum(nums, target);
}
};
