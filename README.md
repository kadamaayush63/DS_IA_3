# Data Structures – Internal Activity 3

## Project Title
**Personalized Hash Table Implementation Using Division Method and Linear Probing**

## Student Details
- **Name:** Aayush Nilesh Kadam
- **PRN:** 202501100202
- **Subject:** Data Structures
- **Programming Language:** C++

## Project Description
This project implements a hash table in C++ using the **Division Method** to calculate the initial index and **Linear Probing** to resolve collisions. The program inserts the 20 values generated from the student's PRN-based personalization key and displays the insertion process and final hash table.

## Personalization Details
- **PRN:** `202501100202`
- **Last four digits (seed S):** `0202 = 202`
- **Scenario:** Cold-drink flavours (`PRN mod 3 = 0`)
- **Dataset formula:** `v[i] = (S + 13 × i) mod 100`, for `i = 0…19`
- **Personalized dataset:**

```text
2, 15, 28, 41, 54, 67, 80, 93, 6, 19,
32, 45, 58, 71, 84, 97, 10, 23, 36, 49
```

## Hashing Details
- **Hashing technique:** Division Method
- **Hash function:** `h(key) = key % 23`
- **Table size:** `m = 23` (implementation assumption)
- **Collision handling:** Linear Probing (`PRN` is even)
- **Linear probing formula:** `hᵢ(key) = (h(key) + i) mod 23`

When the calculated position is already occupied, the program checks the next position. It continues until an empty position is found, wrapping to index `0` after index `22` if required.

## Project Files
| File | Description |
|---|---|
| `HashTable_202.cpp` | C++ source code for hash table implementation |
| `Output.txt` | Captured program execution output |
| `DEBUGGING_LOG_202.md` | Development and debugging log |
| `TRACE_REPORT_202.md` | Personalized insertion trace and final table comparison |
| `README.md` | Project overview and instructions |

## Algorithm
1. Initialize all 23 hash table positions as empty (`-1`).
2. Take the 20 values from the personalized dataset.
3. Calculate the initial index using `key % 23`.
4. Check whether the calculated position is empty.
5. If it is occupied, apply Linear Probing by checking the next position: `(index + 1) % 23`.
6. Insert the key into the first available position.
7. Repeat the process for all 20 values.
8. Display the insertion details and final hash table.

## Compilation and Execution
Open a terminal in the project folder and compile the source file:

```bash
g++ HashTable_202.cpp -o HashTable_202
```

Run on Windows:

```powershell
.\HashTable_202.exe
```

Run on Linux or macOS:

```bash
./HashTable_202
```

The program prints each key's initial index, any collision encountered, the final insertion position, and the final hash table.

## Trace and Output Verification
The manual insertion positions and predicted final table recorded in `TRACE_REPORT_202.md` were checked against the program output in `Output.txt`. The insertion positions and final table match for all 20 keys.

## Time Complexity
Let `m` be the table size and `n` be the number of inserted keys.
- **Average insertion:** `O(1)` when the table has a suitably low load factor and hashing distributes keys reasonably.
- **Worst-case insertion:** `O(m)` for a table scan when many positions are occupied.
- **Displaying the table:** `O(m)` because every table position is visited.

## Expected Learning Outcomes
1. Understand the Division Method of hashing.
2. Implement a hash table using a C++ class and array.
3. Identify collisions during insertion.
4. Resolve collisions using Linear Probing.
5. Compare a manually prepared trace with actual program output.

## Final Result
The C++ program successfully inserts all 20 personalized values into the 23-position hash table using the Division Method and Linear Probing. The recorded program output agrees with the predicted insertion trace and final table.
