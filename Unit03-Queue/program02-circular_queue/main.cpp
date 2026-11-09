#include <iostream.h>
#include <conio.h>

#define MAX 3

class cirque
{
    int a[MAX];
    int f, r, x;

public:
    cirque()
    {
        f = -1;
        r = -1;
    }

    void insert();
    void delete1();
    void display();
};

void cirque::insert()
{
    if (f == ((r + 1) % MAX))
    {
        cout << "\nQueue overflow\n";
    }
    else
    {
        cout << "Enter element: ";
        cin >> x;

        if (f == -1)
        {
            f = r = 0;
            a[r] = x;
        }
        else
        {
            r = (r + 1) % MAX;
            a[r] = x;
        }
    }
}

void cirque::delete1()
{
    if (f == -1)
    {
        cout << "\nQueue is empty\n";
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

        cout << "Deleted item is: " << x << endl;
    }
}

void cirque::display()
{
    int i, j, k;

    if (f == -1)
    {
        cout << "Queue has no elements\n";
    }
    else
    {
        cout << "Queue elements: ";
        if (f <= r)
        {
            for (i = f; i <= r; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for (j = f; j < MAX; j++)
            {
                cout << a[j] << " ";
            }
            for (k = 0; k <= r; k++)
            {
                cout << a[k] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    cirque q;
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
Queue elements: 10 20 30 
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2
Deleted item is: 10
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 1
Enter element: 40
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 3
Queue elements: 20 30 40 
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2
Deleted item is: 20
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2
Deleted item is: 30
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2
Deleted item is: 40
Do you want to continue (y/n)? y

Choose choice:
1. Insert  2. Delete  3. Display
Enter choice: 2

Queue is empty
Do you want to continue (y/n)? n
