//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:	
//	bool isMatch(string s, string p) {
//		bool **q = new bool*[s.length() + 1];
//		for (int i = 0; i <= s.length(); i++)
//		{
//			q[i] = new bool[p.length() + 1];
//		}
//		q[0][0] = 1;
//		for (int i = 1; i <= p.length(); i++)
//		{
//			q[0][i] = i > 1 && p[i - 1] == '*'&&q[0][i - 2];
//		}
//		for (int j = 1; j <= s.length(); j++)
//		{
//			q[j][0] = 0;
//		}
//		for(int i=1;i<=s.length();i++)
//			for (int j = 1; j <= p.length(); j++)
//			{
//				if (p[j-1] == s[i-1] || p[j-1] == '.')q[i][j] = q[i - 1][j - 1];
//				else 
//					if (p[j - 1] == '*')
//					{
//						if (p[j - 2] != s[i - 1] && p[j - 2] != '.')q[i][j] = q[i][j - 2];
//						else q[i][j] = (q[i - 1][j] || q[i][j - 2]||q[i][j-1]);
//					}
//					else
//					{
//						q[i][j] = 0;
//					}
//			}
//		return q[s.length()][p.length()];
//	}
//};
//int main()
//{
//	string s, p;
//	Solution so = Solution();
//	while (cin>>s>>p)
//	{
//		cout << so.isMatch(s, p)<<endl;
//	}
//}