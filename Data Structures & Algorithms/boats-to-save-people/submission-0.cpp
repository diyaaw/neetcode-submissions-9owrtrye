class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0;
        int n=people.size();
        int r=n-1;
        int count=0;
        while(l<=r){
            int remain=limit-people[r];
            r--;
            count++;

            if(l<=r && remain>=people[l]){
                l++;
            }
        }
        return count;
    }
};