#include <bits/stdc++.h> 
class Queue {
    int itr;
    vector<int> v;
    int frontt;
    
    public:
        Queue() {
            itr=0;
            v.resize(0);
            frontt=0;
        }

        /*----------------- Public Functions of Queue -----------------*/

        bool isEmpty() {
            if(frontt>itr-1)
                return true;
            else 
                return false;
        }

        void enqueue(int data) {
            v.push_back(data);
            itr++;
        }

        int dequeue() {
            if(frontt<=itr-1)
                return v[frontt++];
            else 
                return -1;
        }

        int front() {
            if(frontt<=itr-1)
                return v[frontt];
            else 
                return -1;
        }
};
