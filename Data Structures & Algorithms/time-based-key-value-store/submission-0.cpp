class TimeMap {
public:
 unordered_map<string, unordered_map<int,string>> keystore;
        
    TimeMap() {
       
    }
    
    void set(string key, string value, int timestamp) {
     keystore[key][timestamp] = value;
        
    }
    
    string get(string key, int timestamp) {
        if(keystore.find(key)==keystore.end()){
            return "";
        }
        int seen=0;

        for(auto it: keystore[key]){
            int time=it.first;
            if(time<=timestamp){
                seen=max(seen,time);
            }
        }
        return seen==0?"": keystore[key][seen];
    }
};
