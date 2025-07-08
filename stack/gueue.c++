#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int front, rear, size, capacity;

public:
    Queue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    bool isFull()
    {
        return rear == capacity - 1;
    }

    bool isEmpty()
    {
        return front == -1 || front > rear;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is Full (Overflow)\n";
            return;
        }
        if (front == -1)
            front = 0;
        rear++;
        arr[rear] = value;
        size++;
        cout << value << " enqueued successfully.\n";
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty (Underflow)\n";
            return;
        }
        cout << arr[front] << " dequeued successfully.\n";
        front++;
        size--;
    }

    void peek()
    {

        if (isEmpty())
        {
            cout << "Queue is Empty\n";
        }
        else
        {
            cout << "Front element is: " << arr[front] << endl;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int getSize()
    {
        return size;
    }

    ~Queue()
    {

        delete[] arr;
    }
};

int main()
{
    int capacity;
    cout << "Enter queue capacity: ";
    cin >> capacity;

    Queue qu(capacity);
    int choice, value;

    do
    {
        cout << "\n----- Queue Menu ------\n";
        cout << "1. Enqueue (Add)\n";
        cout << "2. Dequeue (Remove)\n";
        cout << "3. Peek (Front Element)\n";
        cout << "4. Display Queue\n";
        cout << "5. Get Size\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            qu.enqueue(value);
            break;
        case 2:
            qu.dequeue();
            break;
        case 3:
            qu.peek();
            break;
        case 4:
            qu.display();
            break;
        case 5:
            cout << "Queue size is: " << qu.getSize() << endl;
            break;
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}