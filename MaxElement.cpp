
//Method1: Using regular if condition

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {

    int nums = INT_MIN;
    int maxval;

    for(int i=0;i<n;i++){

        if(arr[i]>=nums){
            nums=arr[i];
        }
    }

    return nums;

}

//Method2: Using Min Heap

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {

    priority_queue <int> pq;

    for(int i=0;i<n;i++){

        pq.push(arr[i]);
    }

    return pq.top();

}

