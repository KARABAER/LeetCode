//#include<string>
//#include<iostream>
//#include<unordered_map>
//using namespace std;
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		if (s.length() == 0)return 0;
//		char pre;
//		int start=0, end = 0;
//		int result = 1;
//		pre = s[0];
//		unordered_map<char, int>map;
//		map[pre] = 0;
//		for (int i =1 ; i < s.length(); i++)
//		{
//			char ctemp = s.at(i);
//			if (map.count(ctemp) == 1&&map[ctemp]>=start)
//			{
//
//				if (end-start+1 > result)result = end-start+1;
//				start = map[ctemp] + 1;
//				end = i;
//				map[ctemp] = i;
//			}
//			else
//			{
//				map[ctemp] = i;
//				end++;
//			}
//			pre = ctemp;
//		}	
//		return result>end-start+1?result:end-start+1;
//	}
//};
//int main()
//{
//	string s;
//	cin >> s;
//	
//	Solution so = Solution();
//	
//		cout << so.lengthOfLongestSubstring(s)<<endl;
//	
//	
//}