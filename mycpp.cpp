// mycpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace::std;

inline void takeInputs(std::vector<int> &v)
{
    int num;
    while (std::cin >> num)
    {
        v.push_back(num);
    }
}

int recFunc(std::vector<int> v, int pos)
{
    if (pos == v.size()) return 0;
    return v[pos] + recFunc(v, pos + 1);
}

int main()
{
    std::vector<int> numbers;
    std::cout << "Hello World!" << endl;
    takeInputs(numbers);

    int sum = 0;
    //for loop
    //for (int i = 0; i < numbers.size(); i++) {
    //    sum += numbers[i];
    //}

    //while loop
    //int cnt = 0;
    //while(cnt < numbers.size()) {
    //    sum += numbers[cnt];
    //    cnt++;
    //}

    //recursion
    //sum = recFunc(numbers, 0);

    std::cout << "sum is : " << sum << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu