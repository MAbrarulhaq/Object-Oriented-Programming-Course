#include<iostream>

using namespace std;

class List
{
    private:
        string names[5];
        int no_of_elem = 0;
    public:
        void insert(string n)
        {
            if(no_of_elem < 5)
            {
                names[no_of_elem] = n;
                no_of_elem += 1;
            }
            else
                cout << "List is full!";
        }

        void remove()
        {
            if(no_of_elem != 0)
                no_of_elem -= 1;
            else
                cout << "List is empty!";
        }

        void printList()
        {
            for(int i = 0; i < no_of_elem; i = i + 1)
                cout << names[i] << endl;
        }
};

int main()
{
    List l1;
    l1.insert("Asad");
    l1.insert("Ali");
    l1.insert("Kamran");
    l1.printList();

    l1.remove();
    cout << "------- After removing one name from the list ---------" << endl;
    l1.printList();
}