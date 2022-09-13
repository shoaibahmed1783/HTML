#include <iostream>
using namespace std;
int main()
{
    int a{1, 2, 3, 4, 5};
    int n=5;
    int item = 10;
    int item_index = 3;
    int j = n;
    while(j>item_index)
    {
        a[n+1] = a[n];
        j--;
    }
    arr[item_index] = item;
    n = n+1;
    for int(i=0;i<n+1;i++)
    {
        count<<a[i]<<" ";
    }
    return 0;
}