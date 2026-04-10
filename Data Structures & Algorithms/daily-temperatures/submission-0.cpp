class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans;

        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=i+1;j<n;j++){
        if(temperatures[i]<temperatures[j]){
          found=true;
          ans.push_back(j-i);
          break;
        }
     }
     if(!found) ans.push_back(0);
    }
    return ans;
}
};
