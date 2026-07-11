class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> iscomposite(n, false);

        for (int i = 2; i * i < n; i++) {
            if (!iscomposite[i]) {
                for (int j = i * i; j < n; j += i) {
                    iscomposite[j] = true;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (!iscomposite[i]) count++;
        }
        return count;
    }
};