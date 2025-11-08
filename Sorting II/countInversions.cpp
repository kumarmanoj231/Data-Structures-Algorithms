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


int merge(vector<int>&arr, int st, int mid, int end){
    int i=st,j=mid+1;
    vector<int> temp;
    int inversions = 0;
    while(i<=mid && j<=end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
            inversions += (mid-i+1);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }

    for(int k=0; k<temp.size(); k++){
        arr[st+k] = temp[k];
    }
    return inversions;
}

int mergeSort(vector<int> &arr, int st, int end){
    if(st < end){
        int mid = st + (end-st)/2;
        int la = mergeSort(arr, st, mid);
        int ra = mergeSort(arr, mid+1, end);
        int ca = merge(arr, st, mid, end);
        return la + ra + ca;
    }
    return 0;           // *** Important line
}

int main(){
    vector<int> arr1={1,2,3,4,5};
    cout << mergeSort(arr1,0,4) <<" , ";
    vector<int> arr2 ={5,4,3,2,1};
    cout << mergeSort(arr2,0,4) <<" , ";
    vector<int> arr3 = {5,3,2,1,4};
    cout << mergeSort(arr3,0,4) <<endl;
    return 0;
}