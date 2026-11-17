# TRACE REPORT

## 1. Student Details

- **Name:** Aayush Nilesh Kadam
- **PRN:** 202501100202
- **Subject:** Data Structures
- **Project:** Hash Table Implementation
- **Scenario:** Cold-drink flavours

## 2. Personalized Dataset

- **Last four digits of PRN:** 0202
- **Seed:** `S = 202`
- **Dataset formula:** `v[i] = (S + 13 × i) mod 100`, for `i = 0…19`
- **Personalized dataset:**

```text
2, 15, 28, 41, 54, 67, 80, 93, 6, 19,
32, 45, 58, 71, 84, 97, 10, 23, 36, 49
```

## 3. Hashing Technique

- **Method:** Division Method
- **Hash function:** `h(key) = key mod 23`
- **Table size:** `m = 23` (implementation choice)

## 4. Collision Handling

Linear Probing is used to resolve collisions. If the calculated index is occupied, the next position is checked.

Formula:

`hᵢ(key) = (h(key) + i) mod 23`

## 5. Manual Insertion Trace (Predicted)

The following positions are calculated by applying the hash function and Linear Probing to the dataset in its given insertion order.

| Key | Initial Index | Probes / occupied positions | Predicted Final Index |
|---:|---:|---|---:|
| 2 | 2 | None | 2 |
| 15 | 15 | None | 15 |
| 28 | 5 | None | 5 |
| 41 | 18 | None | 18 |
| 54 | 8 | None | 8 |
| 67 | 21 | None | 21 |
| 80 | 11 | None | 11 |
| 93 | 1 | None | 1 |
| 6 | 6 | None | 6 |
| 19 | 19 | None | 19 |
| 32 | 9 | None | 9 |
| 45 | 22 | None | 22 |
| 58 | 12 | None | 12 |
| 71 | 2 | Index 2 contains 2; next slot 3 is empty | 3 |
| 84 | 15 | Index 15 contains 15; next slot 16 is empty | 16 |
| 97 | 5 | Index 5 contains 28; index 6 contains 6; slot 7 is empty | 7 |
| 10 | 10 | None | 10 |
| 23 | 0 | None | 0 |
| 36 | 13 | None | 13 |
| 49 | 3 | Index 3 contains 71; next slot 4 is empty | 4 |

## 6. Final Hash Table (Predicted)

| Index | Predicted Value |
|---:|---:|
| 0 | 23 |
| 1 | 93 |
| 2 | 2 |
| 3 | 71 |
| 4 | 49 |
| 5 | 28 |
| 6 | 6 |
| 7 | 97 |
| 8 | 54 |
| 9 | 32 |
| 10 | 10 |
| 11 | 80 |
| 12 | 58 |
| 13 | 36 |
| 14 | EMPTY |
| 15 | 15 |
| 16 | 84 |
| 17 | EMPTY |
| 18 | 41 |
| 19 | 19 |
| 20 | EMPTY |
| 21 | 67 |
| 22 | 45 |

## 7. Trace-Match Report (Actual Program Output)

The C++ program was compiled and executed using the personalized dataset shown above. The captured console output is saved separately in `Output.txt`.

The actual insertion positions were compared with the predicted positions in Section 5. The actual final table was also compared with the predicted table in Section 6.

**Result:** All 20 keys were inserted successfully. Every actual insertion position and every final table entry matched the manual prediction.

**Mismatch found:** None.

The collision examples in the program output agree with the manual trace:
- `71` hashes to index 2, finds it occupied by `2`, and is inserted at index 3.
- `84` hashes to index 15, finds it occupied by `15`, and is inserted at index 16.
- `97` hashes to index 5, finds indices 5 and 6 occupied, and is inserted at index 7.
- `49` hashes to index 3, finds it occupied by `71`, and is inserted at index 4.

## 8. Conclusion

The personalized hash table uses the Division Method to calculate initial positions and Linear Probing to resolve collisions. The manual insertion trace and predicted final table were checked against the actual C++ program output. All 20 values were inserted, and no mismatch was found between the prediction and the program output.
