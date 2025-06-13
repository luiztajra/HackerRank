#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache : public Cache {
public:
    LRUCache(int capacity) {
        cp = capacity;
        head = NULL;
        tail = NULL;
    }

private:
    void remove(Node* node) {
        if (!node) return;
        if (node->prev) node->prev->next = node->next;
        else head = node->next;
        if (node->next) node->next->prev = node->prev;
        else tail = node->prev;
    }

    void insertAtHead(Node* node) {
        node->next = head;
        node->prev = NULL;
        if (head) head->prev = node;
        head = node;
        if (!tail) tail = head;
    }

public:
    int get(int key) override {
        if (mp.find(key) == mp.end()) return -1;
        Node* node = mp[key];
        remove(node);
        insertAtHead(node);
        return node->value;
    }

    void set(int key, int value) override {
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->value = value;
            remove(node);
            insertAtHead(node);
        } else {
            if (mp.size() == cp) {
                mp.erase(tail->key);
                remove(tail);
            }
            Node* newNode = new Node(key, value);
            insertAtHead(newNode);
            mp[key] = newNode;
        }
    }
};
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
