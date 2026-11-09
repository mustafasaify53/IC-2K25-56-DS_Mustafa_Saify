#include <iostream.h>
#include <conio.h>

#define MAX 3

class myqueue
{
    int a[MAX];
    int f, r, x;

public:
    myqueue()
    {
        f = -1;
        r = -1;
    }

    void insert();
    void delete1();
    void display();
};

void myqueue::insert()
{
    if (r == MAX - 1)
    {
        cout << "\nQueue overflow\n";
    }
    else
    {
        cout << "Enter element: ";
        cin >> x;

        if (r == -1)
        {
            f = r = 0;
        }
        else
        {
            r++;
        }

        a[r] = x;
    }
}

void myqueue::delete1()
{
    if (f == -1)
    {
        cout << "Queue underflow\n";
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
            f++;
        }

        cout << "Deleted item: " << x << endl;
    }
}

void myqueue::display()
{
    int i;
    if (f == -1)
    {
        cout << "Queue has no elements\n";
    }
    else
    {
        cout << "Queue elements:\n";
        for (i = f; i <= r; i++)
        {
            cout << a[i] << endl;
        }
    }
}

int main()
{
    myqueue q;
    char c;
    int choice;

    clrscr();

    do
    {
        cout << "\nChoose choice:";
        cout << "\n1. Insert  2. Delete  3. Display\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                q.insert();
                break;

            case 2:
                q.delete1();
                break;

            case 3:
                q.display();
                break;

            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> c;

    } while (c == 'Y' || c == 'y');

    getch();
    return 0;
}
output:
Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 1
Enter element: 10
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 1
Enter element: 20
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 1
Enter element: 30
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 1

Queue overflow
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 3
Queue elements:
10
20
30
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2
Deleted item: 10
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 3
Queue elements:
20
30
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2
Deleted item: 20
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2
Deleted item: 30
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2
Queue underflow
Do you want to continue (y/n)? n
