// 21

//class Solution {
//public:
//    typedef long long ll;
//    int Fibonacci(int n) {
//        // 
//        vector<int> fib;
//        fib.push_back(0);
//        fib.push_back(1);
//        for (int i = 2; i <= n; i++) {
//            fib.push_back(fib[i - 1] + fib[i - 2]);
//        }
//
//        return fib[n];
//    }
//};

// 16

//class Solution {
//public:
//    string replaceSpaces(string& str) {
//        string res;
//        for (char& ch : str) {
//            if (ch == ' ') {
//                res += "%20";
//            }
//            else {
//                res += ch;
//            }
//        }
//        return res;
//    }
//};

// 84

//class Solution {
//public:
//    int getSum(int n) {
//        if (n == 1) {
//            return 1;
//        }
//        else {
//            return n + getSum(n - 1);
//        }
//    }
//};

// 28

//class Solution {
//public:
//    void deleteNode(ListNode* node) {
//        node->val = node->next->val;
//        node->next = node->next->next;
//    }
//};

// 36

//class Solution {
//public:
//    ListNode* merge(ListNode* l1, ListNode* l2) {
//        ListNode* head, * tail, * cur1, * cur2;
//        if (!l1) {
//            return l2;
//        }
//        if (!l2) {
//            return l1;
//        }
//        head = tail = new ListNode(-1);
//        while (l1 && l2) {
//            if (l1->val <= l2->val) {
//                tail->next = l1;
//                tail = l1;
//                l1 = l1->next;
//            }
//            else {
//                tail->next = l2;
//                tail = l2;
//                l2 = l2->next;
//            }
//        }
//        if (l1) {
//            tail->next = l1;
//        }
//        else if (l2) {
//            tail->next = l2;
//        }
//        ListNode* res = head->next;
//        delete head;
//        return res;
//    }
//};

// 78

//class Solution {
//public:
//    string leftRotateString(string str, int n) {
//        string res, a, b;
//        a = str.substr(0, n);
//        b = str.substr(n);
//        res = b + a;
//        return res;
//    }
//};

// 87

//class Solution {
//public:
//    typedef long long ll;
//    int strToInt(string str) {
//        ll res = 0, k = 0;
//        // 去空格
//        while (k < str.size() && str[k] == ' ') {
//            k++;
//        }
//        // 处理正负号
//        int minus = 1;
//        if (k < str.size() && str[k] == '-') {
//            minus = -1;
//            k++;
//        }
//        else if (k < str.size() && str[k] == '+') {
//            k++;
//        }
//        // 求值
//        while (k < str.size() && (str[k] >= '0' && str[k] <= '9')) {
//            res = res * 10 + str[k] - '0';
//            if (res > INT_MAX) {
//                break;
//            }
//            k++;
//        }
//        // 判断求得绝对值是否溢出
//        res *= minus;
//        if (res > INT_MAX) {
//            res = INT_MAX;
//        }
//        else if (res < INT_MIN) {
//            res = INT_MIN;
//        }
//        return res;
//    }
//};

// 35

//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode* newhead = NULL;
//        ListNode* cur = head;
//        while (cur) {
//            ListNode* next = cur->next;
//            cur->next = newhead;
//            newhead = cur;
//            cur = next;
//        }
//        return newhead;
//    }
//};

// 66

//class Solution {
//public:
//    ListNode* findFirstCommonNode(ListNode* headA, ListNode* headB) {
//        ListNode* l1, * l2;
//        int ll1 = 1, ll2 = 1;
//        for (l1 = headA; l1 != nullptr; l1 = l1->next) {
//            ll1++;
//        }
//        for (l2 = headB; l2 != nullptr; l2 = l2->next) {
//            ll2++;
//        }
//        if (l1 != l2) {
//            return nullptr;
//        }
//        ListNode* longer = ll1 > ll2 ? headA : headB;
//        ListNode* shorter = ll1 > ll2 ? headB : headA;
//        int gap = abs(ll1 - ll2);
//        while (gap--) {
//            longer = longer->next;
//        }
//        while (longer != shorter) {
//            longer = longer->next;
//            shorter = shorter->next;
//        }
//        return longer;
//    }
//};

// 29

class Solution {
public:
    ListNode* deleteDuplication(ListNode* head) {
        auto dummy = new ListNode(-1);
        dummy->next = head;
        auto p = dummy;
        while (p->next != nullptr) {
            auto q = p->next;
            // 按照节点值是否相同遍历
            while (q->next != nullptr && q->next->val == p->next->val) {
                q = q->next;
            }
            // 如果 q 是 p 的后驱，则正常走一步
            if (q == p->next) {
                p = p->next;
            }
            else {
                // 否则则删除
                p->next = q->next;
            }
        }
        return dummy->next;
    }
};