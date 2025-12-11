// week14-2.cpp
// LeetCode 學習計畫 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head==nullptr || head->next==nullptr) return head; // 終止條件

        // 5行搞定[函式呼叫函示]
        ListNode* ans = reverseList(head->next);
        head->next->next = head; // 現在的下一筆 的下一筆，要指向自己
        head->next = nullptr; // 收尾
        return ans;
    }
};
