#include<iostream>
#include<vector>
using namespace std ;
typedef long long ll ;
ll MaxpairWiseSimple(const vector<int>& numbers)
{
    int n = numbers.size();
    ll result = 0;
    for (int i =0 ; i<n ; i++)
    {
        for (int j = i+1 ; j<n ; j++)
        {
            ll product = (ll)(numbers[i])*numbers[j] ;
            if (product>result)
            {
                result = product ;
            }
        }
    }
    return result ;
}
ll MaxPairWiseFast(const vector<int> &numbers)
{
    int n = numbers.size();
    ll result = 0;
    int max_index1 = -1;
    int max_index2 = -2 ;
    for (int i =0 ; i<n ; i++)
    {
        if ((max_index1 ==-1) || (numbers[i]>numbers[max_index1]))
        {
            max_index1 =  i ;
        }
    }
    for (int i = 0 ; i <n ; i++)
    {
        if ((numbers[max_index1]!=numbers[i])&& ((max_index2 ==-1) || (numbers[i]>numbers[max_index2])))
        {
            max_index2 =i;
        }
    }
    result = (ll)(numbers[max_index1])*numbers[max_index2];
    return result ;
}
int main()
{
    int n ;
    cin>>n ;
    vector<int>numbers(n) ;
    for (int i =0 ; i<n ; i++)
    {
        cin>>numbers[i];
    }
    ll result ; 
    result = MaxpairWiseSimple(numbers);
    cout<<result<<endl;
    result = MaxPairWiseFast(numbers);
    cout<<result<<endl;
    return 0 ;
}