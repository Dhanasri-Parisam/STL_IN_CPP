// ============================================================================
// QUEUE AND PRIORITY_QUEUE IN C++
// ============================================================================

#include <iostream>
#include <queue>
using namespace std;

int main() {
    // =========================================================================
    // 1. Queue (FIFO - First In First Out)
    // =========================================================================
    cout << "========== QUEUE ==========" << endl;

    queue<int> q;

    // Inserting elements into the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(10);

    // Queue now looks like: front = 1, back = 10

    cout << "Queue Size: " << q.size() << endl;         // Output: 4
    cout << "Queue Front: " << q.front() << endl;       // Output: 1
    cout << "Queue Back + 1: " << q.back() + 1 << endl; // Output: 11

    // Remove front element
    q.pop(); // Removes 1

    cout << "Queue Empty? " << q.empty() << endl;       // Output: 0 (false)

    cout << endl;

    // =========================================================================
    // 2. Priority Queue (Max-Heap) - Default Behavior
    // =========================================================================
    cout << "====== PRIORITY QUEUE (MAX-HEAP) ======" << endl;

    priority_queue<int> pq; // By default, this is a Max-Heap

    pq.push(1);   // {1}
    pq.push(10);  // {10, 1}
    pq.push(5);   // {10, 1, 5}
    pq.emplace(8); // {10, 8, 5, 1}

    cout << "Max-Heap Top: " << pq.top() << endl; // Output: 10

    pq.pop(); // Removes 10

    cout << "After one pop, Max-Heap Top: " << pq.top() << endl; // Output: 8

    cout << "Remaining Max-Heap elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl << endl;

    // =========================================================================
    // 3. Priority Queue (Min-Heap) - Using greater<>
    // =========================================================================
    cout << "====== PRIORITY QUEUE (MIN-HEAP) ======" << endl;

    // Syntax: priority_queue<Type, Container, Comparator>
    priority_queue<int, vector<int>, greater<int>> minPQ;

    // Inserting elements
    minPQ.push(800);
    minPQ.push(20);
    minPQ.push(40);
    minPQ.push(30);

    cout << "Min-Heap Top: " << minPQ.top() << endl; // Output: 20

    cout << "Min-Heap in sorted order: ";
    while (!minPQ.empty()) {
        cout << minPQ.top() << " "; // From smallest to largest
        minPQ.pop();
    }
    cout << endl;

    return 0;
}
