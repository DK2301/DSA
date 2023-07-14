// Write a function: int solution(vector<int> &A), that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

// For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.
// Given A = [1, 2, 3], the function should return 4.
// Given A = [−1, −3], the function should return 1.

// Write an efficient algorithm for the following assumptions:
// N is an integer within the range [1..100,000];
// each element of array A is an integer within the range [−1,000,000..1,000,000].
#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int> &arr) {
    int n = arr.size();
 int k = 1;
 while(true) {
    bool op = true;
    for(int i = 0; i<n;i++) {
        if(arr[i] == k) {
            k++;
            op = false;
        }
    }
    if(op)
    break;
 }
 //cout<<k<<"\n";
 return k; }

int main(){
    vector<int> arr = {-1,1,2,3,4,5,6,7,8,9,10,11,12,13,13,15,16,17,18,19,20};
    cout<<solution(arr);
    return 0;
}