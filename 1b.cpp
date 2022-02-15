#include<iostream>
#include<cstring>
#define MAX 10000

using namespace std;

unsigned long power(unsigned long, unsigned long);

int main() {
    unsigned long n, exponent=0;
    cin>>n;

    char str[n][MAX], revstr[MAX];
    for(int i=0; i<n; i++) {
        fflush(stdin);
        fgets(str[i], MAX, stdin);
    }

    for(int i=0; i<n; i++) {
        if(str[i][0]=='R') {
            //rxcy to excel notation
            unsigned long j=0, k=0, index=0, number, alpha[MAX];
            char numstr[MAX], str2num[MAX];
            for(j=0; str[i][j]!='C'; j++) {
                if(str[i][j]>='0' && str[i][j]<='9') {
                    numstr[index++] = str[i][j];
                }
            }
            numstr[index]='\0';
            for(j; str[i][j]!='\0'; j++) {
                if(str[i][j]>='0' && str[i][j]<='9') {
                    str2num[k++] = str[i][j];
                }
            }
            number = atol(str2num);
            unsigned long rem=0;
            k=0;
            while(number) {
                rem = number % 26;
                number = number / 26;
                rem += 64;
                alpha[k++] = rem;
                rem=0;
            }
            for(int m=k-1; m>=0; m--) { //Doesn't work when for(k=k-1; k>=0; k--) is written
                cout<<(char)alpha[m];
            }
            printf("%s\n", numstr);
        }
        else {
            //excel to rxcy notation
            unsigned long k=0, col=0, alphanum=0;
            for(int j=strlen(str[i])-1; j>=0; j--) {
                if(str[i][j]>='A' && str[i][j]<='Z') {
                    col += (power(26, alphanum) * ((int)(str[i][j]) - 64));
                    alphanum++;
                }
                else 
                    revstr[k++] = str[i][j];
            }
            cout<<"R";
            for(k=strlen(revstr)-1; k>=1; k--) {
                cout<<revstr[k];
            }
            cout<<"C"<<col<<"\n";
        }
    }
    return 0;
}

unsigned long power(unsigned long n, unsigned long exp) {
    if(exp==0) {
        return 1;
    }
    else {
        int num=1;
        for(int i=1; i<=exp; i++) {
            num = num * n;
        }
        return num;
    }
}