class MyCalendar {
public:
    
      vector<pair<int,int>> ans;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        for(auto it : ans){
            
            if( !(it.first >= end || (it.second <= start)) ){
                return false;
            }
            
        }
        
        ans.push_back({start,end});
        
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */