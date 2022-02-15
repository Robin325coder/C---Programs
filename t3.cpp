/* multi-type generics */

#include <iostream>

using namespace std;

template <typename T, typename U>
class Multi {
    private:
        T x;
        U y;
    
    public:
        Multi(T a, U b) {
            x = a;
            y = b;
        }

        void print() {
            cout << x << endl;
            cout << y << "\n\n";
        }
};

int main() {
    Multi<char, int> obj('a', 5);
    Multi<char, char> obj2('c', 'd');
    Multi<int, double> obj3(5, 6.09);

    obj.print();
    obj2.print();
    obj3.print();
    
    return 0;
}
