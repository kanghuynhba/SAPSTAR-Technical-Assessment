#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(N + M) where N and M are the sizes of arr1 and arr2 respectively
// Space Complexity: O(N + M)

vector<int> merge(vector<int>& arr1, vector<int>& arr2) {
    int i=0, j=0;
    vector<int> ans;
    // Merge elements from arr1 and arr2 in increasing order
    while(i<arr1.size() && j<arr2.size()) {
        if(arr1[i]<arr2[j]) {
            ans.push_back(arr1[i++]);
        } else {
            ans.push_back(arr2[j++]);
        }
    }
    // Push any remaining elements from arr1
    while(i<arr1.size()) {
        ans.push_back(arr1[i++]);
    }
    // Push any remaining elements from arr2
    while(j<arr2.size()) {
        ans.push_back(arr2[j++]);
    }
    return ans;
}

int main() {
    vector<pair<vector<int>, vector<int>>> testCases = {
        {{1, 3, 5}, {2, 4, 6}},         
        {{1, 5}, {2, 3, 4}},            
        {{}, {1, 2, 3}},                
        {{1, 2, 3}, {}},                
        {{}, {}},                      
        {{1, 2, 2, 3}, {2, 3, 4}},      
        {{-5, -2, 0}, {-4, -1, 1}},     
        {{1, 2, 3}, {4, 5, 6}},         
        {{4, 5, 6}, {1, 2, 3}},         
        {{INT_MIN}, {INT_MAX}}         
    };

    for (auto& [arr1, arr2] : testCases) {
        vector<int> result = merge(arr1, arr2);
        cout << "Input: arr1: ";
        for (int x : arr1) {
            cout << x << " ";
        } 
        cout << "| arr2: ";
        for (int x : arr2) {
            cout << x << " ";
        }
        cout << endl;
        cout << "Output: ";
        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
