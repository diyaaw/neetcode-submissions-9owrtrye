class Solution {
public:
bool issamefreq(int freq1[],int freq2[]){
            for(int i=0;i<26;i++){
                if(freq1[i]!=freq2[i]){
                    return false;
                }
            }
            return true;
        }
    bool checkInclusion(string s1, string s2) {
       int freq1[26]={0};

        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
        }

        for(int j=0;j<s2.size();j++){
            int windowsize=s1.size();
            int windowidx=0;
            int idx=j;
             int freq2[26]={0};

            while(windowidx<windowsize && idx<s2.length()){
                freq2[s2[idx]-'a']++;
                windowidx++;
                idx++;
            }

            if(issamefreq(freq1,freq2)){
                return true;
            }
            
        }

        return false;
    }
};
