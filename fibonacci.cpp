//Fibonacci Series using Recursion

#include<bits/stdc++.h>
using namespace std;
 
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}
 
int main ()
{
    int n = 9;
    cout << fibo(n);
    getchar();
    return 0;
}
 
// This code is contributed by Nayana Pardhekar
