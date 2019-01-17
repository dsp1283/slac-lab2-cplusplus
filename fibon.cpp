#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, nextNum = 0;

    cout << "Generate Fibonacci Sequence that is less than 80" << endl;

    cout << "Fibonacci Series:";

    nextNum = n1 + n2;

    while(nextNum <= 80)
    {
        cout << nextNum << ", ";
        n1 = n2;
        n2 = nextNum;
        nextNum = n1 + n2;
    }
    cout << endl<< "FANCY!" << endl;
    return 0;
}
