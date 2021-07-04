/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.*/

class Solution {
public:
    int binary(vector<int> v,int n, int key )
    {
        int mid=0, pos=-1;
        int l=0, h=n-1;
        while(l<=h)
        {
            mid=l+((h-l)/2);
            if(v[mid]==key){
                pos=mid;
                break;
            }
            else if(v[mid]>key)h=mid-1;
            else l=mid+1;
        }
        while(pos>0){
            if(v[pos-1]==v[pos]) pos--;
            else break;
        }
        return pos;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v(nums);
        vector<int> ans;
        int n=nums.size();
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++) ans.push_back(binary(v, v.size(), nums[i]));        
        return ans;
        
    }
};
