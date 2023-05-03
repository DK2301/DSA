#include <iostream>
using namespace std;

int binary_search(int arr[],int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key) return mid;
        if(arr[mid]<key) start = mid+1;
        else end = mid-1;
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int arr[6]={0,2,4,5,8,9},size,index;
    size = sizeof(arr)/sizeof(arr[0]);
    index = binary_search(arr,size,4);
    cout<<index;
    return 0;
}