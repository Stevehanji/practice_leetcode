#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int n;
    n = height.size();
    int i = 0, j = n - 1, res = 0;
    while (i < j)
    {
      int new_area = (j - i) * min(height[i], height[j]);
      res = max(res, new_area);
      if (height[i] >= height[j])
        j--;
      else
        i++;
    }
    return res;
  }
};

int main()
{
  int n;
  cin >> n;
  vector<int> vt;
  while (n--)
  {
    int x;
    cin >> x;
    vt.push_back(x);
  }
  cout << Solution().maxArea(vt);
}