//#include<string>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	string longestPalindrome(string s) {
//		int start=0, end=0;
//		string t = s;
//		for (int i = 0; i < s.length(); i++)
//		{
//			t[s.length() - i - 1] = s[i];
//		}
//		int **p = new int*[s.length() + 1];
//		for (int i = 0; i <= s.length(); i++)
//		{
//			p[i] = new int[s.length() + 1];
//		}
//		for (int i = 0; i < s.length() + 1; i++)
//		{
//			p[0][i] = 0;
//			p[i][0] = 0;
//		}
//		int maxi, maxj;
//		int max = 0;
//		for(int i=1;i<s.length()+1;i++)
//			for (int j = 1; j < s.length() + 1; j++)
//			{
//				if (s[i - 1] == t[j - 1])
//				{
//
//					p[i][j] = p[i - 1][j - 1] + 1;
//				}
//				else
//				{
//					p[i][j] = 0;
//					if (p[i - 1][j - 1] > max&&i - 1 >= s.length() - j&&i-2-(s.length()-1-(j-2))<p[i-1][j-1])
//					{
//						max = p[i - 1][j - 1];
//						maxi = i-1;
//						maxj = j-1;
//					}
//
//				}
//			}
//		for (int i = 1,j=s.length(); i < s.length() + 1; i++)
//		{
//			if (p[i ][j ] > max&&i -1>= s.length() - j&&i-1-(s.length()-1-(j-1))<p[i][j])
//			{
//				max = p[i ][j];
//				maxi = i;
//				maxj = j;
//			}
//		}
//		for (int j = 1,i=s.length(); j < s.length() + 1; j++)
//		{
//			if (p[i ][j] > max&&i - 1 >= s.length() - j&&i - 1 - (s.length()-1 - (j - 1)) < p[i][j])
//			{
//				max = p[i][j];
//				maxi = i;
//				maxj = j;
//			}
//		}
//		return s.substr(maxi-max,max);
//	}
//};
//int main()
//{
//	string s;
//	Solution so = Solution();
//	while (cin >> s)
//	{
//		cout << so.longestPalindrome(s) << endl;
//	}
//}