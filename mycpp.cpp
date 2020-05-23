// mycpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string>
using namespace::std;

//inline void takeInputs(std::vector<int> &v)
//{
//    int num;
//    while (std::cin >> num)
//    {
//        v.push_back(num);
//    }
//}

inline std::vector<std::string> combi(int list1[], char list2[]) {
    std::vector<std::string> v;

    for (int i = 0; i < sizeof(list1); i++) {
		v.push_back(to_string(list1[i]));
		v.push_back(string(1, list2[i]));
    }
    return v;
}

int main()
{
    std::vector<int> numbers;
    std::cout << "Hello World!" << endl;
    //takeInputs(numbers);

    int list1[] = { 11, 22, 3, 4 };
    char list2[] = { 'a', 'b', 'c', 'd' };

    std::vector<std::string> conc_list = combi(list1, list2);

    for (size_t i = 0; i < conc_list.size(); i++) {
        std::cout << conc_list[i] << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu