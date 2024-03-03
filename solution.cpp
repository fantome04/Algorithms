class Solution {
public:
    void dfs(std::vector<int>& ans, int num, int n) {
        if (num <= n) {
            ans.push_back(num);
            dfs(ans, 10 * num, n);

            if (num % 10 < 9) {
                dfs(ans, num + 1, n);
            }
        }
    }

    vector<int> lexicalOrder(int n) {
        std::vector<int> ans;

        dfs(ans, 1, n);

        return ans;
    }
};