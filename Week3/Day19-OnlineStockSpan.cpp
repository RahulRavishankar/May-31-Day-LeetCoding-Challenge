class StockSpanner {
public:
    vector<pair<int,int> > stock;
    StockSpanner() {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    }
    
    int next(int price) {
       
        int w=1;
        while(!stock.empty() && stock.back().first<=price)
        {
            w+=stock.back().second;
            stock.pop_back(); 
        }
        stock.push_back({price,w});
        
        return w;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
