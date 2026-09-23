#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;
    cout << "Введіть третє число: ";
    cin >> c;

    bool result = (a == -b) || (a == -c) || (b == -c);

    cout << boolalpha << result << endl;

    return 0;
}

