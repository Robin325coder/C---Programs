#include<iostream>
using namespace std;
int main() {
    int number, alpha[100], k;
    char num2str[] = "705";
    number = atoi(num2str);
            unsigned long rem=0;
            k=0;
            while(number) {
                rem = number % 26;
                number = number / 26;
                rem += 64;
                alpha[k++] = rem;
                rem=0;
            }
            for(k=k-1; k>=0; k--) {
                cout<<(char)alpha[k];
            }
}