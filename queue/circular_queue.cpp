#include <iostream>
using namespace std;



void enqueue(int queue[], int element, int& rear, int arraySize, int& count) {
    if(count == arraySize)            // Queue is full
            cout << "OverFlow\n";
    else{
        queue[rear] = element;
        rear = (rear + 1)%arraySize;
        count = count + 1;
    }
}

void dequeue(int queue[], int& front, int rear, int arraySize, int& count) {
    if(count == 0)            // Queue is empty
        cout << "UnderFlow\n";
    else {
        queue[front] = 0;        // Delete the front element
        front = (front + 1)%arraySize;
        count = count - 1;
    }
}

int Front(int queue[], int front) {
    return queue[front];
}

void print_q(int queue[], int count, int front, int arraySize){

    for(int i = 0; i < count; i++){
        cout << queue[front] << " ";

        if((front + 1) == arraySize)
          front =  (front + 1)%arraySize;
        else
          front++;
    }

}

 int main()
 {
   int count = 0;
   int queue [5];
   int front = 0, rear = 0;
   enqueue (queue, 10, rear, 5, count);
   enqueue (queue, 9, rear, 5, count);
   enqueue (queue, 5, rear, 5, count);
   enqueue (queue, 2, rear, 5, count);
   enqueue (queue, 0, rear, 5, count);
   dequeue (queue, front, rear, 5, count);
   dequeue (queue, front, rear, 5, count);
   dequeue (queue, front, rear, 5, count);
   enqueue (queue, 50, rear, 5, count);
   print_q (queue, count, front, 5);
 }


 /*
 Reference :
 https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/tutorial/
 */
