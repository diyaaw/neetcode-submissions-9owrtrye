class Solution {
public:
int daysreq(vector<int>& weights, int capacity){
    int load=0;
    int days=1;
    for(int i=0;i<weights.size();i++){
        if(load+weights[i]>capacity){
            load=weights[i];
            days++;
        }
        else{
            load+=weights[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();

        int start=*max_element(weights.begin(),weights.end());
        int end=0;
        for(int i=0;i<n;i++){
            end+=weights[i];
        }
        int ans=0;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(daysreq(weights,mid)<=days){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
        
    }
};