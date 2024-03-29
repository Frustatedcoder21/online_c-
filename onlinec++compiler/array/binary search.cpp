//Binary Search
#include<iostream> 
using namespace std;



int main() {
int arr[5]={1,2,4,9,10},up,lp,mid,key=2;
lp=0;
up=4;
while(lp<=up)
{
    mid=(up+lp)/2;
    if(arr[mid]==key)
    { cout<<mid; }
    
        if(key<arr[mid])
        {
            up=mid-1;
        }
        else {lp=mid+1;}
    }
    
}