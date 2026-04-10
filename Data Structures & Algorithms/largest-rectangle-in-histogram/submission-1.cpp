class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxarea=0;
        for(int i=0;i<n;i++){
            //int height=heights[i];
             int right=i+1;
             while(right<n && heights[right]>=heights[i]){
                right++;
             }

             int left=i-1;
             while(left>=0 && heights[left]>=heights[i]){
                left--;
             }

             right--;
             left++;
           maxarea=max(maxarea, heights[i]*(right-left+1));
        }
        return maxarea;
    }
};
