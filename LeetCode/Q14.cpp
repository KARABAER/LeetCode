//#include<vector>
//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		if (strs.size() == 0)return "";
//		int result = 0;
//		char c;
//		for (int i = 0; i < strs.size(); i++)
//		{
//			if (strs[i].size() <= result)break;
//			if(i==0)c = strs[i][result];
//			else
//			{
//				if (strs[i][result] != c)break;
//			}
//			if (i == strs.size() - 1)
//			{
//				i = -1;
//				result++;
//			}
//		}
//		return strs[0].substr(0,result);
//	}
//};
//int main()
//{
//	vector<string> strs;
//	string s;
//	Solution sl = Solution();
//	
//		while (cin >> s)
//		{
//			strs.push_back(s);
//		}
//		cout << sl.longestCommonPrefix(strs) << endl;
//	
//}