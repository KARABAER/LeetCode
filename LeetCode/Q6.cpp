//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	string convert(string s, int numRows) {
//		if (numRows == 1)return s;
//		int i=0, j=0;
//		int state = 0;
//		string* q = new string[numRows];
//		int *a = new int[numRows];
//		for (int i = 0; i < numRows; i++)
//		{
//			q[i] = s;
//			a[i] = 0;
//		}
//		for (int k = 0; k < s.length(); k++)
//		{
//			q[j][a[j]++] = s.at(k);
//			switch (state)
//			{
//			case 0:
//				if (j == numRows - 1) { state = 1; j--; i++; }
//				else { j++; }
//				break;
//			case 1:
//				if (j == 0) { state = 0; j++; }
//				else { j--; i++; }
//				break;
//			default:
//				break;
//			}
//		}
//		string result="";
//		for (int i = 0; i < numRows; i++)
//		{
//			result += q[i].substr(0, a[i]);
//		}
//
//		return result;
//	}
//};
//int main()
//{
//	Solution so = Solution();
//	string s;
//	int row;
//	cin >> s >> row;
//
//		cout << so.convert(s, row) << endl;
//	
//}