#include <iostream>
#include <iomanip>
using namespace std;
#include  "Average.h"
int main() {

    //Call average objection
    Average average;


    // 2 integers
    std::cout << "Enter 2 integers separated by a space on a single line: ";
    int int1, int2;
    std::cin >> int1 >> int2;
    std::cout << "Average of " << int1 << " and " << int2 << " is "
              << std::fixed << std::setprecision(2)
              << average.computeAverage(int1, int2) << std::endl;

    // 3 integers
    std::cout << "Enter 3 integers separated by a space on a single line: ";
    int int3;
    std::cin >> int1 >> int2 >> int3;
    std::cout << "Average of " << int1 << ", " << int2 << " and " << int3 << " is "
              << std::fixed << std::setprecision(2)
              << average.computeAverage(int1, int2, int3) << std::endl;

    // 2 floats
    std::cout << "Enter 2 floats separated by a space on a single line: ";
    float float1, float2;
    std::cin >> float1 >> float2;
    std::cout << "Average of " << float1 << " and " << float2 << " is "
              << std::fixed << std::setprecision(2)
              << average.computeAverage(float1, float2) << std::endl;

    // 3 floats
    std::cout << "Enter 3 floats separated by a space on a single line: ";
    float float3;
    std::cin >> float1 >> float2 >> float3;
    std::cout << "Average of " << float1 << ", " << float2 << " and " << float3 << " is "
              << std::fixed << std::setprecision(2)
              << average.computeAverage(float1, float2, float3) << std::endl;

    return 0;
}