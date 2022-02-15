/*
* Reverse the words at even positions in the input string
*/

#include <iostream>

#define STRING_NOT_CHANGED -1
#define STRING_CHANGED 0

using namespace std;

int main() {
    char str[1000];
    cout << "Enter a string (max 1000 characters): ";
    cin.getline(str, 1000);

    int spaceCount = 0, nextIndex;
    int flag = STRING_NOT_CHANGED;
    for (int i = 0; str[i] != '\0';) {
        if (str[i] == ' ') {
            spaceCount++;
            if (spaceCount % 2 != 0) {
                int j = i + 1;
                while (str[j] != ' ' && str[j] != '\0') {
                    j++;
                }

                nextIndex = j;
                char temp;
                int indexAvg = ((i + 1) + (j - 1)) / 2;
                for (j = j - 1; (i + 1) <= indexAvg; i++, j--) {
                    temp = str[i + 1];
                    str[i + 1] = str[j];
                    str[j] = temp;
                }
                flag = STRING_CHANGED;
            }
        }

        if (flag == STRING_CHANGED) {
            i = nextIndex;
        } else {
            i++;
        }
        flag = STRING_NOT_CHANGED;
    }

    cout << str;

    return 0;
}