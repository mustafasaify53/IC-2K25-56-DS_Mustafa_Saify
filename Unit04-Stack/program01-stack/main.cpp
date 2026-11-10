#include <iostream.h>
#include <conio.h>

#define MAX 5

class sta
{
    int a[MAX];
    int top;

public:
    sta()
    {
        top = -1;
    }

    void push();
    void pop();
    void display();
};

void sta::push()
{
    int n;
    if (top == MAX - 1)
    {
        cout << "\nStack overflow\n";
    }
    else
    {
        cout << "Enter element to push: ";
        cin >> n;
        top++;
        a[top] = n;
        cout << "Element pushed successfully.\n";
    }
}

void sta::pop()
{
    int d;
    if (top == -1)
    {
        cout << "\nStack underflow\n";
    }
    else
    {
        d = a[top];
        top--;
        cout << "Deleted item is " << d << "\n";
    }
}

void sta::display()
{
    int i;
    if (top == -1)
    {
        cout << "\nStack is empty\n";
    }
    else
    {
        cout << "Stack elements (top to bottom): ";
        for (i = top; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    sta s;
    char c;
    int choice;

    clrscr();

    do
    {
        cout << "\n--- STACK OPERATIONS ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
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
--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 1
Enter element to push: 10
Element pushed successfully.
Do you want to continue (y/n)? y

--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 1
Enter element to push: 20
Element pushed successfully.
Do you want to continue (y/n)? y

--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 1
Enter element to push: 30
Element pushed successfully.
Do you want to continue (y/n)? y

--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 3
Stack elements (top to bottom): 30 20 10 
Do you want to continue (y/n)? y

--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 2
Deleted item is 30
Do you want to continue (y/n)? y

--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 3
Stack elements (top to bottom): 20 10 
Do you want to continue (y/n)? y

--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 2
Deleted item is 20
Do you want to continue (y/n)? y

--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 2
Deleted item is 10
Do you want to continue (y/n)? y

--- STACK OPERATIONS ---
1. Push
2. Pop
3. Display
Enter choice: 2

Stack underflow
Do you want to continue (y/n)? n
