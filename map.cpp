#include <iostream>
#include <map>
#include <memory>

using namespace std;

int main() {
    // Creating a map with unique_ptr as values
    map<int, unique_ptr<int>> myMap;

    // Inserting elements into the map
    myMap[1] = make_unique<int>(10);
    myMap[2] = make_unique<int>(20);
    myMap[3] = make_unique<int>(30);

    // Accessing elements in the map
    for (const auto& pair : myMap) {
        cout << "Key: " << pair.first << ", Value: " << *pair.second << endl;
    }

    // Modifying an element
    *myMap[2] = 25;
    cout << "After modification, Key: 2, Value: " << *myMap[2] << endl;

    return 0;
}