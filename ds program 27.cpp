#include <stdio.h>
#include <stdlib.h>
struct ListNode {
 int val;
 struct ListNode* next;
};
struct ListNode* insertNode(struct ListNode* head, int p, int n) {
 struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
 newNode->val = n;
 if (p == 0) {
 newNode->next = head;
 return newNode;
 }
 int i;
 struct ListNode* current = head;
 for ( i = 0; i < p - 1 && current != NULL; ++i) {
 current = current->next;
 }
 if (current != NULL) {
 newNode->next = current->next;
 current->next = newNode;
 }
 return head;
}
void printLinkedList(struct ListNode* head) {
 while (head != NULL) {
 printf("%d", head->val);
 if (head->next != NULL) {
 printf("->");
 }
 head = head->next;
 }
 printf("\n");
}
int main() {
 struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
 head1->val = 1;
 head1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
 head1->next->val = 3;
 head1->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
 head1->next->next->val = 2;
 head1->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
 head1->next->next->next->val = 3;
 head1->next->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
 head1->next->next->next->next->val = 4;
 head1->next->next->next->next->next = (struct ListNode*)malloc(sizeof(struct 
ListNode));
 head1->next->next->next->next->next->val = 5;
 head1->next->next->next->next->next->next = NULL;
 int p1 = 3, n1 = 2;
 head1 = insertNode(head1, p1, n1);
 printf("Output 1: ");
 printLinkedList(head1);
 struct ListNode* current1 = head1;
 struct ListNode* next1;
 while (current1 != NULL) {
 next1 = current1->next;
 free(current1);
 current1 = next1;
 }
 struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
 head2->val = 1;
 head2->next = NULL;
 int p2 = 0, n2 = 0;
 head2 = insertNode(head2, p2, n2);
 printf("Output 2: ");
 printLinkedList(head2);
 free(head2);
 struct ListNode* head3 = (struct ListNode*)malloc(sizeof(struct ListNode));
 head3->val = 1;
 head3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
 head3->next->val = 2;
 head3->next->next = NULL;
 int p3 = 3, n3 = 3;
 head3 = insertNode(head3, p3, n3);
 printf("Output 3: ");
 printLinkedList(head3);
 struct ListNode* current3 = head3;
 struct ListNode* next3;
 while (current3 != NULL) {
 next3 = current3->next;
 free(current3);
 current3 = next3;
 }
 return 0;
}    
