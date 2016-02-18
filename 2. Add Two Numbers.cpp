#include "stdio.h"
#include "stdlib.h"


 struct ListNode {
     int val;
     struct ListNode *next;
 };


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

int main(){
    struct ListNode* l1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* l2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* lr = (struct ListNode *)malloc(sizeof(struct ListNode));

    l1->val = 5;
    struct ListNode* newNode1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    //newNode1->val = 2;
    //newNode1->next = NULL;
    //l1->next = newNode1;
    l1->next = NULL;


    l2->val = 5;
    struct ListNode* newNode2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode2->val = 2;
    newNode2->next = NULL;
    l2->next = newNode2;

    lr = addTwoNumbers(l1, l2);

    system("PAUSE");
    return 0;
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    bool flag1 = true;
    bool flag2 = true;
    struct ListNode* result = (struct ListNode *)malloc(sizeof(struct ListNode));
    result->val = 0;
    struct ListNode* head;
    head = result;
    int add = 0;
    
    while(1) {
        int val1 = 0;
        int val2 = 0;
        
        if(flag1)
            val1 = l1->val;
        else
            val1 = 0;
            
        if(flag2)
            val2 = l2->val;
        else
            val2 = 0;
        
        int sum = val1 + val2;
        result->val += add;
        add = sum / 10;
        result->val += sum % 10;
        
        if(flag1)
            l1 = l1->next;
        if(flag2)
            l2 = l2->next;

        if(NULL == l1)
            flag1 = false;
        if(NULL == l2)
            flag2 = false;

        if(!flag1 && !flag2)
            break;

        struct ListNode *newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = 0;
        result->next = newNode;
        result = result->next;

    }
    
    return head;
}