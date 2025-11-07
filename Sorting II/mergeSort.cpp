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

void merge(vector<int>& arr, int st, int mid, int end){
    int i=st, j= mid+1;
    vector<int> temp;
    while(i<= mid && j<=end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j++]);
    }

    for(int k=0; k<temp.size(); k++){
        arr[st+k] = temp[k];
    }
}

void merge_sort(vector<int>& arr, int st, int end){         // Time complexity : O(nlogn), SC : O(n)
    if(st < end){
        int mid = st + (end-st)/2;
        merge_sort(arr, st, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, st, mid, end);
    }
    
}


int main(){
    vector<int> arr1 = {3,2,8,5,1,4,23};
    merge_sort(arr1, 0, arr1.size()-1);
    printArr(arr1);

    vector<int> arr2 = {4,2,1,6,7};
    merge_sort(arr2, 0, arr2.size()-1);
    printArr(arr2);
    


    return 0;
}