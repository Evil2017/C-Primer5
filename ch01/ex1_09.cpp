// sum the numbers from 50 to 100 (use while)

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
    //测试提交与同步
    //再提交一次
    //再再次提交测试
    //第四次更改进行提交测试。
    //第五次:在linux 下测试提交.

    return 0;
}

// output: the sum is: 3825
