
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    cout << "saurabh yadav CU ID- CU26960042" << endl;

    string str;

    cout << "Enter a string: ";
    cin >> str;

    sort(str.begin(), str.end());

    cout << "Sorted string: " << str;

    return 0;
}
