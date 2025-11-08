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

void sortColors(vector<int> &arr){
    int n = arr.size();
    int mid=0;
    int low =0,high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    printArr(arr);

}


int main(){
    vector<int> arr1 = {2,0,2,1,1,0};
    sortColors(arr1);
    vector<int> arr2 = {2,0,1};
    sortColors(arr2);
    vector<int> arr3 = {0};
    sortColors(arr3);
    return 0;
}