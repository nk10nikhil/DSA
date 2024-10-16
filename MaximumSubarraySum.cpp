# include <iostream>
# include <vector>
using namespace std;

// For Printing SubArray
void subArray(int arr[], int n){
    for(int i=0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << "(";
            for(int k = i; k <= j; k++){
                cout << arr[k];
                if(k==j){
                    continue;
                }
                cout << ",";
            }
            cout << ") ";
        }
        cout << endl;
    }
}

// Maximum Sum of SubArray
int maxSum(int arr[], int n){
    int maxSum = 0;
    for(int i=0; i < n; i++){
        int arraysum = 0;
        for(int j = i; j < n; j++){
            arraysum += arr[j];
            // cout << arraysum;
            maxSum = max(maxSum, arraysum);
            // cout << " ";
            }
        // cout << endl;
        }
    // cout << "The Maximum Sum of the Subarray is : " << maxSum;
    return maxSum;
}

// Kadence Algorithm
int kadenceAlgo(int arr[], int n) {
    int maxSum = arr[0];
    int maxEnd = arr[0];
    for (int i = 1; i < n; i++) {
        maxEnd = max(arr[i], maxEnd + arr[i]);
        maxSum = max(maxSum, maxEnd);
    }
    return maxSum;
}

int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int n = sizeof(arr) / sizeof(arr[0]);
    subArray(arr, n);
    cout << maxSum(arr, n) << endl;
    cout << kadenceAlgo(arr, n) << endl;
}