#include <iostream>
using namespace std;

#define TABLE_SIZE 23
#define DATA_SIZE 20

class HashTable {
private:
    int table[TABLE_SIZE];

public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = -1;
        }
    }

    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

    void insert(int key) {
        int index = hashFunction(key);
        int originalIndex = index;
        int probes = 0;

        cout << "\nInserting " << key << " (initial index = "
             << originalIndex << ")" << endl;

        while (table[index] != -1) {
            cout << "  Collision at index " << index
                 << " (occupied by " << table[index] << ")" << endl;

            index = (index + 1) % TABLE_SIZE;
            probes++;

            if (probes == TABLE_SIZE) {
                cout << "Hash table is full. Cannot insert " << key << "." << endl;
                return;
            }
        }

        table[index] = key;
        cout << "  Inserted " << key << " at index " << index << endl;
    }

    void display() {
        cout << "\nFINAL HASH TABLE" << endl;
        cout << "-------------------------" << endl;
        cout << "Index\tValue" << endl;

        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << "\t";

            if (table[i] == -1) {
                cout << "EMPTY";
            } else {
                cout << table[i];
            }

            cout << endl;
        }
    }
};

int main() {
    HashTable ht;

    int values[DATA_SIZE] = {
        2, 15, 28, 41, 54,
        67, 80, 93, 6, 19,
        32, 45, 58, 71, 84,
        97, 10, 23, 36, 49
    };

    cout << "DATA STRUCTURES - INTERNAL ACTIVITY 3" << endl;
    cout << "PRN: 202501100202" << endl;
    cout << "Scenario: Cold-drink flavours" << endl;
    cout << "Hashing Method: Division Method" << endl;
    cout << "Collision Handling: Linear Probing" << endl;
    cout << "Table Size: " << TABLE_SIZE << endl;

    cout << "\nINSERTION PROCESS" << endl;
    cout << "-------------------------" << endl;

    for (int i = 0; i < DATA_SIZE; i++) {
        ht.insert(values[i]);
    }

    ht.display();

    return 0;
}