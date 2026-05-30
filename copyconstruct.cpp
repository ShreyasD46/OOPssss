class Solution {
public:
    long long calculateMaxProfit(vector<int>& jobStartTimes,
                                 vector<int>& jobEndTimes,
                                 vector<int>& jobProfits)
    {
        int n = jobStartTimes.size();
        if (n == 0) return 0;

        // {endTime, startTime, profit}
        vector<vector<long long>> jobs;

        for (int i = 0; i < n; i++) {
            jobs.push_back({jobEndTimes[i], jobStartTimes[i], jobProfits[i]});
        }

        // Sort by end time
        sort(jobs.begin(), jobs.end());

        vector<long long> dp(n);

        dp[0] = jobs[0][2];

        for (int i = 1; i < n; i++) {

            long long take = jobs[i][2];

            // Binary search for last non-conflicting job
            int l = 0, r = i - 1;
            int pos = -1;

            while (l <= r) {
                int mid = (l + r) / 2;

                if (jobs[mid][0] <= jobs[i][1]) {
                    pos = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            if (pos != -1)
                take += dp[pos];

            dp[i] = max(dp[i - 1], take);
        }

        return dp[n - 1];
    }
};
