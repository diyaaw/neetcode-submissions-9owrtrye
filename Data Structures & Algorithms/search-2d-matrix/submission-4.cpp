class Solution {
public:
bool binarysearch(vector<int>& row, int target){
int n=row.size();

int start=0;
int end=n-1;
while(start<=end){
    int mid=start+(end-start)/2;
    if(target==row[mid]) return true;
    else if(row[mid]<target){
        start=mid+1;
    }
    else end=mid-1;
}
return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            if(target>=matrix[i][0] && target<=matrix[i][m-1]){
                return binarysearch(matrix[i],target);
            }
        }
        return false;
    }
};
