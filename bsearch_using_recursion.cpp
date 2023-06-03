#include<iostream>
using namespace std;

bool b_search(int* arr, int st, int en, int k){
    
    // base case
    if(st > en){
        return false;
    }

    int m = st+(en-st)/2;
    
    if(arr[m] == k){
        return true;
    }
    else if(arr[m] > k){
        en = m - 1;
        return b_search(arr,st, en, k);
    }
    else{
        st = m + 1; 
        return b_search(arr, st, en, k);
    }
    
}

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cin >> key;
    bool ans = b_search(arr, 0, 10, key);
    if(ans)
    cout << "Element Found " << endl;
    else
    cout << "Element not Found " << endl;
    return 0;
}