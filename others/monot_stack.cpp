#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> findNextGreater(const vector<int>& v) {
    stack<int> s;
    vector<int> res(v.size());

    for (int i = v.size() - 1; i >= 0; i--) {
        while (!s.empty() && v[i] >= s.top()) {
            s.pop();
        }

        if (!s.empty()) {
            res[i] = s.top();
        } else {
            res[i] = 0;
        }

        s.push(v[i]);
    }

    return res;
}

int main() {
    vector<int> v = {1, 2, 6, 3, 44, 9, 2, 5, 4, -1};
    vector<int> res = findNextGreater(v);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}
