#include <iostream>
using namespace std;
void fun() {
    cout << "hello world!" <<endl;
}

class Solution {
public:
    void print();
};

void Solution::print() {
    cout << "hello i am Solution::print" <<endl;
}

