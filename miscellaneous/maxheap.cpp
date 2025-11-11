
#include<iostream>
#include<climits>
using namespace std;

void swap(int *x, int *y);

class MinHeap
{
    int *harr;
    int capacity;
    int heap_size;
public:

    MinHeap(int cap)
    {
        heap_size = 0;
        capacity = cap;
        harr = new int[cap];
    }

    int parent(int i)
    {
        return (i-1)/2;
    }


    void insertKey(int k);

    void show()
    {
        for(int j=0;j<heap_size;j++)
            cout<<harr[j]<<" ";
    }
};


void MinHeap::insertKey(int k)
{
    if (heap_size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;

    while (i != 0 && harr[parent(i)] < harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    MinHeap ob(11);
    ob.insertKey(2);
    ob.insertKey(16);
    ob.insertKey(74);
    ob.insertKey(58);
    ob.insertKey(36);
    ob.insertKey(4);
    ob.insertKey(15);
    ob.insertKey(35);
    ob.insertKey(82);
    ob.insertKey(6);
    ob.show();
    return 0;
}

