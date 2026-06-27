class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> ans;

       for(auto ele:strs){
        string temp=ele;

        sort(temp.begin(),temp.end());
        ans[temp].push_back(ele);
       }

       vector<vector<string>> result;
       for(auto ele:ans){
        result.push_back(ele.second);
       }
       return result;

        
    }
};
