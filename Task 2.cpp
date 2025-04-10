#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(N) where N is the size of s
// Space Complexity: O(N)

unordered_map<char, int> countOccurrences(string s) {
    unordered_map<char, int> count;
    // Count the occurrences of each character
    for(int i=0; i<s.size(); i++) {
        if(count.find(s[i])==count.end()) {
            count[s[i]]=1;
        } else {
            count[s[i]]++;
        }
    }
    return count;
}

int main() {
    vector<string> testCases = {
        "sapstar", "aabbcc", "abcabcabc", "a", "", "abcabca"
    };
    for (string s : testCases) {
        unordered_map<char, int> result = countOccurrences(s);
        cout << "Input: \"" << s << "\"" << endl;
        cout << "Output: { ";
        for (auto it : result) {
            cout << it.first << "=" << it.second << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
