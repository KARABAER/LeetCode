//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		if (x == 0)return 1;
//		if (x < 0)
//		{
//			return 0;
//		}
//		int a = 1000000000;
//		
//		while (!(x/a))
//		{
//			a /= 10;
//		}
//		while (x>9&&x / a == x % 10)
//		{
//			x = (x%a - x % 10) / 10;
//			a /= 100;
//		}
//		if (x ==0||(x<10&&a==1))return 1;
//		else return 0;
//
//
//	}
//};
//int main()
//{
//	int x;
//	Solution s = Solution();
//	while (cin >> x)
//	{
//		cout << s.isPalindrome(x) << endl; 
//	}
//}