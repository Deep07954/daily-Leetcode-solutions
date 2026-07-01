class Solution {
public:
    string getSmallestString(string s, int k) {
        for (int i = 0; i < s.length(); i++) {
        // Calculate shortest cyclic distance to 'a'
        int distToA = min(s[i] - 'a', 'z' - s[i] + 1);
        
        if (k >= distToA) {
            // We can afford 'a'
            s[i] = 'a';
            k -= distToA;
        } else {
            // We can't afford 'a', just make it as small as possible
            s[i] = s[i] - k;
            k = 0; // Budget exhausted
            break; // No need to check the rest of the string
        }
    }
    return s;
    }
};