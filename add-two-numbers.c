/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode head;
	struct ListNode *current = &head;
	int carry = 0;

	while(l1 != NULL || l2 != NULL || carry) {
		int sum = carry;
		if(l1 != NULL) {
			sum += l1->val;
			l1 = l1->next;
		}
		if(l2 != NULL) {
			sum += l2->val;
			l2 = l2->next;
		}
		carry = sum / 10;
		struct ListNode *node = (struct ListNode*)malloc(sizeof(struct ListNode));
		node->val = sum % 10;
		node->next = NULL;
		current->next = node;
		current = node;
	}
	return head.next;
}
