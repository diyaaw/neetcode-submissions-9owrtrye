class Solution {
 public:
//     void reverseString(vector<char>& s) {
//         // approach 1
//         vector<char> temp;
//         int n=s.size();
//         for(int i=0;i<n;i++){
//             temp.push_back(s[i]);
//         }
//         for(int i=0;i<n;i++){
//           s[i]=temp[n-i-1];
//         }

        //approach 2

         void reverseString(vector<char>& s) {
        reverse(s, 0, s.size() - 1);
    }
      void reverse(vector<char>& s, int l, int r) {
        if (l < r) {
            reverse(s, l + 1, r - 1);
            swap(s[l], s[r]);
        }
    }
};