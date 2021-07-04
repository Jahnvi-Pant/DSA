/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank. 
Return the wealth that the richest customer has.
A customer's wealth is the amount of money they have in all their bank accounts. 
The richest customer is the customer that has the maximum wealth.
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=INT_MIN;
        int sum=0;
        int r=accounts.size();
        int c=accounts[0].size();
        for(int i=0;i<r;i++){
            sum=0;
            for(int j=0;j<c;j++){
                sum+=accounts[i][j];
                if(max<sum)max=sum;
            }
        }
        return max;
    }
    
};
