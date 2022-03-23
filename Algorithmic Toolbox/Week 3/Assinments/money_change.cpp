#include<iostream>

using namespace std ;

int mincoin(int price)
{
    int min = 0 ;
    while (price !=0)
    {
        if (price>=10)
        {
            price -=10;
            min++;
        }
        else if (price >=5)
        {
            price-=5;
            min++;
        }
        else if (price >=1)
        {
            price --;
            min++;
        }
    }
    return min ;
}


int main()
{
    int price ;
    cin>>price;
    int min = mincoin(price);
    cout<<min<<endl;
    return 0;
}