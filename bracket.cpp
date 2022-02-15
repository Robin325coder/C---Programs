/*
* Check for unbalanced parentheses in input string and removes them
*/

#include <cstring>
#include <iostream>
#include <string>

#define SIZE 1000

using namespace std;

void push(char, int);
void pop();
int isEmpty();

struct Bracket {
    char ch;
    int index;
} stack[SIZE];

int top = -1;  // index of the top of the stack

int main() {
    char str[1000];
    cin.getline(str, 1000);

    int flag = -1, nextIndex;
    for (int i = 0; str[i] != '\0';) {
        if (str[i] == '(' || str[i] == ')') {
            //cout << "i = " << i << "\n";
            push(str[i], i);

            for (int j = top; j >= 0; j--) {
                if (stack[j].ch == ')') {
                    if (stack[j - 1].ch == '(') {
                        pop();
                        pop();
                    }
                    if (j - 1 < 0) {
                        flag = 0;
                        //str[stack[j].index] = '$';
                        nextIndex = stack[j].index;
                        int len = 0;
                        for (int k = 0; k < strlen(str); k++) {
                            if (k != nextIndex) {
                                str[len++] = str[k];
                            }
                        }
                        str[len] = '\0';
                        pop();
                    }
                }
            }
        }

        if (flag == 0) {
            i = nextIndex;
        } else {
            i++;
        }
        flag = -1;
    }

    if (isEmpty() == 0) {
        for (int i = top; i >= 0; i--) {
            //str[stack[i].index] = '$';
            nextIndex = stack[i].index;
            int len = 0;
            for (int k = 0; k < strlen(str); k++) {
                if (k != nextIndex) {
                    str[len++] = str[k];
                }
            }
            str[len] = '\0';
            pop();
        }
    }

    cout << str;

    return 0;
}

void push(char symbol, int i) {
    top++;
    stack[top].ch = symbol;
    stack[top].index = i;
    //cout << "stackIndex = " << stack[top].index << "\n";
}

void pop() {
    top--;
}

int isEmpty() {
    if (top == -1) {
        return -1;
    } else {
        return 0;
    }
}