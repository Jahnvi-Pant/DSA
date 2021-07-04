/*Given two integer arrays nums1 and nums2, return an array of their intersection. 
Each element in the result must be unique and you may return the result in any order.*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i : nums1){
                if(find(nums2.begin(),nums2.end(),i)!=nums2.end()&&find(v.begin(),v.end(),i)== v.end())v.push_back(i);
        }
    return v;
    }
};
