class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int maxarea=0;
        while(l<r){
           int width=r-l;
           int height=min(heights[l],heights[r]);
           int current=height*width;
           maxarea=max(maxarea,current);

           if(heights[l]<heights[r]){
            l++;
           }
           else{
            r--;
           }
        }
        return maxarea;
    }
};
