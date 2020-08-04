class MyHashSet {
public:
    
    int bucket;
    vector<vector<int>> v;
    
    int hashf(int key){
        return key%bucket;
        
    }
    
    /** Initialize your data structure here. */
    MyHashSet() {
       bucket=15000;
       v=vector<vector<int>> (bucket,vector<int>{});
    }
    
    void add(int key) {
        int hash=hashf(key);
        if(find(v[hash].begin(),v[hash].end(),key)==v[hash].end()) v[hash].push_back(key);
        
    }
    
    void remove(int key){
        int hash=hashf(key);
        auto it=find(v[hash].begin(),v[hash].end(),key);
        if(it!=v[hash].end()) v[hash].erase(it);
            
           
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int hash=hashf(key);
        if(find(v[hash].begin(),v[hash].end(),key)!=v[hash].end()) return true;
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */