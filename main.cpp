#include <iostream>

using namespace std;

int main()
{

    int num1{13};
    int num2{0};

    cout << "The value of num1 is: " << num1 << endl;

    num1 = {5};

    cout << "The value of num1 is: " << num1 << endl;

    num2 = num1;

    cout << "The value of num2 is: " << num2 << endl;

    return 0;
}