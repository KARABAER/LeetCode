//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//class Solution {
//public:
//	string intToRoman(int num) {
//		string s = "";
//		//M;
//		while (num / 1000 != 0)
//		{
//			s.append("M");num -= 1000;
//		}
//		while (num / 500 != 0)
//		{
//			if (num >= 900) { s.append("CM"); num -= 900; }
//			else { s.append("D"); num -= 500; }
//		}
//		while (num / 100 != 0)
//		{
//			if (num >= 400) { s.append("CD"); num -= 400; }
//			else { s.append("C"); num -= 100; }
//		}
//		while (num / 50 != 0)
//		{
//			if (num >= 90) { s.append("XC"); num -= 90; }
//			else { s.append("L"); num -= 50; }
//		}
//		while (num / 10 != 0)
//		{
//			if (num >= 40) { s.append("XL"); num -= 40; }
//			else { s.append("X"); num -= 10; }
//		}
//		while (num / 5 != 0)
//		{
//			if (num == 9) { s.append("IX"); num -= 9; }
//			else { s.append("V"); num -= 5; }
//		}
//		while (num / 1 != 0)
//		{
//			if (num == 4) { s.append("IV"); num -= 4; }
//			else { s.append("I"); num -= 1; }
//		}
//		return s;
//	}
//};
//int main()
//{
//	int x;
//	Solution s = Solution();
//	while (cin >> x)
//	{
//		cout << s.intToRoman(x) << endl;
//	}
//
//}