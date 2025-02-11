/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start



// 只需要找到第一个不为9的元素++便好，
// 后续的都置为0即可，当然需要考虑全部为9的情况
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] != 9) {
                ++digits[i];
                for (int j = i + 1; j < n; ++j) 
                    digits[j] = 0;
                
                return digits;
            }
        }

        // digits 中所有的元素均为 9
        vector<int> ans(n + 1);
        ans[0] = 1;
        return ans;
    }
};

// @lc code=end

