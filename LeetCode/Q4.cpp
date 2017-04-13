//#include<Vector>
//#include<iostream>
//#include <algorithm>
//using namespace std;
//class Solution {
//public:
//	
//	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//		int m = nums1.size();
//		int n = nums2.size();
//		if (m > n) { return findMedianSortedArrays(nums2, nums1); }
//		int left = 0, right = m;
//		int halfLength = (m + n + 1) / 2;
//		int leftMax = 0;
//		int rightMin = 0;
//		while (left <= right)
//		{
//			int i = (left + right) / 2;
//			int j = halfLength - i;
//			if (i < m&&nums1[i] < nums2[j - 1])
//			{
//				left = i + 1;
//			}
//			else
//			if (i > 0&&nums1[i-1] > nums2[j])
//			{
//				right = i - 1;
//			}
//			else
//			{
//				if (i == 0)leftMax = nums2[j - 1];
//				else
//				{ 
//					if (j == 0)leftMax = nums1[i - 1];
//					else leftMax = max(nums1[i - 1], nums2[j - 1]);
//				}
//				if ((m + n) % 2 == 1)
//					return leftMax;
//
//				if (i == m)rightMin = nums2[j];
//				else
//				{
//					if (j == n)rightMin = nums1[i];
//					else rightMin = min(nums1[i], nums2[j]);
//				}
//					
//				
//				return (leftMax + rightMin) / 2.0;
//			}
//		}
//	}
//};
//int main()
//{
//	int a[8] = {1,3,2,3,4,5,6,7};
//	int b[2] = {2,9};
//	vector<int>a1(a, a + 2);
//	vector<int>a2(b, b + 1);
//	Solution s =  Solution();
//	cout<<s.findMedianSortedArrays(a1, a2);
//}