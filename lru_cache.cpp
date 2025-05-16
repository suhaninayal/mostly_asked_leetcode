#include <bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    // Define a node for the doubly linked list
    class node {
    public:
        int key; // Key of the node
        int val; // Value of the node
        node* next; // Pointer to the next node
        node* prev; // Pointer to the previous node
        
        // Constructor to initialize a node
        node(int _key, int _val) {
            key = _key;
            val = _val;
        }
    };

    node* head = new node(-1, -1); // Dummy head node
    node* tail = new node(-1, -1); // Dummy tail node
    int cap; // Capacity of the cache
    unordered_map<int, node*> m; // Hash map to store keys and node addresses

    // Constructor to initialize the cache
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    // Function to add a new node next to the head
    void addnode(node* newnode) {
        node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    // Function to delete a node
    void deletenode(node* delnode) {
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    // Function to get the value associated with a key
    int get(int key_) {
        if (m.find(key_) != m.end()) {
            node* resnode = m[key_];
            int res = resnode->val;
            m.erase(key_);
            deletenode(resnode);
            addnode(resnode);
            m[key_] = head->next;
            return res;
        }
        return -1; // Key not found
    }

    // Function to insert or update a key-value pair
    void put(int key_, int value) {
        if (m.find(key_) != m.end()) {
            node* existingnode = m[key_];
            m.erase(key_);
            deletenode(existingnode);
        }
        if (m.size() == cap) {
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key_, value));
        m[key_] = head->next;
    }
};

// Main function for testing
int main() {
    LRUCache cache(2); // Create a cache with capacity 2
    
    cache.put(1, 1); // Add key=1, value=1
    cache.put(2, 2); // Add key=2, value=2
    cout << cache.get(1) << endl; // Return 1
    
    cache.put(3, 3); // Remove least recently used (key=2), add key=3, value=3
    cout << cache.get(2) << endl; // Return -1 (not found)
    
    cache.put(4, 4); // Remove least recently used (key=1), add key=4, value=4
    cout << cache.get(1) << endl; // Return -1 (not found)
    cout << cache.get(3) << endl; // Return 3
    cout << cache.get(4) << endl; // Return 4
    
    return 0;
}
