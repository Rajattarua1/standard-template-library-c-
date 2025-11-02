#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vecspace;

    vecspace.push_back(81);
    vecspace.push_back(92);
    vecspace.push_back(89);
    vecspace.pop_back(); // removes 89

    for (int val : vecspace) {
        cout << val << " ";
    }

    cout << "\nElement 1: " << vecspace.at(1) << endl; // valid
}
