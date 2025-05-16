#include <bits/stdc++.h>
using namespace std;

class Lrucache {
public:
    class Node {
    public:
        int key, val;
        Node *prev, *next;

        Node(int k, int v) {
            key = k;
            val = v;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    int cap;
    unordered_map<int, Node*> mpp;

    Lrucache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addnode(Node* newnode) {
        Node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    void deletenode(Node* delnode) {
        Node* delprev = delnode->prev;
        Node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    int getkey(int key_) {
        if (mpp.find(key_) != mpp.end()) {
            Node* resnode = mpp[key_];
            int res = resnode->val;
            mpp.erase(key_);
            deletenode(resnode);
            addnode(resnode);
            mpp[key_] = head->next;
            return res;
        }
        return -1;
    }

    void put(int key_, int value) {
        if (mpp.find(key_) != mpp.end()) {
            Node* existingnode = mpp[key_];
            mpp.erase(key_);
            deletenode(existingnode);
        }
        if (mpp.size() == cap) {
            mpp.erase(tail->prev->key);
            deletenode(tail->prev);
        }

        Node* newnode = new Node(key_, value);
        addnode(newnode);
        mpp[key_] = head->next;
    }
};

int main() {
    Lrucache lru(4);
    lru.put(2, 6);
    lru.put(4, 7);
    lru.put(8, 11);
    cout << lru.getkey(2) << endl;  // Output should be 6
    cout << lru.getkey(4) << endl;  // Output should be 7
    cout << lru.getkey(9) << endl;  // Output should be -1 (not in cache)
    return 0;
}
