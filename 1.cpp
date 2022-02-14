#include <iostream>
using namespace std;
void fun() {
    cout << "hello world!" <<endl;
}
//我是test2新增
//我是test1

class Solution {
public:
    void print();

    void print2();
};
//我是test1

void Solution::print() {
    cout << "hello i am Solution::print" <<endl;
}

//我是test2新增


int main() {

    Solution s;
    s.print();

    fun();

    return 0;
}