// sum the numbers from 50 to 100 (use while)

#include <climits>
#include <iostream>

using namespace std;
int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "the sum is: " << sum << std::endl;
    cout << sizeof(char) << endl;
    cout << "the max int:" << INT_MAX << endl;
    //测试提交与同步
    //再提交一次
    //再再次提交测试
    //第四次更改进行提交测试。
    //第五次:在linux 下测试提交要
    //最后做个测试 看看提交成功没有.要什么是半角
    cout << "半角字霜符";
    cout << "全角字符" << endl;
    if (true) {
        cout << "真值" << endl;
    }
    else {
        cout << "永远不可能出现的村仍值。" << endl;
    }
    return 0;
}

// output: the sum is: 3825
