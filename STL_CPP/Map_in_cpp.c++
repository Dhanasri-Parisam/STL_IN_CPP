// Map(key:value) in C++
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Basic map: key-value pair
    map<int, int> dic;  // stores key-value pairs in sorted order by key

    // Advanced map declarations (for complex use cases)
    map<int, pair<int, int>> dic1;      // key -> (val1, val2)
    map<pair<int, int>, int> dic2;      // (key1, key2) -> value

    // Inserting key-value pairs
    dic[1] = 2;
    dic.emplace(3, 1);
    dic.insert({2, 4});

    // Display all key-value pairs
    cout << "Map contents: ";
    for (auto it : dic) {
        cout << it.first << ":" << it.second << " ";
    }
    cout << endl;

    // Using dic2 (pair as key)
    dic2[{2, 3}] = 10;

    // Accessing value by key
    cout << "Value of key 2: " << dic[2] << endl;

    // Find key
    auto it3 = dic.find(3);  // Found
    auto it5 = dic.find(5);  // Not found, points to dic.end()

    // Trying to insert existing key '3' again (won’t update in map)
    dic.emplace(3, 20);
    dic.insert({30, 40});  // New insertion

    // Check if key 3 exists
    auto it = dic.find(3);
    if (it != dic.end()) {
        cout << "Key found: " << it->first << ", Value: " << it->second << endl;
    } else {
        cout << "Key 3 not found in the map." << endl;
    }

    // lower_bound and upper_bound
    auto it_lb = dic.lower_bound(3);  // first key >= 3
    auto it_ub = dic.upper_bound(5);  // first key > 5

    if (it_lb != dic.end()) {
        cout << "Lower bound of 3: " << it_lb->first << endl;
    }
    if (it_ub != dic.end()) {
        cout << "Upper bound of 5: " << it_ub->first << endl;
    }

    // Other methods like erase(), begin(), end(), size(), swap() also work

    return 0;
}
