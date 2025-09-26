#include <iostream>      // input-output এর জন্য
#include <algorithm>     // transform() function এর জন্য
using namespace std;

int main() {
    string s;            // একটি string variable declare করলাম
    cin >> s;            // user থেকে string input নিচ্ছি

    // নিচের লাইনটা পুরো string টাকে uppercase এ রূপান্তর করে
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    // রূপান্তরের পর সেটা print করছি
    cout << "Uppercase: " << s << endl;

    return 0;
}
