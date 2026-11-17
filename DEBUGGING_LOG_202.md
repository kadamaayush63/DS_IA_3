# DEBUGGING LOG

## Student Details
- **Name:** Aayush Nilesh Kadam
- **PRN:** 202501100202
- **Subject:** Data Structures
- **Project:** Personalized Hash Table Implementation
- **Language:** C++
- **Scenario:** Cold-drink flavours
- **Hashing Method:** Division Method
- **Collision Handling:** Linear Probing
- **Table Size:** 23 (implementation choice)

## Project and Debugging Entries

### Entry 1: Project Setup and Table Initialization
I started by creating the C++ hash-table structure. The table needs 23 slots, while the personalized input contains 20 values, so I kept these two sizes separate using `TABLE_SIZE` and `DATA_SIZE`. I initialized every table slot to `-1` to represent an empty position. This made it possible to check whether a position was available before inserting a key.

### Entry 2: Generating the Personalized Dataset
I used the last four digits of my PRN, `0202`, as the seed `S = 202`. Following the assignment formula `v[i] = (S + 13 × i) mod 100` for `i = 0…19`, I generated the 20 values: `2, 15, 28, 41, 54, 67, 80, 93, 6, 19, 32, 45, 58, 71, 84, 97, 10, 23, 36, 49`. I checked the values against the formula and confirmed that they are the dataset used by the program.

### Entry 3: Implementing the Division Method
Because my PRN is even, the assigned hash function is the Division Method. I implemented `hashFunction(int key)` to return `key % TABLE_SIZE`. During checking, I verified sample calculations such as `28 % 23 = 5` and `71 % 23 = 2`. These checks confirmed that the function returns the correct initial index.

### Entry 4: Implementing Basic Insertion
I added the insertion operation to place a key at its calculated index when that position was empty. I checked the early values in the dataset, including `2` at index `2` and `15` at index `15`. This confirmed that insertion worked when no collision occurred. I kept the number of input values (`DATA_SIZE = 20`) separate from the number of table slots (`TABLE_SIZE = 23`) to avoid confusing the dataset length with the table capacity.

### Entry 5: Handling Collisions with Linear Probing
Some values produced an initial index that was already occupied. I handled this by checking the next slot using `(index + 1) % TABLE_SIZE`, which also allows probing to wrap from the last slot back to index `0`. For example, `71` first hashes to index `2`, which contains `2`, so it is inserted at index `3`. Similarly, `97` hashes to index `5`; indices `5` and `6` are occupied, so it is inserted at index `7`. These checks confirmed that collisions are resolved using Linear Probing.

### Entry 6: Final Testing and Output Verification
I compiled and ran `HashTable_202.cpp` with the 20-value personalized dataset. The program displayed each key's initial index, collision messages when a slot was occupied, the final insertion position, and the complete table. I compared the resulting positions and final table with the manual trace in `TRACE_REPORT_202.md`. The output shows all 20 keys inserted successfully, and the positions match the trace. The captured console output is saved in `Output.txt`.

## Conclusion
This activity helped me implement a hash table using the Division Method and Linear Probing. I learned to derive a personalized dataset from my PRN, calculate hash indices, detect collisions, probe for an available slot, and verify the program output against a manual trace.

## Git Commit Evidence
The assignment requires at least six genuine incremental commits, with one debugging-log entry corresponding to each commit. The entries above describe the six implementation and testing milestones. Keep the Git history and this log consistent: commit each milestone as it is actually developed, do not backdate or fabricate commits, and update this section if the actual commit sequence differs.
