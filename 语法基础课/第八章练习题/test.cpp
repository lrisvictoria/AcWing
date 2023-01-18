// 67

//class Solution {
//public:
//    int getNumberOfK(vector<int>& nums, int k) {
//        multiset<int> tmp;
//        for (auto num : nums) {
//            tmp.insert(num);
//        }
//        return tmp.count(k);
//    }
//};

// 68

//class Solution {
//public:
//    int getMissingNumber(vector<int>& nums) {
//        unordered_set<int> set;
//        for (int num : nums) {
//            set.insert(num);
//        }
//        // 要 = ，可能消失的数字是 nums.size()
//        for (int i = 0; i <= nums.size(); i++) {
//            if (!set.count(i)) {
//                return i;
//            }
//        }
//        return 0;
//    }
//};

// 32 

//class Solution {
//public:
//    void reOrderArray(vector<int>& array) {
//        int l = 0, r = array.size() - 1;
//        while (l < r) {
//            while (l < r && (array[l] & 1)) {
//                l++;
//            }
//            while (l < r && !(array[r] & 1)) {
//                r--;
//            }
//            if (l < r) {
//                swap(array[l], array[r]);
//            }
//        }
//    }
//};

// 17

//class Solution {
//public:
//    vector<int> printListReversingly(ListNode* head) {
//        vector<int> res;
//        for (ListNode* cur = head; cur; cur = cur->next) {
//            res.push_back(cur->val);
//        }
//        reverse(res.begin(), res.end());
//        return res;
//    }
//};

// 20

//class MyQueue {
//public:
//    stack<int> st1, st2;
//    MyQueue() {
//
//    }
//
//    void push(int x) {
//        st1.push(x);
//    }
//
//    int pop() {
//        // st2 空，则将 st1 倒入 st2
//        if (st2.empty()) {
//            while (!st1.empty()) {
//                st2.push(st1.top());
//                st1.pop();
//            }
//        }
//        int res = st2.top();
//        st2.pop();
//        return res;
//    }
//
//    int peek() {
//        // 和 pop 同理
//        if (st2.empty()) {
//            while (!st1.empty()) {
//                st2.push(st1.top());
//                st1.pop();
//            }
//        }
//        return st2.top();
//    }
//
//    bool empty() {
//        return st1.empty() && st2.empty();
//    }
//};

// 53

//class Solution {
//public:
//    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
//        priority_queue<int, vector<int>, greater<int>> q;
//        for (auto num : input) {
//            q.push(num);
//        }
//        input.clear();
//        for (int i = 0; i < k; i++) {
//            input.push_back(q.top());
//            q.pop();
//        }
//        return input;
//    }
//};

// 75 

//class Solution {
//public:
//    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
//        set<int> s;
//        for (int num : nums) {
//            s.insert(num);
//        }
//        nums.clear();
//        for (set<int>::iterator i = s.begin(); i != s.end(); i++) {
//            if (s.find(target - *i) != s.end()) {
//                nums.push_back(*i);
//                nums.push_back(target - *i);
//                break;
//            }
//        }
//        return nums;
//    }
//};

// 51

//class Solution {
//public:
//    vector<vector<int>> permutation(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        vector<vector<int>> res;
//        do {
//            res.push_back(nums);
//        } while (next_permutation(nums.begin(), nums.end()));
//        return res;
//    }
//};

// 26

//class Solution {
//public:
//    int lowbit(int x) {
//        return x & -x;
//    }
//    int NumberOf1(int n) {
//        int res = 0;
//        while (n) {
//            n -= lowbit(n);
//            res++;
//        }
//        return res;
//    }
//};

// 862

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

const int N = 10010;

struct three
{
    int a;
    double b;
    string c;
}th[N];

bool cmp(three x, three y)
{
    return x.a < y.a;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> th[i].a >> th[i].b >> th[i].c;
    }

    sort(th, th + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << th[i].a << ' ' << fixed << setprecision(2) << th[i].b << ' ' << th[i].c << endl;
    }

    return 0;
}