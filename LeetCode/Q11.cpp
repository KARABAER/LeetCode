//#include<vector>
//#include<algorithm>
//#include<iostream>
//#include<unordered_map>
//using namespace std;
//class Solution {
//public:
//	int maxArea(vector<int>& height) {
//		int maxarea = 0;
//		int left = 0;
//		int right = height.size() - 1;
//		while (left < right)
//		{
//			maxarea = max(maxarea, min(height[left] , height[right]) * (right - left));
//			if (height[left] < height[right])left++;
//			else right--;
//
//		}
//		return maxarea;
//	}
//};
//int main()
//{
//	vector<int > height;
//	Solution s = Solution();
//	cout << s.maxArea(height) << endl;
//	
//}