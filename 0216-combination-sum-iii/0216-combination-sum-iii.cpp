class Solution {
public:
    vector<vector<int>> result;

    void generate(int num, vector<int>& temp, int k, int target) {
        if(target == 0 && temp.size() == k) {
            result.push_back(temp);
            return;
        }

        if(num >= 10 || target < 0) {
            return;
        }

        for(int i = num; i<10; i++) {
            temp.push_back(i);
            generate(i+1, temp, k, target-i);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        int num = 1;
        vector<int> temp;

        generate(num, temp, k, n);

        return result;
    }
};