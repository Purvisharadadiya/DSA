#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    LinkedList()
    {
        head = NULL;
        count = 0;
    }

    void createElement(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            newNode->data = data;
            newNode->next = head;
            head = newNode;
        }
        count++;
    }

    void view()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }
        Node *temp = head;
        cout << "Linked List: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteNode(int position)
    {
        if (position < 0 || position >= count || head == NULL)
        {
            cout << "Invalid position.\n";
            
        }

        Node *temp;
        if (position == 0)
        {
            temp = head;
            head = head->next;
        }
        else
        {
            Node *prev = head;
            for (int i = 0; i < position - 1; i++)
            {
                prev = prev->next;
            }
            temp = prev->next;
            prev->next = temp->next;
        }
        delete temp;
        count--;
        cout << "Node deleted successfully.\n";
    }

    void search(int value)
    {
        Node *temp = head;
        int pos = 0;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout << "Value found at position " << pos << ".\n";
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Value not found in the list.\n";
    }

    void reverse()
    {
        Node *prev = NULL,
             *curr = head,
             *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        cout << "Linked list reversed successfully.\n";
    }
};

int main()
{
    LinkedList list;
    int choice, data, position;

    while (true)
    {
        cout << "\n=== MENU ===\n";
        cout << "1. Insert at( Beginning)\n";
        cout << "2. View List\n";
        cout << "3. Search Value\n";
        cout << "4. Delete \n";
        cout << "5. Reverse \n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter data: ";
            cin >> data;
            list.createElement(data);
            break;
        case 2:
            list.view();
            break;

        case 3:
            cout << "Enter position to delete : ";
            cin >> position;
            list.deleteNode(position);
            break;
        case 4:
            cout << "Enter value to search: ";
            cin >> data;
            list.search(data);
            break;

        case 5:
            list.reverse();
            break;
        case 0:
            cout << "Thank you!\n";
            return 0;
        default:
            cout << "Invalid choice.\n";
        }
    }
}
