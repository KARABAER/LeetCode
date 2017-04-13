#include<unordered_map>
#include<Vector>
#include<iostream>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		unordered_map<int, int> hash;
		vector<int> result;
		for (int i = 0; i < numbers.size(); i++) {
			int numberToFind = target - numbers[i];

			//if numberToFind is found in map, return them
			if (hash.find(numberToFind) != hash.end()) {
				//+1 because indices are NOT zero based
				result.push_back(hash[numberToFind] + 1);
				result.push_back(i + 1);
				return result;
			}

			//number was not found. Put it in the map.
			hash[numbers[i]] = i;
		}
		return result;

	}
};
int main()
{
	Solution s = Solution();
	int a[5] = {-1,-2,-3,-4,-5};
	vector<int >v(a, a + 5);
	v = s.twoSum(v, -8);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

}