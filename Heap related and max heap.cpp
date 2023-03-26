//Insertion hoice aikane
#include<bits/stdc++.h>
using namespace std;
class heap///making a class name heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int val)
    {
        size=size+1;///jehuto kono element ke insert korte hole last e add korte hoi tie size 1 barie dilam mane size=size+1 kore dilam
        int index=size;///and ei index e ami new element take insert korbo
        arr[index]=val;/*mane given array er oi tmo index a amra value take dukie dibo ba input kore dibo and end e add korar por amader ke oitake right  position e nia
        jete hbe aijnno Aijnno er parent bahir korte hbe aijnno while loop calabo jekane jtokkon na prjnto index er value ta 1 teke bro ttokon prjnto loop cholbe*/
        while(index>1)
        {
            int parent=index/2;//parent  er index bahir hoi i/2 kore
            if(arr[parent]<arr[index])///mane jdi nton dukano index er mantar  ceye tar nijer parent er man less hole  tkon oi index er position tik korte hbe
            {
                swap(arr[parent],arr[index]);///mane parent teke index nije bro hole tkon parent and index er maje swap kore dibo mane index ke upore dukie dibo
                index=parent;
            }
            else
            {
                return ;
            }
        }
    }
    void print()
    {
        for(int i=1; i<=size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
//////////////////////////Heapify algorithm jar time complexity hbe o(logn) ja ei time e max heap make kori de
void heapify(int arr[],int n,int i)///mane je array tar modde heapify korbo seta arr[] ,array size n,i hocce index of array mane 0 tmo index e -1 reke bakigula teke start korbo aikane amra max heap ta find out korci
{///min heap ber korte hole tkon github e ase ba coding ninjas  e ase
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n&&arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<n&&arr[largest]<arr[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    int arr[6]= {-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2; i>0; i--) ///building a heep ata o(n) complexity te reach kore jie aikane amra 1 based indexing korci mane
    {
        heapify(arr,n,i);
    }
    cout<<"Printing the array now "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}


