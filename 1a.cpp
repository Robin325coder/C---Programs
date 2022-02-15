#include<iostream>
#include<cmath>
using namespace std;
int main() {
    unsigned long long int n, m, a, n_stones, m_stones, num;
    cin>>n>>m>>a;
    n_stones = floor(n/a);
    num = n_stones * a;
    if(num < n) {
        while(n>=num) {
            n_stones++;
            num += a;
        }
    }
    m_stones = floor(m/a);
    num = m_stones * a;
    if(num < m) {
        while(m>=num) {
            m_stones++;
            num += a;
        }
    }
    cout<<(n_stones * m_stones);
    return 0;
}