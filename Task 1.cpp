#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(N) (where N is the length of string s)
// Space Complexity: O(1) since we have constant different characters


char firstNonRepeatingCharacter(string s) {
    unordered_map<char, int> count;
    // Traverse the string s to count the occurrences of each character 
    for(int i=0; i<s.size(); i++) {
        if(count.find(s[i])==count.end()) {
            count[s[i]]=1;
        } else {
            count[s[i]]++;
        }
    }
    // Find and return the first non-repeating character, if it exists
    for(int i=0; i<s.size(); i++) {
        if(count[s[i]]==1) {
            return s[i];
        }
    }
    // Return NULL if no non-repeating character is found 
    return NULL;
}

// int main() {
//     vector<string> testCases = {
//         "sapstar", "aabbcc", "a", "aaabbbc",
//         "abcabc", "aabc", "aabbccddeeffg", ""
//     };

//     for (const string& test : testCases) {
//         char result = firstNonRepeatingCharacter(test);
//         cout << "Input: \"" << test << "\"" << endl;
//         if (result == NULL) {
//             cout << "Output: null";
//         } else {
//             cout << "Output: \"" << result << "\"";
//         }
//         cout << endl;
//     }

//     return 0;
// }
