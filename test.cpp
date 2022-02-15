#include<iostream>

using namespace std;

int find_nth_term(int, int, int, int);

int find_nth_term(int n, int a, int b, int c) {
    int sum;
    if(n < 1) {
        return 0;
    }
    else {
        switch(n) {
            case 1: return a;
                    break;
            case 2: return b;
                    break;
            case 3: return c;
                    break;
        }
    }
    sum = find_nth_term(n-1,a,b,c) + find_nth_term(n-2,a,b,c) + find_nth_term(n-3,a,b,c);
    return sum;
}

int main() {
    int n, a, b, c;
  
    cin>>n>>a>>b>>c;
    int ans = find_nth_term(n, a, b, c);
 
    cout<<ans; 
    return 0;
}
