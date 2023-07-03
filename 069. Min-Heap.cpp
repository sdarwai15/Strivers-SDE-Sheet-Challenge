#include <bits/stdc++.h> 

void bottomUpHeapify(vector<int>& heap,int i) {
    int parent = (i-1)/2;

    if(parent>=0 && heap[parent]>heap[i]) {
        swap(heap[parent],heap[i]);
        bottomUpHeapify(heap,parent);
    }
}

void topDownHeapify(vector<int>& heap,int i) {
    int smallest = i, l=(2*i) + 1, r=(2*i) + 2;
    
    if(l<heap.size() && heap[smallest]>heap[l]) {
        smallest=l;
    }
    
    if(r<heap.size() && heap[smallest]>heap[r]) {
        smallest=r;
    }
    
    if(smallest!=i) {
        swap(heap[smallest],heap[i]);
        topDownHeapify(heap,smallest);
    }
}

vector<int> minHeap(int n, vector<vector<int>>& q) {
    vector<int> Heap, ans;
    for(auto it: q) {
        if(it[0]==0) {
            Heap.push_back(it[1]);
            bottomUpHeapify(Heap,Heap.size()-1);
        } else {
            if(Heap.size()==0)
                continue;
            
            int pop = Heap[0];

            Heap[0] = Heap.back();
            Heap.pop_back();
            
            topDownHeapify(Heap,0);
            
            ans.push_back(pop);
        }
    }

    return ans;
}
