#include <bits/stdc++.h> 
//////////////////////////Heapify algorithm jar time complexity hbe o(logn) ja ei time e max heap make kori de
void heapify(vector<int>&arr,int n,int i)///mane je array tar modde heapify korbo seta arr[] ,array size n,i hocce index of array
{
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&arr[smallest]>arr[left])
    {
        smallest=left;
    }
    if(right<n&&arr[smallest]>arr[right])
    {
        smallest=right; 
    }
    if(smallest!=i)
    {
        swap(arr[smallest],arr[i]);
        heapify(arr,n,smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    int n=arr.size();
     for(int i=n/2-1;i>=0;i--)///building a heep ata o(n) complexity te reach kore jie
  {
      heapify(arr,n,i);
  }
  return arr;
}
