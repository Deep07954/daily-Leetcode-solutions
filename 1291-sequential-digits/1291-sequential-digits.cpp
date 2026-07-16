class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       vector<int> result;
        
        // Loop through all possible lengths (2 to 9)
        for (int length = 2; length <= 9; ++length) {
            // Loop through all possible starting digits
            for (int start = 1; start <= 9 - length + 1; ++start) {
                int num = 0;
                int current = start;
                
                // Construct the sequential number
                for (int i = 0; i < length; ++i) {
                    num = num * 10 + current;
                    current++;
                }
                
                // Check if the number is within the range
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }
        
        // The generation order is already sorted by length and starting digit
        return result;

    }
};