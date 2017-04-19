//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//	int romanToInt(string s) {
//		int result = 0;
//		unordered_map<string, int>map;
//		map["I"] = 1; map["IV"] = 4; map["V"] = 5;
//		map["IX"] = 9; map["X"] = 10; map["XL"] = 40;
//		map["L"] = 50; map["XC"] = 90; map["C"] = 100;
//		map["CD"] = 400; map["D"] = 500; map["CM"] = 900;
//		map["M"] = 1000;
//		for (int i = s.size() - 1; i >= 0;)
//		{
//			if (i>0&&map.count(s.substr(i - 1, 2)) > 0) {
//				result += map[s.substr(i - 1, 2)];
//				i -= 2;
//			}
//			else
//			{
//				result += map[s.substr(i, 1)];
//				i--;
//			}
//		}
//		return result;
//	}
//};
//int main()
//{
//	string s;
//	Solution sl = Solution();
//	while (cin >> s)
//	{
//		cout << sl.romanToInt(s) << endl;
//	}
//}