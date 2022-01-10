vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
        vector<int> result;
    if (k == 0) return result;
    priority_queue<pair<int, int>> w;
    for (int i = 0; i < n; i++) {
        while (!w.empty() && w.top().second <= i-k)
            w.pop();
        w.push(make_pair(nums[i],i));
        if (i >= k-1)
            result.push_back(w.top().first);
    }
    return result;
    }
