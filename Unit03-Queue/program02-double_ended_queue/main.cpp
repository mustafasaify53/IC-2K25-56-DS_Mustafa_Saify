#include <iostream.h>
#include <conio.h>

#define MAX 3

class doenq
{
    int a[MAX];
    int f, r, x;

public:
    doenq()
    {
        f = -1;
        r = -1;
    }

    void insertr();
    void deletef();
    void insertf();
    void deleter();
    void display();
};

void doenq::insertr()
{
    if (f == ((r + 1) % MAX))
    {
        cout << "\nQueue overflow\n";
    }
    else
    {
        cout << "Enter element to insert at rear: ";
        cin >> x;

        if (r == -1)
        {
            f = r = 0;
        }
        else
        {
            r = (r + 1) % MAX;
        }
        a[r] = x;
    }
}

void doenq::deletef()
{
    if (f == -1)
    {
        cout << "\nQueue underflow\n";
    }
    else
    {
        x = a[f];
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            f = (f + 1) % MAX;
        }
        cout << "Deleted from front: " << x << endl;
    }
}

void doenq::insertf()
{
    if (f == ((r + 1) % MAX))
    {
        cout << "\nQueue overflow\n";
    }
    else
    {
        cout << "Enter element to insert at front: ";
        cin >> x;

        if (f == -1)
        {
            f = r = 0;
        }
        else
        {
            f = (MAX + f - 1) % MAX;
        }
        a[f] = x;
    }
}

void doenq::deleter()
{
    if (f == -1)
    {
        cout << "\nQueue underflow\n";
    }
    else
    {
        x = a[r];
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            r = (MAX + r - 1) % MAX;
        }
        cout << "Deleted from rear: " << x << endl;
    }
}

void doenq::display()
{
    int i;
    if (f == -1)
    {
        cout << "\nQueue is empty\n";
    }
    else
    {
        cout << "Queue elements: ";
        for (i = f; i != r; i = (i + 1) % MAX)
        {
            cout << a[i] << " ";
        }
        cout << a[r] << "\n";
    }
}

int main()
{
    doenq dq;
    int choice;
    char c;

    clrscr();

    do
    {
        cout << "\n--- DEQUE OPERATIONS ---\n";
        cout << "1. Insert Rear\n";
        cout << "2. Delete Front\n";
        cout << "3. Insert Front\n";
        cout << "4. Delete Rear\n";
        cout << "5. Display\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                dq.insertr();
                break;
            case 2:
                dq.deletef();
                break;
            case 3:
                dq.insertf();
                break;
            case 4:
                dq.deleter();
                break;
            case 5:
                dq.display();
                break;
            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> c;

    } while (c == 'y' || c == 'Y');

    getch();
    return 0;
}
output:
--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 1
Enter element to insert at rear: 10
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 1
Enter element to insert at rear: 20
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 3
Enter element to insert at front: 30
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 1

Queue overflow
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 5
Queue elements: 30 10 20
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 4
Deleted from rear: 20
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 2
Deleted from front: 30
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 5
Queue elements: 10
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 2
Deleted from front: 10
Do you want to continue (y/n)? y

--- DEQUE OPERATIONS ---
1. Insert Rear
2. Delete Front
3. Insert Front
4. Delete Rear
5. Display
Enter choice: 2

Queue underflow
Do you want to continue (y/n)? n
