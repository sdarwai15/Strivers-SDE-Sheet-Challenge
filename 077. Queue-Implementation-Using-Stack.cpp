#include <bits/stdc++.h>
#include<stack>
class Queue {
    private:
        stack<int> input, output;
    
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        input.push(val);
    }

    int deQueue() {
        if(!output.empty()){
            int data = output.top();
            output.pop();
            return data;
        }else{
            if(input.empty()){
                return -1;
            }else{
                while(!input.empty()){
                    output.push(input.top());
                    input.pop();
                }
                int data = output.top();
                output.pop();
                return data;
            }
        }
    }

    int peek() {
        if(!output.empty()){
            return output.top();;
        }else{
            if(input.empty()){
                return -1;
            }else{
                while(!input.empty()){
                    output.push(input.top());
                    input.pop();
                }
                return output.top();;
            }
        }
    }

    bool isEmpty() {
        return (input.empty() && output.empty());
    }
};
