#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    const int base = 16;
    long long int num;

    cout << "Input a positive integer: ";
    cin >> num;

    // allocating contiguous memory for storing remainders
    char *ptr;
    ptr = (char *)calloc(1, sizeof(char));

    int i = 0, rem;
    if (num == 0) {
        ptr[i] = (char)(num + 48);
    } else {
        while (num) {
            rem = num % base;

            if (i > 0) {
                ptr = (char *)realloc(ptr, (i + 1) * sizeof(char));
            }

            if (rem < 10) {
                ptr[i] = (char)(rem + 48);  // to store 0-9
            } else {
                ptr[i] = (char)(rem + 55);  // to store A-F
            }

            i++;
            num = num / base;
        }
    }

    for (int i = strlen(ptr) - 1; i >= 0; i--) {
        cout << ptr[i];
    }

    free(ptr);

    return 0;
}