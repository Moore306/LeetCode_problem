#include"problem.h"
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {



	ListNode ListNode3(10);
	ListNode *p3 = &ListNode3;
	ListNode*p1 = l1;
	ListNode*p2 = l2;
	int num1, num2, carry = 0;
	while (p1 != NULL || p2 != NULL) {
		num1 = p1 != NULL ? p1->val : 0;
		num2 = p2 != NULL ? p2->val : 0;
		p3->next = new ListNode(110);
		p3 = p3->next;
		//cout << "" << (num1 + num2 + carry) % 10<<endl;
		p3->val = (num1 + num2 + carry) % 10;

		carry = (num1 + num2 + carry) / 10;
		if (p1)
			p1 = p1->next;
		if (p2)
			p2 = p2->next;

	}

	if (carry != 0)
	{
		p3->next = new ListNode(carry);
	}

	return ListNode3.next;
}
int problem2()
{
	ListNode ListNode1(0), ListNode2(0);
	ListNode* l1 = &ListNode1, *l2 = &ListNode2;
	ListNode* l3;
	for (int i = 0; i < 10; i++)
	{
		l1->next = new ListNode(rand() % 10);
		l1 = l1->next;
		
	}
	for (int i = 0; i < 13; i++)
	{
		l2->next = new ListNode(rand() % 10);
		l2 = l2->next;

	}
	l1 = &ListNode1;
	l2 = &ListNode2;
	cout << "l1 :" << endl;
	while (l1 != NULL)
	{
		cout << "  " << int(l1->val);
		l1 = l1->next;

	}
	cout << endl << endl;
	cout << "l2 :" << endl;
	while (l2!= NULL)
	{
		cout << "  " << l2->val ;
		l2 = l2->next;

	}
	cout << endl<<"######################" << endl;
	l3 = addTwoNumbers(&ListNode1, &ListNode2);
	while (l3!= NULL)
	{
		cout << " " << l3->val;
		l3 = l3->next;

	}
	return 0;

}