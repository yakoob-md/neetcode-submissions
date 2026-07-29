class MyHashSet {
public:
        
        vector<list<int>>m;
        int size = 100;

    MyHashSet() {
        
        m.resize(size);
    }

    int hash(int key){
        return key%size;
    }

    list<int> :: iterator search(int key){
        int i = hash(key);
        return find(m[i].begin(),m[i].end(),key);
    }
    
    void add(int key) {
        if(! contains(key)){
            //add
            int i = hash(key);
            m[i].push_back(key);
        }
        else return;
    }
    
    void remove(int key) {
        if(! contains(key)) return;

        int i = hash(key);
        m[i].erase(search(key));
    }
    
    bool contains(int key) {
        int i = hash(key);

        if(search(key) != m[i].end()) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */