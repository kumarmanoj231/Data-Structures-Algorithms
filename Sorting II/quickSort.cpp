#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> arr){

    cout <<"array : ";
    for(auto x: arr){
        cout << x <<" ";
    }
    cout << endl;
}

int partition(vector<int>& arr, int st, int end){
    int pivot = arr[end];
    int idx = st-1;

    for(int i=st; i<end; i++){
        if(arr[i] < pivot){
            idx++;
            swap(arr[idx],arr[i]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;   
}

void quick_sort(vector<int>& arr, int st, int end){         // Time complexity : O(n^2), SC : O(n)
    if(st < end){
        int pivot = partition(arr,st,end);
        quick_sort(arr, st, pivot-1);
        quick_sort(arr, pivot+1, end);
    }
    
}


int main(){
    vector<int> arr1 = {4,1,7,9,3};
    quick_sort(arr1, 0, arr1.size()-1);
    printArr(arr1);

    vector<int> arr2 = {4,6,2,5,7,9,1,3};
    quick_sort(arr2, 0, arr2.size()-1);
    printArr(arr2);
    


    return 0;
}