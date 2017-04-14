//
//#include<iostream>
//using namespace std;
//struct ListNode {
//	int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		int count = 0;
//		ListNode *result=new ListNode(1);
//		ListNode *temp = result;
//		while (l1!= NULL&&l2!=NULL)
//		{
//			int i = (l1->val + l2->val + count) % 10;
//			int j = (l1->val + l2->val + count) / 10;
//			ListNode *p = new ListNode(i);
//			count = j;
//			l1 = l1->next;
//			l2 = l2->next;
//			temp->next = p;
//			temp = temp->next;
//		}
//		while (l1 != NULL)
//		{
//			ListNode *p = new ListNode((l1->val+count)%10);
//			temp->next = p;
//			temp = temp->next;
//			
//			count = (l1->val + count) / 10;
//			l1 = l1->next;
//		}
//		while (l2 != NULL)
//		{
//			ListNode *p = new ListNode((l2->val+count)%10);
//			temp->next = p;
//			temp = temp->next;	
//			count = (l2->val+count)/10;
//			l2 = l2->next;
//		}
//		if(count==1)
//		{
//			ListNode *p = new ListNode(1);
//			temp->next = p;
//			temp = temp->next;
//		}
//		result = result->next;
//		return result;
//	}
//};
//int main()
//{
//	int x;
//	ListNode*s1=new ListNode(1);
//	ListNode*s2=new ListNode(2);
//	ListNode*temp1;
//	ListNode*temp2;
//	temp1 = s1;
//	temp2 = s2;
//	cin >> x;
//	while (x != 0)
//	{
//
//		int temp = x % 10;
//		x = (x - temp) / 10;
//		ListNode *p = new ListNode(temp);
//		temp1->next = p;
//		temp1 = temp1->next;
//	}
//	s1 = s1->next;
//	cin >> x;
//	while (x != 0)
//	{
//
//		int temp = x % 10;
//		x = (x - temp) / 10;
//		ListNode *p = new ListNode(temp);
//		temp2->next = p;
//		temp2 = temp2->next;
//		
//	}
//	s2 = s2->next;
//	Solution s =  Solution();
//	s1=s.addTwoNumbers(s1, s2);
//	x = 0;
//	while (s1 != NULL)
//	{
//		x = 10 * (x + s1->val);
//		s1 = s1->next;
//	}
//	cout << x;
//}