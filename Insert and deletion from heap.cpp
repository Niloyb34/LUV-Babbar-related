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
    void deletefromHeap()
    /*in deletion there should one condition should also mention arr[leftIndex]<arr[rightIndex]    i.e, we have to also check that rightIndex arr element holds value smaller than leftIndex  arr value then we can swap*/
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }

        // put last node element at root node
        arr[1] = arr[size];

        // remove lase node
        size--;

        // put root node at corect position
        int i = 1;

        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex] && arr[leftIndex] > arr[rightIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }

            else if (rightIndex < size && arr[i] < arr[rightIndex] && arr[leftIndex] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }

            else
            {
                return;
            }
        }
    }
};
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletefromHeap();
    h.print();
    return 0;
}

