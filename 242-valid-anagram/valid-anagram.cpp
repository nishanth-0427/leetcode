class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int arr[26] = {0};

        for(char c : s) {
            arr[c - 'a'] += 1;
        }
        for(char c : t) {
             arr[c - 'a'] -= 1;
        }

        for(int i=0; i<26; i++) {
            if(arr[i] != 0) return false;
        }

        return true;
    }
};