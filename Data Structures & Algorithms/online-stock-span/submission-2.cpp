class StockSpanner {
    vector<int> val;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        val.push_back(price);
        int cnt=1;
        for(int i=val.size()-2;i>=0;i--){
            if(val[i]<=price){
                cnt++;
            }
            else break;
        }
        return cnt;
    }

};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */