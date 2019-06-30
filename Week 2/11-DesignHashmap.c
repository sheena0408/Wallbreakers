class MyHashMap {
public:
    map<int,int> m;
    /** Initialize your data structure here. */
    MyHashMap() {
        map<int,int> m;
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        for(auto it=m.begin();it!=m.end();it++){
            if(it->first==key){
                it->second=value;
                return;
            }
        }
        m[key]=value;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        for(auto it=m.begin();it!=m.end();it++){
            if(it->first==key){
                return it->second;
            }
        }
        return -1;
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        for(auto it=m.begin();it!=m.end();it++){
            if(it->first==key){
                m.erase(key);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
