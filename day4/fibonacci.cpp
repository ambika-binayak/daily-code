#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position";
    cin >> n;

    if (n == 0)
     {
        cout << "The Fibonacci number at position " << n << " is 0" << endl;
    }
     else if (n == 1)
      {
        cout << "The Fibonacci number at position " << n << " is 1" << endl;
    }
    else
    {
            int a = 0, b = 1, c;
            for (int i = 2; i <= n; i++)
             {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "The Fibonacci number at position " << n << " is " << b << endl;
    }

    return 0;
}
