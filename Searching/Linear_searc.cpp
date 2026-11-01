
#include<iostream>
using namespace std;
int linear_search(int a[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(a[i] == target) 
              return i; 
    }
    return -1;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i]; }
    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int ans = linear_search(a, n, target);
    if(ans != -1)
        cout << "Element found at position: " << ans + 1 << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
