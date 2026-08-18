#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3,6,9,1};
    int min_num, max_num; min_num = max_num = nums[0];

    for (int i = 0; i < nums.size(); i++) {
        min_num = min(nums[i], min_num);
        max_num = max(nums[i], max_num);
    }
    if (min_num == max_num) return 0;

    int gap = max(1, ((max_num - min_num) / 3));

    cout << gap;
}