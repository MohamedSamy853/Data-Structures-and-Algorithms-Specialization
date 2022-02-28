#include<iostream>
#include<vector>
#include<cstdlib>
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
    int max_index1 = -1; // get index for first larger number 
    int max_index2 = -1 ; // get index for secound larger number 
    for (int i =0 ; i<n ; i++)
    {
        if ((max_index1 ==-1) || (numbers[i]>numbers[max_index1]))
        {
            max_index1 =  i ;
        }
    }
    for (int i = 0 ; i <n ; i++)
    {
        if ((max_index1!=i)&& ((max_index2 ==-1) || (numbers[i]>numbers[max_index2]))) /* condition of 
        numbers[max_index1]!=numbers[i] not will good when two numbers are equal so we will only compare 
        index .*/
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
    while (true)
    {
        n = rand() %5 +3 ;  // size not be larger than 7
        vector<int> numbers;
        for (int i = 0 ; i<n ; i++)
        {
            numbers.push_back(rand()%100);
        }
        ll result1 , result2;
        result1 = MaxpairWiseSimple(numbers);
        result2 = MaxPairWiseFast(numbers);
        cout<<"num of numbers "<<n <<endl ;
        for (int i =0  ; i<n ; i++)
        {
            cout<<numbers[i]<<' ';
        } 
        cout<<"\n";
        if (result1 == result2) cout<<"Ok"<<endl;
        else 
        {
            cout<<"Wrong Answer "<<result1 <<" "<<result2<<endl;
            break;
        }
    }
}