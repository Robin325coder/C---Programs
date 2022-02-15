/* first template program */

#include <iostream>

using namespace std;

template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

template <typename T>
T myMin(T x, T y) {
    return (x < y) ? x : y;
}

template <typename T, typename U>
U returnNum(T x, T y) {
    return x + y;
}

int main() {
    cout << "Hello world\n";
    cout << myMax<int>(3, 7) << endl;
    cout << myMax<char>('g', 'e') << endl;

    cout << myMin<int>(20, 52) << endl;
    cout << myMin<char>('L', 'J') << endl;

    cout << returnNum<int, char>(2, 'a');
    return 0;
}
