#include <iostream.h>
#include <conio.h>

#define MAX 5

class mst
{
    int a[MAX];
    int top1, top2, n;

public:
    mst()
    {
        top1 = -1;
        top2 = MAX;
    }

    void push1();
    void pop1();
    void push2();
    void pop2();
    void show1();
    void show2();
};

void mst::push1()
{
    if (top1 + 1 == top2)
    {
        cout << "\nStack Overflow\n";
    }
    else
    {
        cout << "Enter value for Stack 1: ";
        cin >> n;
        top1++;
        a[top1] = n;
        cout << "Element pushed to Stack 1 successfully.\n";
    }
}

void mst::push2()
{
    if (top2 - 1 == top1)
    {
        cout << "\nStack Overflow\n";
    }
    else
    {
        cout << "Enter value for Stack 2: ";
        cin >> n;
        top2--;
        a[top2] = n;
        cout << "Element pushed to Stack 2 successfully.\n";
    }
}

void mst::pop1()
{
    if (top1 == -1)
    {
        cout << "\nStack 1 Underflow\n";
    }
    else
    {
        n = a[top1];
        top1--;
        cout << "Deleted item from Stack 1 is " << n << "\n";
    }
}

void mst::pop2()
{
    if (top2 == MAX)
    {
        cout << "\nStack 2 Underflow\n";
    }
    else
    {
        n = a[top2];
        top2++;
        cout << "Deleted item from Stack 2 is " << n << "\n";
    }
}

void mst::show1()
{
    int i;
    if (top1 == -1)
    {
        cout << "\nStack 1 is empty\n";
    }
    else
    {
        cout << "Stack 1 elements (bottom to top): ";
        for (i = 0; i <= top1; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

void mst::show2()
{
    int i;
    if (top2 == MAX)
    {
        cout << "\nStack 2 is empty\n";
    }
    else
    {
        cout << "Stack 2 elements (bottom to top): ";
        for (i = MAX - 1; i >= top2; i--)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    mst s;
    char c;
    int choice;

    clrscr();

    do
    {
        cout << "\n--- TWO STACKS IN ONE ARRAY ---\n";
        cout << "1. Push to Stack 1\n";
        cout << "2. Push to Stack 2\n";
        cout << "3. Pop from Stack 1\n";
        cout << "4. Pop from Stack 2\n";
        cout << "5. Display Stack 1\n";
        cout << "6. Display Stack 2\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                s.push1();
                break;
            case 2:
                s.push2();
                break;
            case 3:
                s.pop1();
                break;
            case 4:
                s.pop2();
                break;
            case 5:
                s.show1();
                break;
            case 6:
                s.show2();
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
--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 1
Enter value for Stack 1: 10
Element pushed to Stack 1 successfully.
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 1
Enter value for Stack 1: 20
Element pushed to Stack 1 successfully.
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 2
Enter value for Stack 2: 90
Element pushed to Stack 2 successfully.
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 2
Enter value for Stack 2: 80
Element pushed to Stack 2 successfully.
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 1
Enter value for Stack 1: 30
Element pushed to Stack 1 successfully.
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 1

Stack Overflow
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 5
Stack 1 elements (bottom to top): 10 20 30 
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 6
Stack 2 elements (bottom to top): 90 80 
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 3
Deleted item from Stack 1 is 30
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 4
Deleted item from Stack 2 is 80
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 4
Deleted item from Stack 2 is 90
Do you want to continue (y/n)? y

--- TWO STACKS IN ONE ARRAY ---
1. Push to Stack 1
2. Push to Stack 2
3. Pop from Stack 1
4. Pop from Stack 2
5. Display Stack 1
6. Display Stack 2
Enter choice: 4

Stack 2 Underflow
Do you want to continue (y/n)? n
