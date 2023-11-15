#include<iostream>

using namespace std;

class ArrayList
{
    private:
        int *arr;
        int size; // Maximum Capacity
        int no_of_elem;
    public:
        ArrayList(int size)
        {
            this->size = size; // ArrayList::size = size;
            arr = new int[size];
            no_of_elem = 0;
        }

        ~ArrayList()
        {
            delete []arr;
        }

        void insert(int val)
        {
            if(no_of_elem == size)
                cout << "The list is full!" << endl;
            else
            {
                arr[no_of_elem] = val;
                no_of_elem++;
            }
        }

        void remove()
        {
            if(no_of_elem == 0)
            {
                cout << "List is empty!" << endl;
                return;
            }

            no_of_elem--;
        }
        void printList()
        {
            for(int i = 0; i < no_of_elem; i++)
                cout << arr[i] << "\t";
        }
};

int main()
{
    ArrayList list(5);
    list.insert(2);
    list.insert(7);
    list.insert(1);
    list.printList();
    list.remove();
    cout << endl;
    list.printList();
}