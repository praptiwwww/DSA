#include <iostream>
using namespace std;

//printing of array
int main()

{
  
    int arr[6] = {2,4,5,9,8,7};

    //finding largest element
    int large=arr[0];
    for(int i=0;i<=6;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    cout<<large<<"";
    return large;




    return 0;
}