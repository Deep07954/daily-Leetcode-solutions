#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        // Evaluate the 3 critical points where the cost function slope shifts
        long long candidates[] = {0, need1, need2};
        long long min_total_cost = -1;

        for (long long x3 : candidates) {
            // Determine leftover required items for type 1 and type 2
            long long x1 = max(0LL, need1 - x3);
            long long x2 = max(0LL, need2 - x3);
            
            long long current_cost = x3 * costBoth + x1 * cost1 + x2 * cost2;
            
            // Track the absolute lowest cost found
            if (min_total_cost == -1 || current_cost < min_total_cost) {
                min_total_cost = current_cost;
            }
        }

        return min_total_cost;
    }
};
