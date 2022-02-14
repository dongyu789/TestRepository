#include <iostream>
using namespace std;
void fun() {
    cout << "hello world!" <<endl;
}

class Solution {
public:
    void print();

    void print2();
};

void Solution::print() {
    cout << "hello i am Solution::print" <<endl;
}



int main() {

    Solution s;
    s.print();

    fun();

    return 0;
}