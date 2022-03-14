/******************************************************************************
csci3081 s22 hw3 part A
*******************************************************************************/

/******************************************************************************
Includes
*******************************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Define the default capacity of a queue
#define SIZE 1000

// A class to store a queue
class Queue
{
        int *arr;       // array to store queue elements
        int capacity;   // maximum capacity of the queue
        int front;      // front points to the front element in the queue (if any)
        int rear;       // rear points to the last element in the queue
        int count;      // current size of the queue

    public:
        Queue(int size = SIZE);     // constructor
        ~Queue();                   // destructor

        int dequeue();              // pop 0th element from the queue and return it
        void enqueue(int x);        // add a new element 'int x' to the end of the queue
        int peek();                 // look at 0th element from the queue (w.o removal) and return it
        int indexOf(int e);         // returns the index of the passed in val
        int size();                 // returns the current number of elements in the queue
        bool isEmpty();             // bool indicating whether the queue is empty
        bool isFull();              // bool indicating whether the queue is full
        int getCapacity();          // returns private member variable 'capacity'
        void clear();               // clears the contents of the queue, capacity stays the same, size changes
        void bubbleSort();          // bubble sort algo
        void mergeSort();           // merge sort algo

    private:
        void mergeSortHelper(int arr[], int l, int r);
        void mergeSortMerge(int arr[], int p, int q, int r);
};


int main()
{
    // create a queue of capacity 5
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "The front element is " << q.peek() << endl;

    cout << "need to dequeue " << q.indexOf(1) << " elements before 1 is at the front" << endl;
    cout << "need to dequeue " << q.indexOf(2) << " elements before 2 is at the front" << endl;
    cout << "need to dequeue " << q.indexOf(3) << " elements before 3 is at the front" << endl;
    cout << "need to dequeue " << q.indexOf(4) << " elements before 4 is at the front" << endl;

    q.dequeue();

    q.enqueue(4);

    cout << "The queue size is " << q.size() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    if (q.isEmpty()) {
        cout << "The queue is empty\n";
    }
    else if (q.isFull()) {
        cout << "The queue is full\n";
    }
    else {
        cout << "The queue is not empty\n";
    }

    q.enqueue(24);
    q.enqueue(42);
    q.enqueue(38);
    q.enqueue(15);
    cout << "need to dequeue " << q.indexOf(15) << " elements before 15 is at the front" << endl;
    cout << "need to dequeue " << q.indexOf(38) << " elements before 38 is at the front" << endl;
    cout << "Running bubble sort algorithm: \n";
    q.bubbleSort();
    cout << "\n";
    q.clear();

    q.enqueue(24);
    q.enqueue(42);
    q.enqueue(38);
    q.enqueue(15);
    cout << "Running merge sort algorithm: \n";
    q.mergeSort();
    cout << "\n";
    q.clear();

    return 0;
}

