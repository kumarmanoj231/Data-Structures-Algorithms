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

void selection_sort(vector<int>& arr){         // Time complexity : O(n^2), SC : O(1)
    int n = arr.size();

    for(int i=0; i<n; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}


int main(){
    vector<int> arr1 = {13,46,24,52,20,9};
    selection_sort(arr1);
    printArr(arr1);

    vector<int> arr2 = {5,4,3,2,1};
    selection_sort(arr2);
    printArr(arr2);
    


    return 0;
}