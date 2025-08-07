#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Way to print first and last
    vector<int> vet = {10, 20, 30, 40};
    
    // Printing first and last element
    cout << vet.front() << " " << vet.back() << endl;

    // 2. Loop iterating using iterator
    for (vector<int>::iterator it = vet.begin(); it != vet.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    // 3. Another way to loop using iterator
    vector<int>::iterator it;
    for (it = vet.begin(); it != vet.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    // Using auto (value-based iteration)
    for (auto it : vet) {
        cout << it << " ";  // No need to dereference
    }
    cout << endl;

    // Using auto with iterator
    for (auto it = vet.begin(); it != vet.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    // Reverse using rbegin()
    for (auto it = vet.rbegin(); it != vet.rend(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    // Printing the first element using front() and at()
    cout << vet.front() << " " << vet.at(0) << endl;
    cout << vet.back() << endl;

    // Erase first element and second element
    vet.erase(vet.begin());           // Erase first element
    vet.erase(vet.begin() + 1);       // Erase second element

    // Erase using jumps or range
    vector<int> vet2 = {40, 50, 60, 70};
    vet2.erase(vet2.begin() + 1, vet2.begin() + 3);  // Erase from index 1 to 2 (range)

    // Erase using loop
    vet = {10, 20, 30, 40};  // Reinitializing vet for demonstration
    vector<int>::iterator start = vet.erase(vet.begin() + 1);  // Erase second element
    vector<int>::iterator end = vet.erase(vet.end() - 1);      // Erase last element
    for (auto it = start; it != end; it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    // Insert elements
    vet.insert(vet.begin(), 300);           // Insert 300 at the beginning
    vet.insert(vet.begin() + 1, 2, 10);     // Insert 10 twice at index 1

    vector<int> copy(2, 10);
    vet.insert(vet.begin(), copy.begin(), copy.end());  // Insert elements of copy

    // Swap two vectors
    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};
    v1.swap(v2);  // Swap v1 and v2

    // Pop last element
    vet.pop_back();

    // Clear the vector
    vet.clear();

    // Check if the vector is empty
    cout << vet.empty() << endl;

    return 0;
}
