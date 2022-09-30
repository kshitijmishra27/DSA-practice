
// Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

// Implement the LRUCache class:

// LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
// int get(int key) Return the value of the key if the key exists, otherwise return -1.
// void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
// The functions get and put must each run in O(1) average time complexity.

// Code fro LRU cache
class LRUCache
{
public:
    list<pair<int, int>> l;
    unordered_map<int, list<pair<int, int>>::iterator> umap;
    int size;

    LRUCache(int capacity)
    {

        size = capacity;
    }

    int get(int key)
    {

        if (umap.find(key) == umap.end())
            return -1;
        l.splice(begin(l), l, umap[key]);
        return umap[key]->second;
    }

    void put(int key, int value)
    {

        if (umap.find(key) != umap.end())
        {
            l.splice(begin(l), l, umap[key]);
            umap[key]->second = value;
            return;
        }
        if (l.size() == size)
        {
            auto d_key = l.back().first;
            l.pop_back();
            umap.erase(d_key);
        }
        l.push_front({key, value});
        umap[key] = begin(l);
    }
};