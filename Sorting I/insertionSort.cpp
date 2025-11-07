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

void insertion_sort(vector<int>& arr){         // Time complexity : O(n^2), SC : O(1)
    int n = arr.size();

    int prev,curr;
    for(int i=1; i<n; i++){
        prev = i-1;
        curr  = arr[i];

        while(prev >=0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    
}


int main(){
    vector<int> arr1 = {13,46,24,52,20,9};
    insertion_sort(arr1);
    printArr(arr1);

    vector<int> arr2 = {5,4,3,2,1};
    insertion_sort(arr2);
    printArr(arr2);
    


    return 0;
}