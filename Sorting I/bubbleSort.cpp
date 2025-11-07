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

void bubble_sort(vector<int>& arr){         // Time complexity : O(n^2), SC : O(1)
    int n = arr.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void bubble_sort_optimised(vector<int> &arr){
    int n = arr.size();

    for(int i=0; i<n; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

int main(){
    vector<int> arr1 = {13,46,24,52,20,9};
    // bubble_sort(arr1);
    bubble_sort_optimised(arr1);
    printArr(arr1);

    vector<int> arr2 = {5,4,3,2,1};
    // bubble_sort(arr2);
    bubble_sort_optimised(arr2);
    printArr(arr2);
    


    return 0;
}