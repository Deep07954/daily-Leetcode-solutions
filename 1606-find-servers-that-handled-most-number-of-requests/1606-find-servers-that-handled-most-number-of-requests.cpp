class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        vector<int> count(k, 0);
        set<int> available;
        for (int i = 0; i < k; ++i) {
            available.insert(i);
        }
        
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> busy;

        for (int i = 0; i < arrival.size(); ++i) {
            long long time = arrival[i];
            
            while (!busy.empty() && busy.top().first <= time) {
                available.insert(busy.top().second);
                busy.pop();
            }

            if (available.empty()) {
                continue;
            }

            int target = i % k;
            auto it = available.lower_bound(target);
            if (it == available.end()) {
                it = available.begin();
            }

            int server = *it;
            count[server]++;
            busy.push({time + load[i], server});
            available.erase(it);
        }

        int max_req = 0;
        for (int c : count) {
            max_req = max(max_req, c);
        }

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            if (count[i] == max_req) {
                result.push_back(i);
            }
        }

        return result;
    }
};

    