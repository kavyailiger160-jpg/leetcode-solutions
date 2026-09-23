#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> count(26, 0);

        for (char c : s)
            count[c - 'a']++;

        for (char c : t)
            count[c - 'a']--;

        for (int x : count) {
            if (x != 0)
                return false;
        }

        return true;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    string s1 = "anagram";
    string t1 = "nagaram";

    cout << "Test Case 1: "
         << (solution.isAnagram(s1, t1) ? "true" : "false")
         << endl;

    // Test Case 2
    string s2 = "rat";
    string t2 = "car";

    cout << "Test Case 2: "
         << (solution.isAnagram(s2, t2) ? "true" : "false")
         << endl;

    return 0;
}