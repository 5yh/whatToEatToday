#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // 打开文件
    ifstream file("../取模吃饭法.txt"); // 替换为你的文件名

    // 检查文件是否成功打开
    if (!file.is_open())
    {
        cout << "无法打开文件!" << endl;
        return 1;
    }

    // 存储所有行
    vector<string> lines;
    string line;

    // 读取每一行并存储
    while (getline(file, line))
    {
        lines.push_back(line);
    }

    // 关闭文件
    file.close();

    // 检查是否成功读取了内容
    if (lines.empty())
    {
        cout << "文件为空!" << endl;
        return 1;
    }
    srand(time(0));
    // 初始化随机数生成器

    // 生成随机索引
    int randomIndex = rand() % lines.size();

    // 输出随机选择的行
    cout << "随机选择的食堂: " << lines[randomIndex] << endl;

    return 0;
}