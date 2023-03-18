class BrowserHistory {
public:
vector<string> history;
int cur_idx;
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        cur_idx=0;
    }
    
    void visit(string url) {
        history.resize(cur_idx+1);
        history.push_back(url);
        cur_idx++;
    }
    
    string back(int steps) {
        int back_idx= max(0, cur_idx-steps);
        cur_idx= back_idx;
        return history[cur_idx];
    }
    
    string forward(int steps) {
        int for_idx= min((cur_idx+steps), (int)(history.size()-1));
        cur_idx= for_idx;
        return history[cur_idx];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */