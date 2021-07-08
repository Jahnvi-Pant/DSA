/*Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise*/

class Solution {
public:
    
    bool rotate(vector<vector<int>>& mat, vector<vector<int>>& target){
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++) reverse(mat[i].begin(),mat[i].end());
        if(mat==target) return true;
        return false;
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k=4;
        while(k--){
            if(rotate(mat,target)==true) return true;
        }
        return false;
    }
};
