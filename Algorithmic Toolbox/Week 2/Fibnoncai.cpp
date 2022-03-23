#include<iostream>
using namespace std ;
int Fib(int n ) // it ia done by usin tree recursive and it is very slow
{
    if (n<=1)
    {
        return 1 ;
    }
    else 
    {
        return Fib(n-1)+Fib(n-2);
    }
}
int Fib2(int n) // it is done linear 
{
    long long  array[n+2];
    array[0] = 0 ;
    array[1] = 1;
    for (int i = 2 ; i<=n ;i++)
    {
        array[i] = array[i-1]+ array[i - 2] ;
    }
    return array[n];
}
int main()
{
    int n = 5 ;
     cout<<Fib2(n)<<endl;
     cout<<Fib(n)<<endl;
 return 0 ;

}