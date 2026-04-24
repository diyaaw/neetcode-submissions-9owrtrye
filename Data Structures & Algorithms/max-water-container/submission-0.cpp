class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxarea=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int height=min(heights[i],heights[j]);
                  maxarea=max(maxarea,height*(j-i));
            }
        }
        return maxarea;
    }
};
