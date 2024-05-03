// 4.Write a program that will print Fibonacci series upto n value (using user defined function).
#include <stdio.h>
void display(int n)
{
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (int i = 3; i <= n; ++i)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    display(n);
    return 0;
}
