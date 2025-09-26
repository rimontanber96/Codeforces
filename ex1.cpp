#include <iostream>
using namespace std;

// ফাংশন: x এবং y এর মধ্যে কোনো মিল থাকা ডিজিট আছে কিনা তা চেক করে
bool has_common_digit(int x, int y) {
    int freq_x[10] = {0};
    while (x > 0) {
        freq_x[x % 10] = 1;
        x /= 10;
    }
    if (y == 0 && freq_x[0] == 1) return true; // y=0 এর জন্য handle
    while (y > 0) {
        if (freq_x[y % 10] == 1) return true;
        y /= 10;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int x;
        cin >> x;
        for(int y = 0; ; y++) {
            if (has_common_digit(x, y)) {
                cout << y << endl;
                break;
            }
        }
    }
    return 0;
}
