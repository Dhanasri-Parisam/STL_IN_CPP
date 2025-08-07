// ============================================================================
// SETS IN C++
// ============================================================================

#include <iostream>
#include <set>
#include <unordered_set>
#include <iterator>
using namespace std;

int main() {

    // =========================================================================
    // 1. Set
    // =========================================================================
    cout << "========== SET ==========" << endl;

    set<int> se;

    // Insert elements (duplicates ignored)
    se.insert(1);
    se.insert(2);
    se.insert(4);
    se.emplace(3);  // Inserts 3

    // Elements stored in ascending order: {1, 2, 3, 4}

    cout << "Set (ascending): ";
    for (auto it = se.begin(); it != se.end(); ++it) {
        cout << *it << " ";
    }

    cout << "\nSet (descending): ";
    for (auto it = se.rbegin(); it != se.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Find element
    auto it = se.find(3);
    if (it != se.end())
        cout << "Found 3 in set\n";

    auto notFound = se.find(6);
    if (notFound == se.end())
        cout << "6 not found in set\n";

    // Erase by value
    se.erase(4);  // Removes 4

    // Erase by iterator
    it = se.find(2);
    if (it != se.end())
        se.erase(it); // Removes 2

    // Erase range: from 1 to 3 (excluding 3)
    se.insert(1);
    se.insert(2);
    se.insert(3);
    auto it1 = se.find(1);
    auto it2 = se.find(3);
    se.erase(it1, it2); // Removes 1 and 2

    // Count
    int count = se.count(3); // 1 if present, 0 otherwise
    cout << "Count of 3: " << count << endl;

    // Lower bound: first element >= value
    se.insert(5);
    se.insert(10);
    auto lb = se.lower_bound(5);
    if (lb != se.end())
        cout << "Lower bound of 5: " << *lb << endl;

    // Upper bound: first element > value
    auto ub = se.upper_bound(5);
    if (ub != se.end())
        cout << "Upper bound of 5: " << *ub << endl;

    se.clear();
    cout << "Set cleared. Is empty? " << se.empty() << endl;

    cout << "\n\n";

    // =========================================================================
    // 2. Unordered Set
    // =========================================================================
    cout << "====== UNORDERED SET ======" << endl;

    unordered_set<int> us;
    us.insert(10);
    us.insert(5);
    us.insert(20);
    us.insert(10);  // Duplicate ignored

    cout << "Unordered Set: ";
    for (auto x : us)
        cout << x << " ";  // Random order
    cout << "\n\n";

    // =========================================================================
    // 3. Multiset
    // =========================================================================
    cout << "========= MULTISET =========" << endl;

    multiset<int> ms;
    ms.insert(10);
    ms.insert(5);
    ms.insert(20);
    ms.insert(10);  // Duplicate allowed

    cout << "Multiset: ";
    for (auto x : ms)
        cout << x << " ";  // Output: 5 10 10 20

    // Count duplicates
    cout << "\nCount of 10 in multiset: " << ms.count(10) << endl;

    // Erase a single instance of 10 (only one of the duplicates)
    auto mit = ms.find(10);
    if (mit != ms.end())
        ms.erase(mit);

    cout << "Multiset after erasing one 10: ";
    for (auto x : ms)
        cout << x << " ";  // Output: 5 10 20

    return 0;
}
