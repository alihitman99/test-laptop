#include <iostream>
using namespace std;

int Sum(int lo, int hi)
{
    int sum = 0;
    while (lo <= hi) sum += lo++;
    return sum;
}

int main()
{
    cout << "Sum of 50 to 100 inclusive is: " << Sum(50, 100) << endl;
    return 0;
}