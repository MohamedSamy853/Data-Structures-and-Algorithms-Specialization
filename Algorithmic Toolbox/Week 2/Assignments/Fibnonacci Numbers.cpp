#include<iostream>
using namespace std ;
int fib(int num)
{
    long long array[num];
    array[0] = 1 ;
    array[1] = 1;
    for (size_t i=2 ; i<num ; i++)
    {
        array[i] = array[i-1] + array[i-2] ;
    }
    return array[num-1];
}

int main()
{
    cout<<fib(10)<<endl;
    return 0 ;
}