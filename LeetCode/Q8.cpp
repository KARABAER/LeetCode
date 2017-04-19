//#include<iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//	int myAtoi(string str) {
//		enum { space, number, negative, other };
//		long long result = 0;
//		int nega = 0;
//		int state = space;
//		for (int i = 0; i < str.length();)
//		{
//			char c = str.at(i);
//			switch (state)
//			{
//			case space:
//				if (!isspace(c))state=negative;
//				else i++;
//				break;
//			case number:
//				if (c >= '0'&&c <= '9')
//				{ 
//					result = result * 10 + c - '0';
//					i++;
//					if (result > INT32_MAX&&nega==0) { result = INT32_MAX; state = other; }
//					if (0-result < INT32_MIN&&nega==1) { result = INT32_MAX+1; state = other; }
//				}
//				else state = other;
//				break;
//			case other:
//				i=str.length();
//				break;
//			case negative:
//				if (c == '-') { nega = 1; i++; }
//				if (c == '+') { i++; }
//				state = number;
//				break;
//			}
//		}
//		if (nega == 1)result = 0 - result;
//		return result;
//	}
//};
//int main()
//{
//	Solution so = Solution();
//	string s;
//	while (cin >> s)
//	{
//		cout << so.myAtoi(s) << " ";
//		cout << atoi(s.c_str()) << endl;
//		cout << INT32_MIN << endl;
//	}
//}