This project uses Scrapy framework and MongoDB to crawl questions and submissions from LeetCode, and generate a markdown file.

## Done:
- login
- crawl question set
- crawl submissions
- store questions and submissions in MongoDB
- generate markdown file

## Thanks to
- <a href="https://github.com/Excited-ccccly">Lingyun Chen</a>
- <a href="https://github.com/Ma63d">Chuck Liu</a>
- <a href="https://github.com/nusr/leetcode-spider">nusr/leetcode-spider</a>
- <a href="https://github.com/MorvanZhou/easy-scraping-tutorial">MorvanZhou/easy-scraping-tutorial</a>


---

该项目使用Scrapy框架从LeetCode上爬取所有题目信息和自己的提交，保存在MongoDB中，并生成一个markdown文件。

## 功能:
- 登录
- 爬取所有题目信息
- 爬取自己的提交
- 存储在MongoDB中
- 生成markdown文件

---

## Demo
| # | title | submissions | topics | difficulty | accepted rate | likes | dislikes |
| :------: | :------: | :------: | :------: | :------: | :------: | :------: | :------: |
| 1 | Two Sum | [C++](../submissions/cpp/1.cpp) | Array, Hash Table | Easy | 39.9% | 9503 | 295
| 2 | Add Two Numbers | [C++](../submissions/cpp/2.cpp) | Linked List, Math | Medium | 30.2% | 4331 | 1049
| 3 | Longest Substring Without Repeating Characters |  | Hash Table, Two Pointers, String | Medium | 25.9% | 4567 | 228
| 4 | Median of Two Sorted Arrays |  | Array, Binary Search, Divide and Conquer | Hard | 25.1% | 3494 | 445
| 5 | Longest Palindromic Substring | [C++](../submissions/cpp/5.cpp) | String, Dynamic Programming | Medium | 26.1% | 2822 | 273
| 6 | ZigZag Conversion |  | String | Medium | 30.1% | 851 | 2640
| 7 | Reverse Integer |  | Math | Easy | 25.0% | 1847 | 2641
| 8 | String to Integer (atoi) |  | Math, String | Medium | 14.4% | 747 | 4838
| 9 | Palindrome Number |  | Math | Easy | 41.0% | 1158 | 1172
| 10 | Regular Expression Matching |  | String, Dynamic Programming, Backtracking | Hard | 24.8% | 2073 | 423
| 11 | Container With Most Water | [Python3](../submissions/python3/11.py), [C++](../submissions/cpp/11.cpp) | Array, Two Pointers | Medium | 41.5% | 2506 | 394
| 12 | Integer to Roman |  | Math, String | Medium | 49.2% | 442 | 1534
| 13 | Roman to Integer |  | Math, String | Easy | 51.0% | 1026 | 2333
| 14 | Longest Common Prefix |  | String | Easy | 32.7% | 1072 | 1125
| 15 | 3Sum | [Python3](../submissions/python3/15.py), [C++](../submissions/cpp/15.cpp) | Array, Two Pointers | Medium | 22.8% | 2957 | 335
| 16 | 3Sum Closest | [Python3](../submissions/python3/16.py), [C++](../submissions/cpp/16.cpp) | Array, Two Pointers | Medium | 33.6% | 838 | 62
| 17 | Letter Combinations of a Phone Number | [C++](../submissions/cpp/17.cpp) | String, Backtracking | Medium | 39.7% | 1737 | 245
| 18 | 4Sum |  | Array, Hash Table, Two Pointers | Medium | 29.2% | 842 | 160
| 19 | Remove Nth Node From End of List | [C++](../submissions/cpp/19.cpp) | Linked List, Two Pointers | Medium | 33.8% | 1423 | 110
| 20 | Valid Parentheses | [C++](../submissions/cpp/20.cpp) | String, Stack | Easy | 35.5% | 2408 | 119
| 21 | Merge Two Sorted Lists | [C++](../submissions/cpp/21.cpp) | Linked List | Easy | 45.0% | 1791 | 247
| 22 | Generate Parentheses | [C++](../submissions/cpp/22.cpp) | String, Backtracking | Medium | 52.2% | 2183 | 139
| 23 | Merge k Sorted Lists |  | Linked List, Divide and Conquer, Heap | Hard | 32.1% | 1886 | 121
| 24 | Swap Nodes in Pairs | [C++](../submissions/cpp/24.cpp) | Linked List | Medium | 42.4% | 842 | 76
| 25 | Reverse Nodes in k-Group | [C++](../submissions/cpp/25.cpp) | Linked List | Hard | 34.8% | 879 | 194
| 26 | Remove Duplicates from Sorted Array | [C++](../submissions/cpp/26.cpp), [Python3](../submissions/python3/26.py) | Array, Two Pointers | Easy | 39.1% | 1281 | 2676
| 27 | Remove Element | [C++](../submissions/cpp/27.cpp) | Array, Two Pointers | Easy | 43.1% | 677 | 1472
| 28 | Implement strStr() |  | Two Pointers, String | Easy | 30.9% | 727 | 1121
| 29 | Divide Two Integers |  | Math, Binary Search | Medium | 15.9% | 527 | 2521
| 30 | Substring with Concatenation of All Words |  | Hash Table, Two Pointers, String | Hard | 22.8% | 426 | 774
| 31 | Next Permutation |  | Array | Medium | 29.8% | 1340 | 394
| 32 | Longest Valid Parentheses |  | String, Dynamic Programming | Hard | 24.6% | 1452 | 69
| 33 | Search in Rotated Sorted Array |  | Array, Binary Search | Medium | 32.5% | 1844 | 270
| 34 | Find First and Last Position of Element in Sorted Array |  | Array, Binary Search | Medium | 32.7% | 1222 | 64
| 35 | Search Insert Position | [C++](../submissions/cpp/35.cpp) | Array, Binary Search | Easy | 40.3% | 1072 | 154
| 36 | Valid Sudoku |  | Hash Table | Medium | 41.1% | 677 | 229
| 37 | Sudoku Solver |  | Hash Table, Backtracking | Hard | 35.0% | 663 | 43
| 38 | Count and Say |  | String | Easy | 39.0% | 627 | 4436
| 39 | Combination Sum | [C++](../submissions/cpp/39.cpp) | Array, Backtracking | Medium | 45.7% | 1551 | 43
| 40 | Combination Sum II | [C++](../submissions/cpp/40.cpp) | Array, Backtracking | Medium | 39.4% | 647 | 36
| 41 | First Missing Positive |  | Array | Hard | 27.8% | 1265 | 483
| 42 | Trapping Rain Water |  | Array, Two Pointers, Stack | Hard | 41.1% | 2720 | 49
| 43 | Multiply Strings |  | Math, String | Medium | 29.6% | 803 | 342
| 44 | Wildcard Matching |  | String, Dynamic Programming, Backtracking, Greedy | Hard | 22.2% | 836 | 59
| 45 | Jump Game II |  | Array, Greedy | Hard | 26.9% | 874 | 41
| 46 | Permutations | [C++](../submissions/cpp/46.cpp) | Backtracking | Medium | 52.4% | 1544 | 40
| 47 | Permutations II | [C++](../submissions/cpp/47.cpp) | Backtracking | Medium | 38.5% | 772 | 39
| 48 | Rotate Image |  | Array | Medium | 45.9% | 1197 | 111
| 49 | Group Anagrams |  | Hash Table, String | Medium | 43.7% | 1261 | 88
| 50 | Pow(x, n) |  | Math, Binary Search | Medium | 27.3% | 692 | 1737
| 51 | N-Queens |  | Backtracking | Hard | 36.9% | 700 | 31
| 52 | N-Queens II |  | Backtracking | Hard | 50.1% | 199 | 96
| 53 | Maximum Subarray | [C++](../submissions/cpp/53.cpp) | Array, Divide and Conquer, Dynamic Programming | Easy | 42.3% | 3397 | 120
| 54 | Spiral Matrix |  | Array | Medium | 29.2% | 831 | 335
| 55 | Jump Game | [C++](../submissions/cpp/55.cpp), [Python3](../submissions/python3/55.py) | Array, Greedy | Medium | 30.9% | 1474 | 165
| 56 | Merge Intervals | [C++](../submissions/cpp/56.cpp), [Python3](../submissions/python3/56.py) | Array, Sort | Medium | 34.3% | 1590 | 121
| 57 | Insert Interval |  | Array, Sort | Hard | 30.4% | 649 | 83
| 58 | Length of Last Word |  | String | Easy | 32.1% | 305 | 1229
| 59 | Spiral Matrix II | [Python3](../submissions/python3/59.py), [C++](../submissions/cpp/59.cpp) | Array | Medium | 44.7% | 361 | 68
| 60 | Permutation Sequence | [C++](../submissions/cpp/60.cpp) | Math, Backtracking | Medium | 31.7% | 655 | 179
| 61 | Rotate List | [C++](../submissions/cpp/61.cpp) | Linked List, Two Pointers | Medium | 26.2% | 475 | 754
| 62 | Unique Paths | [C++](../submissions/cpp/62.cpp) | Array, Dynamic Programming | Medium | 45.7% | 1188 | 85
| 63 | Unique Paths II | [C++](../submissions/cpp/63.cpp) | Array, Dynamic Programming | Medium | 33.1% | 671 | 66
| 64 | Minimum Path Sum | [C++](../submissions/cpp/64.cpp) | Array, Dynamic Programming | Medium | 44.8% | 1051 | 27
| 65 | Valid Number |  | Math, String | Hard | 13.6% | 333 | 2564
| 66 | Plus One | [C++](../submissions/cpp/66.cpp), [Python3](../submissions/python3/66.py) | Array, Math | Easy | 40.5% | 708 | 1293
| 67 | Add Binary |  | Math, String | Easy | 37.3% | 773 | 157
| 68 | Text Justification |  | String | Hard | 22.0% | 288 | 808
| 69 | Sqrt(x) | [C++](../submissions/cpp/69.cpp) | Math, Binary Search | Easy | 30.3% | 612 | 1138
| 70 | Climbing Stairs | [C++](../submissions/cpp/70.cpp) | Dynamic Programming | Easy | 42.9% | 1667 | 65
| 71 | Simplify Path |  | String, Stack | Medium | 27.8% | 332 | 1000
| 72 | Edit Distance |  | String, Dynamic Programming | Hard | 35.8% | 1661 | 22
| 73 | Set Matrix Zeroes |  | Array | Medium | 38.5% | 814 | 160
| 74 | Search a 2D Matrix |  | Array, Binary Search | Medium | 34.6% | 640 | 79
| 75 | Sort Colors |  | Array, Two Pointers, Sort | Medium | 40.9% | 1278 | 128
| 76 | Minimum Window Substring |  | Hash Table, Two Pointers, String | Hard | 29.4% | 1783 | 121
| 77 | Combinations | [C++](../submissions/cpp/77.cpp) | Backtracking | Medium | 45.2% | 604 | 36
| 78 | Subsets | [C++](../submissions/cpp/78.cpp) | Array, Backtracking, Bit Manipulation | Medium | 50.0% | 1507 | 38
| 79 | Word Search | [C++](../submissions/cpp/79.cpp) | Array, Backtracking | Medium | 29.9% | 1347 | 63
| 80 | Remove Duplicates from Sorted Array II |  | Array, Two Pointers | Medium | 39.1% | 524 | 463
| 81 | Search in Rotated Sorted Array II |  | Array, Binary Search | Medium | 32.5% | 508 | 247
| 82 | Remove Duplicates from Sorted List II | [C++](../submissions/cpp/82.cpp) | Linked List | Medium | 31.8% | 648 | 63
| 83 | Remove Duplicates from Sorted List | [C++](../submissions/cpp/83.cpp) | Linked List | Easy | 41.6% | 628 | 67
| 84 | Largest Rectangle in Histogram |  | Array, Stack | Hard | 29.8% | 1531 | 41
| 85 | Maximal Rectangle |  | Array, Hash Table, Dynamic Programming, Stack | Hard | 31.9% | 1096 | 41
| 86 | Partition List | [C++](../submissions/cpp/86.cpp) | Linked List, Two Pointers | Medium | 35.8% | 528 | 139
| 87 | Scramble String |  | String, Dynamic Programming | Hard | 30.9% | 228 | 379
| 88 | Merge Sorted Array | [C++](../submissions/cpp/88.cpp) | Array, Two Pointers | Easy | 34.4% | 885 | 2364
| 89 | Gray Code | [C++](../submissions/cpp/89.cpp) | Backtracking | Medium | 44.5% | 291 | 973
| 90 | Subsets II | [C++](../submissions/cpp/90.cpp) | Array, Backtracking | Medium | 40.9% | 715 | 39
| 91 | Decode Ways |  | String, Dynamic Programming | Medium | 21.6% | 1084 | 1291
| 92 | Reverse Linked List II | [C++](../submissions/cpp/92.cpp) | Linked List | Medium | 33.6% | 906 | 71
| 93 | Restore IP Addresses | [C++](../submissions/cpp/93.cpp) | String, Backtracking | Medium | 30.3% | 522 | 207
| 94 | Binary Tree Inorder Traversal | [C++](../submissions/cpp/94.cpp) | Hash Table, Stack, Tree | Medium | 54.2% | 1266 | 55
| 95 | Unique Binary Search Trees II |  | Dynamic Programming, Tree | Medium | 34.4% | 948 | 89
| 96 | Unique Binary Search Trees | [C++](../submissions/cpp/96.cpp) | Dynamic Programming, Tree | Medium | 44.5% | 1375 | 58
| 97 | Interleaving String |  | String, Dynamic Programming | Hard | 26.9% | 600 | 29
| 98 | Validate Binary Search Tree |  | Tree, Depth-first Search | Medium | 25.0% | 1530 | 236
| 99 | Recover Binary Search Tree |  | Tree, Depth-first Search | Hard | 33.5% | 625 | 40
| 100 | Same Tree | [C++](../submissions/cpp/100.cpp) | Tree, Depth-first Search | Easy | 49.1% | 944 | 30
| 101 | Symmetric Tree | [C++](../submissions/cpp/101.cpp) | Tree, Depth-first Search, Breadth-first Search | Easy | 42.3% | 1776 | 37
| 102 | Binary Tree Level Order Traversal | [C++](../submissions/cpp/102.cpp) | Tree, Breadth-first Search | Medium | 46.3% | 1118 | 29
| 103 | Binary Tree Zigzag Level Order Traversal |  | Stack, Tree, Breadth-first Search | Medium | 39.8% | 746 | 49
| 104 | Maximum Depth of Binary Tree | [C++](../submissions/cpp/104.cpp) | Tree, Depth-first Search | Easy | 58.5% | 1056 | 43
| 105 | Construct Binary Tree from Preorder and Inorder Traversal |  | Array, Tree, Depth-first Search | Medium | 38.6% | 1343 | 37
| 106 | Construct Binary Tree from Inorder and Postorder Traversal |  | Array, Tree, Depth-first Search | Medium | 37.3% | 677 | 15
| 107 | Binary Tree Level Order Traversal II | [C++](../submissions/cpp/107.cpp) | Tree, Breadth-first Search | Easy | 45.1% | 592 | 99
| 108 | Convert Sorted Array to Binary Search Tree | [C++](../submissions/cpp/108.cpp) | Tree, Depth-first Search | Easy | 48.5% | 893 | 95
| 109 | Convert Sorted List to Binary Search Tree | [C++](../submissions/cpp/109.cpp) | Linked List, Depth-first Search | Medium | 38.9% | 775 | 57
| 110 | Balanced Binary Tree | [C++](../submissions/cpp/110.cpp) | Tree, Depth-first Search | Easy | 40.1% | 950 | 86
| 111 | Minimum Depth of Binary Tree | [C++](../submissions/cpp/111.cpp) | Tree, Depth-first Search, Breadth-first Search | Easy | 34.6% | 593 | 296
| 112 | Path Sum | [C++](../submissions/cpp/112.cpp) | Tree, Depth-first Search | Easy | 36.7% | 731 | 236
| 113 | Path Sum II | [C++](../submissions/cpp/113.cpp) | Tree, Depth-first Search | Medium | 38.9% | 689 | 26
| 114 | Flatten Binary Tree to Linked List |  | Tree, Depth-first Search | Medium | 40.4% | 1153 | 143
| 115 | Distinct Subsequences |  | String, Dynamic Programming | Hard | 34.2% | 567 | 28
| 116 | Populating Next Right Pointers in Each Node |  | Tree, Depth-first Search | Medium | 36.5% | 795 | 56
| 117 | Populating Next Right Pointers in Each Node II |  | Tree, Depth-first Search | Medium | 33.3% | 690 | 89
| 118 | Pascal's Triangle | [C++](../submissions/cpp/118.cpp) | Array | Easy | 43.8% | 560 | 67
| 119 | Pascal's Triangle II | [C++](../submissions/cpp/119.cpp) | Array | Easy | 41.3% | 392 | 147
| 120 | Triangle | [C++](../submissions/cpp/120.cpp) | Array, Dynamic Programming | Medium | 37.8% | 891 | 95
| 121 | Best Time to Buy and Sell Stock | [C++](../submissions/cpp/121.cpp) | Array, Dynamic Programming | Easy | 45.6% | 2042 | 102
| 122 | Best Time to Buy and Sell Stock II | [Python3](../submissions/python3/122.py), [C++](../submissions/cpp/122.cpp) | Array, Greedy | Easy | 50.4% | 760 | 1142
| 123 | Best Time to Buy and Sell Stock III |  | Array, Dynamic Programming | Hard | 32.5% | 827 | 49
| 124 | Binary Tree Maximum Path Sum |  | Tree, Depth-first Search | Hard | 28.9% | 1186 | 88
| 125 | Valid Palindrome |  | Two Pointers, String | Easy | 29.7% | 491 | 1342
| 126 | Word Ladder II |  | Array, String, Backtracking, Breadth-first Search | Hard | 16.6% | 738 | 146
| 127 | Word Ladder |  | Breadth-first Search | Medium | 22.3% | 1062 | 719
| 128 | Longest Consecutive Sequence |  | Array, Union Find | Hard | 40.5% | 1492 | 68
| 129 | Sum Root to Leaf Numbers |  | Tree, Depth-first Search | Medium | 40.8% | 516 | 23
| 130 | Surrounded Regions |  | Depth-first Search, Breadth-first Search, Union Find | Medium | 21.7% | 598 | 373
| 131 | Palindrome Partitioning | [C++](../submissions/cpp/131.cpp) | Backtracking | Medium | 39.0% | 714 | 25
| 132 | Palindrome Partitioning II |  | Dynamic Programming | Hard | 26.4% | 461 | 21
| 133 | Clone Graph |  | Depth-first Search, Breadth-first Search, Graph | Medium | 25.1% | 610 | 667
| 134 | Gas Station |  | Greedy | Medium | 32.4% | 577 | 260
| 135 | Candy |  | Greedy | Hard | 27.3% | 379 | 101
| 136 | Single Number | [Python3](../submissions/python3/136.py), [C++](../submissions/cpp/136.cpp), [Python](../submissions/python/136.py) | Hash Table, Bit Manipulation | Easy | 58.3% | 1956 | 79
| 137 | Single Number II |  | Bit Manipulation | Medium | 44.7% | 660 | 224
| 138 | Copy List with Random Pointer | [Python](../submissions/python/138.py), [C++](../submissions/cpp/138.cpp) | Hash Table, Linked List | Medium | 25.6% | 1193 | 358
| 139 | Word Break | [C++](../submissions/cpp/139.cpp) | Dynamic Programming | Medium | 33.8% | 1735 | 101
| 140 | Word Break II |  | Dynamic Programming, Backtracking | Hard | 26.3% | 735 | 195
| 141 | Linked List Cycle | [C++](../submissions/cpp/141.cpp) | Linked List, Two Pointers | Easy | 35.2% | 1254 | 97
| 142 | Linked List Cycle II | [C++](../submissions/cpp/142.cpp) | Linked List, Two Pointers | Medium | 30.3% | 1125 | 73
| 143 | Reorder List | [C++](../submissions/cpp/143.cpp) | Linked List | Medium | 29.3% | 673 | 55
| 144 | Binary Tree Preorder Traversal | [C++](../submissions/cpp/144.cpp) | Stack, Tree | Medium | 49.7% | 606 | 32
| 145 | Binary Tree Postorder Traversal |  | Stack, Tree | Hard | 46.1% | 722 | 36
| 146 | LRU Cache |  | Design | Hard | 23.2% | 2234 | 68
| 147 | Insertion Sort List |  | Linked List, Sort | Medium | 36.0% | 276 | 334
| 148 | Sort List |  | Linked List, Sort | Medium | 33.2% | 1105 | 61
| 149 | Max Points on a Line |  | Hash Table, Math | Hard | 15.4% | 373 | 1037
| 150 | Evaluate Reverse Polish Notation |  | Stack | Medium | 30.9% | 415 | 306
| 151 | Reverse Words in a String |  | String | Medium | 15.8% | 428 | 2007
| 152 | Maximum Product Subarray |  | Array, Dynamic Programming | Medium | 28.2% | 1647 | 75
| 153 | Find Minimum in Rotated Sorted Array | [Python3](../submissions/python3/153.py), [C++](../submissions/cpp/153.cpp) | Array, Binary Search | Medium | 42.2% | 755 | 136
| 154 | Find Minimum in Rotated Sorted Array II |  | Array, Binary Search | Hard | 38.8% | 360 | 114
| 155 | Min Stack | [C++](../submissions/cpp/155.cpp) | Stack, Design | Easy | 34.9% | 1411 | 156
| 156 | Binary Tree Upside Down |  | Tree | Medium | 49.0% | 145 | 464
| 157 | Read N Characters Given Read4 |  | String | Easy | 27.8% | 134 | 1327
| 158 | Read N Characters Given Read4 II - Call multiple times |  | String | Hard | 24.4% | 215 | 692
| 159 | Longest Substring with At Most Two Distinct Characters |  | Hash Table, Two Pointers, String | Hard | 45.5% | 439 | 7
| 160 | Intersection of Two Linked Lists | [Python](../submissions/python/160.py), [C++](../submissions/cpp/160.cpp) | Linked List | Easy | 31.5% | 1733 | 127
| 161 | One Edit Distance |  | String | Medium | 31.4% | 296 | 70
| 162 | Find Peak Element |  | Array, Binary Search | Medium | 40.5% | 657 | 1049
| 163 | Missing Ranges |  | Array | Medium | 22.9% | 163 | 1008
| 164 | Maximum Gap |  | Sort | Hard | 31.5% | 390 | 108
| 165 | Compare Version Numbers |  | String | Medium | 22.2% | 223 | 976
| 166 | Fraction to Recurring Decimal |  | Hash Table, Math | Medium | 19.0% | 365 | 835
| 167 | Two Sum II - Input array is sorted | [C++](../submissions/cpp/167.cpp) | Array, Two Pointers, Binary Search | Easy | 48.6% | 749 | 311
| 168 | Excel Sheet Column Title |  | Math | Easy | 28.3% | 596 | 119
| 169 | Majority Element | [C++](../submissions/cpp/169.cpp) | Array, Divide and Conquer, Bit Manipulation | Easy | 50.9% | 1329 | 124
| 170 | Two Sum III - Data structure design |  | Hash Table, Design | Easy | 29.1% | 158 | 147
| 171 | Excel Sheet Column Number |  | Math | Easy | 50.5% | 434 | 78
| 172 | Factorial Trailing Zeroes |  | Math | Easy | 37.2% | 388 | 558
| 173 | Binary Search Tree Iterator | [C++](../submissions/cpp/173.cpp) | Stack, Tree, Design | Medium | 46.2% | 1079 | 224
| 174 | Dungeon Game |  | Binary Search, Dynamic Programming | Hard | 26.1% | 552 | 12
| 175 | Combine Two Tables |  | None | Easy | 47.9% | 584 | 77
| 176 | Second Highest Salary |  | None | Easy | 25.5% | 414 | 194
| 177 | Nth Highest Salary |  | None | Medium | 24.1% | 190 | 146
| 178 | Rank Scores |  | None | Medium | 33.7% | 395 | 37
| 179 | Largest Number |  | Sort | Medium | 25.0% | 803 | 101
| 180 | Consecutive Numbers |  | None | Medium | 31.2% | 188 | 49
| 181 | Employees Earning More Than Their Managers |  | None | Easy | 43.9% | 285 | 28
| 182 | Duplicate Emails |  | None | Easy | 51.3% | 226 | 14
| 183 | Customers Who Never Order |  | None | Easy | 41.7% | 195 | 21
| 184 | Department Highest Salary |  | None | Medium | 26.1% | 226 | 62
| 185 | Department Top Three Salaries |  | None | Hard | 23.0% | 274 | 64
| 186 | Reverse Words in a String II |  | String | Medium | 35.2% | 217 | 80
| 187 | Repeated DNA Sequences |  | Hash Table, Bit Manipulation | Medium | 35.0% | 362 | 143
| 188 | Best Time to Buy and Sell Stock IV |  | Dynamic Programming | Hard | 25.7% | 583 | 44
| 189 | Rotate Array | [C++](../submissions/cpp/189.cpp) | Array | Easy | 28.3% | 1005 | 546
| 190 | Reverse Bits |  | Bit Manipulation | Easy | 29.6% | 450 | 129
| 191 | Number of 1 Bits |  | Bit Manipulation | Easy | 41.4% | 349 | 328
| 192 | Word Frequency |  | None | Medium | 26.5% | 113 | 53
| 193 | Valid Phone Numbers |  | None | Easy | 25.1% | 80 | 155
| 194 | Transpose File |  | None | Medium | 22.1% | 40 | 109
| 195 | Tenth Line |  | None | Easy | 34.0% | 107 | 81
| 196 | Delete Duplicate Emails |  | None | Easy | 29.7% | 230 | 255
| 197 | Rising Temperature |  | None | Easy | 33.0% | 190 | 72
| 198 | House Robber | [C++](../submissions/cpp/198.cpp) | Dynamic Programming | Easy | 40.7% | 1986 | 65
| 199 | Binary Tree Right Side View | [C++](../submissions/cpp/199.cpp) | Tree, Depth-first Search, Breadth-first Search | Medium | 46.0% | 793 | 30
| 200 | Number of Islands |  | Depth-first Search, Breadth-first Search, Union Find | Medium | 39.6% | 1937 | 77
| 201 | Bitwise AND of Numbers Range |  | Bit Manipulation | Medium | 35.3% | 332 | 43
| 202 | Happy Number | [Python3](../submissions/python3/202.py) | Hash Table, Math | Easy | 43.9% | 712 | 165
| 203 | Remove Linked List Elements | [C++](../submissions/cpp/203.cpp) | Linked List | Easy | 35.0% | 673 | 41
| 204 | Count Primes | [C++](../submissions/cpp/204.cpp) | Hash Table, Math | Easy | 27.8% | 817 | 332
| 205 | Isomorphic Strings |  | Hash Table | Easy | 36.4% | 629 | 177
| 206 | Reverse Linked List | [Python3](../submissions/python3/206.py), [C++](../submissions/cpp/206.cpp) | Linked List | Easy | 51.7% | 1811 | 48
| 207 | Course Schedule |  | Depth-first Search, Breadth-first Search, Graph, Topological Sort | Medium | 36.1% | 1293 | 65
| 208 | Implement Trie (Prefix Tree) |  | Design, Trie | Medium | 35.9% | 1277 | 27
| 209 | Minimum Size Subarray Sum |  | Array, Two Pointers, Binary Search | Medium | 33.9% | 882 | 60
| 210 | Course Schedule II |  | Depth-first Search, Breadth-first Search, Graph, Topological Sort | Medium | 33.0% | 698 | 50
| 211 | Add and Search Word - Data structure design | [C++](../submissions/cpp/211.cpp) | Backtracking, Design, Trie | Medium | 28.5% | 663 | 47
| 212 | Word Search II |  | Backtracking, Trie | Hard | 27.0% | 826 | 54
| 213 | House Robber II | [C++](../submissions/cpp/213.cpp) | Dynamic Programming | Medium | 35.0% | 686 | 21
| 214 | Shortest Palindrome |  | String | Hard | 26.6% | 522 | 67
| 215 | Kth Largest Element in an Array |  | Divide and Conquer, Heap | Medium | 45.0% | 1566 | 149
| 216 | Combination Sum III | [C++](../submissions/cpp/216.cpp) | Array, Backtracking | Medium | 49.9% | 480 | 27
| 217 | Contains Duplicate | [C++](../submissions/cpp/217.cpp), [Python3](../submissions/python3/217.py) | Array, Hash Table | Easy | 50.2% | 313 | 429
| 218 | The Skyline Problem |  | Divide and Conquer, Heap, Binary Indexed Tree, Segment Tree | Hard | 30.6% | 944 | 53
| 219 | Contains Duplicate II | [C++](../submissions/cpp/219.cpp) | Array, Hash Table | Easy | 34.4% | 412 | 480
| 220 | Contains Duplicate III |  | Binary Search Tree | Medium | 19.2% | 534 | 497
| 221 | Maximal Square | [C++](../submissions/cpp/221.cpp) | Dynamic Programming | Medium | 31.9% | 977 | 21
| 222 | Count Complete Tree Nodes |  | Binary Search, Tree | Medium | 30.3% | 751 | 92
| 223 | Rectangle Area |  | Math | Medium | 35.3% | 205 | 416
| 224 | Basic Calculator |  | Math, Stack | Hard | 31.2% | 534 | 78
| 225 | Implement Stack using Queues | [C++](../submissions/cpp/225.cpp) | Stack, Design | Easy | 37.3% | 255 | 348
| 226 | Invert Binary Tree | [C++](../submissions/cpp/226.cpp) | Tree | Easy | 56.4% | 1367 | 24
| 227 | Basic Calculator II |  | String | Medium | 32.2% | 520 | 81
| 228 | Summary Ranges |  | Array | Medium | 34.7% | 303 | 296
| 229 | Majority Element II |  | Array | Medium | 31.0% | 664 | 82
| 230 | Kth Smallest Element in a BST | [C++](../submissions/cpp/230.cpp) | Binary Search, Tree | Medium | 49.1% | 878 | 35
| 231 | Power of Two |  | Math, Bit Manipulation | Easy | 41.5% | 362 | 100
| 232 | Implement Queue using Stacks | [C++](../submissions/cpp/232.cpp) | Stack, Design | Easy | 41.3% | 439 | 96
| 233 | Number of Digit One |  | Math | Hard | 29.7% | 134 | 363
| 234 | Palindrome Linked List | [C++](../submissions/cpp/234.cpp) | Linked List, Two Pointers | Easy | 35.0% | 1337 | 204
| 235 | Lowest Common Ancestor of a Binary Search Tree | [C++](../submissions/cpp/235.cpp) | Tree | Easy | 42.8% | 808 | 70
| 236 | Lowest Common Ancestor of a Binary Tree |  | Tree | Medium | 34.4% | 1511 | 124
| 237 | Delete Node in a Linked List | [C++](../submissions/cpp/237.cpp) | Linked List | Easy | 51.2% | 570 | 2656
| 238 | Product of Array Except Self | [Python3](../submissions/python3/238.py), [C++](../submissions/cpp/238.cpp) | Array | Medium | 53.2% | 1763 | 137
| 239 | Sliding Window Maximum |  | Heap | Hard | 36.5% | 1251 | 74
| 240 | Search a 2D Matrix II |  | Binary Search, Divide and Conquer | Medium | 39.9% | 1170 | 36
| 241 | Different Ways to Add Parentheses |  | Divide and Conquer | Medium | 48.4% | 712 | 37
| 242 | Valid Anagram | [C++](../submissions/cpp/242.cpp) | Hash Table, Sort | Easy | 50.3% | 565 | 90
| 243 | Shortest Word Distance |  | Array | Easy | 55.8% | 210 | 20
| 244 | Shortest Word Distance II |  | Hash Table, Design | Medium | 45.1% | 145 | 71
| 245 | Shortest Word Distance III |  | Array | Medium | 52.4% | 91 | 49
| 246 | Strobogrammatic Number |  | Hash Table, Math | Easy | 41.5% | 104 | 230
| 247 | Strobogrammatic Number II |  | Math, Recursion | Medium | 43.1% | 182 | 70
| 248 | Strobogrammatic Number III |  | Math, Recursion | Hard | 35.0% | 79 | 84
| 249 | Group Shifted Strings |  | Hash Table, String | Medium | 47.6% | 232 | 37
| 250 | Count Univalue Subtrees |  | Tree | Medium | 47.2% | 214 | 43
| 251 | Flatten 2D Vector |  | Design | Medium | 43.3% | 198 | 66
| 252 | Meeting Rooms |  | Sort | Easy | 50.9% | 236 | 20
| 253 | Meeting Rooms II |  | Heap, Greedy, Sort | Medium | 41.6% | 991 | 20
| 254 | Factor Combinations |  | Backtracking | Medium | 43.8% | 331 | 15
| 255 | Verify Preorder Sequence in Binary Search Tree |  | Stack, Tree | Medium | 42.5% | 279 | 38
| 256 | Paint House |  | Dynamic Programming | Easy | 47.9% | 298 | 27
| 257 | Binary Tree Paths | [C++](../submissions/cpp/257.cpp) | Tree, Depth-first Search | Easy | 44.5% | 708 | 60
| 258 | Add Digits |  | Math | Easy | 53.2% | 355 | 687
| 259 | 3Sum Smaller |  | Array, Two Pointers | Medium | 43.9% | 309 | 27
| 260 | Single Number III |  | Bit Manipulation | Medium | 55.7% | 698 | 66
| 261 | Graph Valid Tree |  | Depth-first Search, Breadth-first Search, Union Find, Graph | Medium | 39.3% | 516 | 17
| 262 | Trips and Users |  | None | Hard | 22.6% | 156 | 116
| 263 | Ugly Number |  | Math | Easy | 40.3% | 191 | 359
| 264 | Ugly Number II |  | Math, Dynamic Programming, Heap | Medium | 35.2% | 729 | 53
| 265 | Paint House II |  | Dynamic Programming | Hard | 40.4% | 280 | 12
| 266 | Palindrome Permutation |  | Hash Table | Easy | 59.4% | 167 | 33
| 267 | Palindrome Permutation II |  | Backtracking | Medium | 33.0% | 198 | 31
| 268 | Missing Number | [C++](../submissions/cpp/268.cpp) | Array, Math, Bit Manipulation | Easy | 47.1% | 723 | 1102
| 269 | Alien Dictionary |  | Graph, Topological Sort | Hard | 29.4% | 653 | 118
| 270 | Closest Binary Search Tree Value |  | Binary Search, Tree | Easy | 42.7% | 319 | 21
| 271 | Encode and Decode Strings |  | String | Medium | 25.6% | 189 | 70
| 272 | Closest Binary Search Tree Value II |  | Stack, Tree | Hard | 43.2% | 284 | 13
| 273 | Integer to English Words |  | Math, String | Hard | 23.6% | 442 | 1130
| 274 | H-Index |  | Hash Table, Sort | Medium | 34.3% | 333 | 571
| 275 | H-Index II |  | Binary Search | Medium | 35.1% | 169 | 303
| 276 | Paint Fence |  | Dynamic Programming | Easy | 35.9% | 361 | 97
| 277 | Find the Celebrity |  | Array | Medium | 35.1% | 501 | 75
| 278 | First Bad Version | [C++](../submissions/cpp/278.cpp) | Binary Search | Easy | 28.4% | 507 | 329
| 279 | Perfect Squares | [C++](../submissions/cpp/279.cpp) | Math, Dynamic Programming, Breadth-first Search | Medium | 39.9% | 1115 | 92
| 280 | Wiggle Sort |  | Array, Sort | Medium | 60.2% | 338 | 41
| 281 | Zigzag Iterator |  | Design | Medium | 55.1% | 217 | 20
| 282 | Expression Add Operators |  | Divide and Conquer | Hard | 31.9% | 535 | 74
| 283 | Move Zeroes | [Python3](../submissions/python3/283.py), [C++](../submissions/cpp/283.cpp), [Python](../submissions/python/283.py) | Array, Two Pointers | Easy | 53.2% | 1656 | 63
| 284 | Peeking Iterator |  | Design | Medium | 38.6% | 234 | 142
| 285 | Inorder Successor in BST |  | Tree | Medium | 32.7% | 565 | 42
| 286 | Walls and Gates |  | Breadth-first Search | Medium | 47.9% | 484 | 8
| 287 | Find the Duplicate Number | [C++](../submissions/cpp/287.cpp), [Python3](../submissions/python3/287.py) | Array, Two Pointers, Binary Search | Medium | 47.6% | 1942 | 203
| 288 | Unique Word Abbreviation |  | Hash Table, Design | Medium | 19.4% | 53 | 745
| 289 | Game of Life | [Python3](../submissions/python3/289.py), [C++](../submissions/cpp/289.cpp) | Array | Medium | 42.3% | 663 | 136
| 290 | Word Pattern |  | Hash Table | Easy | 34.3% | 516 | 58
| 291 | Word Pattern II |  | Backtracking | Hard | 39.8% | 215 | 15
| 292 | Nim Game |  | Brainteaser | Easy | 55.4% | 306 | 1017
| 293 | Flip Game |  | String | Easy | 58.3% | 59 | 178
| 294 | Flip Game II |  | Backtracking | Medium | 47.5% | 239 | 21
| 295 | Find Median from Data Stream |  | Heap, Design | Hard | 33.8% | 850 | 18
| 296 | Best Meeting Point |  | Math, Sort | Hard | 53.7% | 211 | 16
| 297 | Serialize and Deserialize Binary Tree |  | Tree, Design | Hard | 38.6% | 1145 | 56
| 298 | Binary Tree Longest Consecutive Sequence |  | Tree | Medium | 43.2% | 253 | 68
| 299 | Bulls and Cows |  | Hash Table | Medium | 38.1% | 261 | 251
| 300 | Longest Increasing Subsequence | [Python3](../submissions/python3/300.py), [C++](../submissions/cpp/300.cpp), [Python](../submissions/python/300.py) | Binary Search, Dynamic Programming | Medium | 39.9% | 1948 | 42
| 301 | Remove Invalid Parentheses |  | Depth-first Search, Breadth-first Search | Hard | 37.8% | 1021 | 46
| 302 | Smallest Rectangle Enclosing Black Pixels |  | Binary Search | Hard | 48.2% | 114 | 32
| 303 | Range Sum Query - Immutable | [C++](../submissions/cpp/303.cpp) | Dynamic Programming | Easy | 35.9% | 366 | 647
| 304 | Range Sum Query 2D - Immutable | [C++](../submissions/cpp/304.cpp) | Dynamic Programming | Medium | 30.5% | 347 | 94
| 305 | Number of Islands II |  | Union Find | Hard | 41.3% | 428 | 7
| 306 | Additive Number |  | Backtracking | Medium | 28.1% | 169 | 253
| 307 | Range Sum Query - Mutable | [C++](../submissions/cpp/307.cpp) | Binary Indexed Tree, Segment Tree | Medium | 26.7% | 565 | 48
| 308 | Range Sum Query 2D - Mutable |  | Binary Indexed Tree, Segment Tree | Hard | 30.3% | 231 | 45
| 309 | Best Time to Buy and Sell Stock with Cooldown | [C++](../submissions/cpp/309.cpp) | Dynamic Programming | Medium | 43.2% | 1051 | 38
| 310 | Minimum Height Trees |  | Breadth-first Search, Graph | Medium | 29.5% | 777 | 45
| 311 | Sparse Matrix Multiplication |  | Hash Table | Medium | 54.9% | 223 | 92
| 312 | Burst Balloons |  | Divide and Conquer, Dynamic Programming | Hard | 45.8% | 1032 | 29
| 313 | Super Ugly Number |  | Math, Heap | Medium | 40.2% | 302 | 78
| 314 | Binary Tree Vertical Order Traversal |  | Hash Table | Medium | 39.7% | 460 | 82
| 315 | Count of Smaller Numbers After Self |  | Divide and Conquer, Binary Indexed Tree, Segment Tree, Binary Search Tree | Hard | 36.6% | 887 | 36
| 316 | Remove Duplicate Letters |  | Stack, Greedy | Hard | 31.7% | 570 | 63
| 317 | Shortest Distance from All Buildings |  | Breadth-first Search | Hard | 36.4% | 320 | 17
| 318 | Maximum Product of Word Lengths |  | Bit Manipulation | Medium | 47.4% | 431 | 43
| 319 | Bulb Switcher |  | Math, Brainteaser | Medium | 43.5% | 223 | 528
| 320 | Generalized Abbreviation |  | Backtracking, Bit Manipulation | Medium | 47.9% | 240 | 26
| 321 | Create Maximum Number |  | Dynamic Programming, Greedy | Hard | 25.0% | 314 | 119
| 322 | Coin Change | [C++](../submissions/cpp/322.cpp) | Dynamic Programming | Medium | 28.4% | 1257 | 65
| 323 | Number of Connected Components in an Undirected Graph |  | Depth-first Search, Breadth-first Search, Union Find, Graph | Medium | 50.9% | 319 | 11
| 324 | Wiggle Sort II |  | Sort | Medium | 27.2% | 480 | 245
| 325 | Maximum Size Subarray Sum Equals k |  | Hash Table | Medium | 44.1% | 499 | 19
| 326 | Power of Three |  | Math | Easy | 41.3% | 226 | 869
| 327 | Count of Range Sum |  | Divide and Conquer, Binary Search Tree | Hard | 31.7% | 317 | 51
| 328 | Odd Even Linked List | [C++](../submissions/cpp/328.cpp) | Linked List | Medium | 47.6% | 593 | 199
| 329 | Longest Increasing Path in a Matrix |  | Depth-first Search, Topological Sort, Memoization | Hard | 38.9% | 751 | 13
| 330 | Patching Array |  | Greedy | Hard | 33.1% | 257 | 46
| 331 | Verify Preorder Serialization of a Binary Tree |  | Stack | Medium | 38.0% | 428 | 23
| 332 | Reconstruct Itinerary |  | Depth-first Search, Graph | Medium | 30.3% | 529 | 348
| 333 | Largest BST Subtree |  | Tree | Medium | 32.2% | 267 | 31
| 334 | Increasing Triplet Subsequence |  | None | Medium | 39.4% | 666 | 64
| 335 | Self Crossing |  | Math | Hard | 26.7% | 67 | 233
| 336 | Palindrome Pairs |  | Hash Table, String, Trie | Hard | 29.4% | 599 | 73
| 337 | House Robber III | [C++](../submissions/cpp/337.cpp) | Tree, Depth-first Search | Medium | 46.8% | 1209 | 27
| 338 | Counting Bits | [C++](../submissions/cpp/338.cpp) | Dynamic Programming, Bit Manipulation | Medium | 63.6% | 1099 | 76
| 339 | Nested List Weight Sum |  | Depth-first Search | Easy | 66.7% | 220 | 50
| 340 | Longest Substring with At Most K Distinct Characters |  | Hash Table, String | Hard | 38.8% | 415 | 14
| 341 | Flatten Nested List Iterator |  | Stack, Design | Medium | 46.2% | 746 | 282
| 342 | Power of Four |  | Bit Manipulation | Easy | 39.8% | 268 | 127
| 343 | Integer Break | [C++](../submissions/cpp/343.cpp) | Math, Dynamic Programming | Medium | 47.1% | 464 | 143
| 344 | Reverse String | [C++](../submissions/cpp/344.cpp) | Two Pointers, String | Easy | 62.5% | 625 | 387
| 345 | Reverse Vowels of a String |  | Two Pointers, String | Easy | 40.5% | 335 | 555
| 346 | Moving Average from Data Stream |  | Design, Queue | Easy | 64.3% | 228 | 29
| 347 | Top K Frequent Elements |  | Hash Table, Heap | Medium | 52.6% | 1188 | 75
| 348 | Design Tic-Tac-Toe |  | Design | Medium | 48.0% | 292 | 24
| 349 | Intersection of Two Arrays | [C++](../submissions/cpp/349.cpp), [Python3](../submissions/python3/349.py) | Hash Table, Two Pointers, Binary Search, Sort | Easy | 52.0% | 323 | 673
| 350 | Intersection of Two Arrays II | [C++](../submissions/cpp/350.cpp) | Hash Table, Two Pointers, Binary Search, Sort | Easy | 46.2% | 544 | 192
| 351 | Android Unlock Patterns |  | Dynamic Programming, Backtracking | Medium | 45.2% | 229 | 212
| 352 | Data Stream as Disjoint Intervals |  | Binary Search Tree | Hard | 42.6% | 140 | 47
| 353 | Design Snake Game |  | Design, Queue | Medium | 29.3% | 170 | 67
| 354 | Russian Doll Envelopes |  | Binary Search, Dynamic Programming | Hard | 33.3% | 458 | 23
| 355 | Design Twitter |  | Hash Table, Heap, Design | Medium | 26.6% | 400 | 111
| 356 | Line Reflection |  | Hash Table, Math | Medium | 30.6% | 87 | 185
| 357 | Count Numbers with Unique Digits | [C++](../submissions/cpp/357.cpp) | Math, Dynamic Programming, Backtracking | Medium | 46.4% | 206 | 526
| 358 | Rearrange String k Distance Apart |  | Hash Table, Heap, Greedy | Hard | 32.3% | 223 | 11
| 359 | Logger Rate Limiter |  | Hash Table, Design | Easy | 63.5% | 151 | 46
| 360 | Sort Transformed Array |  | Math, Two Pointers | Medium | 46.2% | 197 | 59
| 361 | Bomb Enemy |  | Dynamic Programming | Medium | 42.1% | 229 | 51
| 362 | Design Hit Counter |  | Design | Medium | 57.4% | 251 | 25
| 363 | Max Sum of Rectangle No Larger Than K |  | Binary Search, Dynamic Programming, Queue | Hard | 34.6% | 332 | 29
| 364 | Nested List Weight Sum II |  | Depth-first Search | Medium | 56.2% | 241 | 51
| 365 | Water and Jug Problem |  | Math | Medium | 28.5% | 127 | 430
| 366 | Find Leaves of Binary Tree |  | Tree, Depth-first Search | Medium | 63.4% | 422 | 8
| 367 | Valid Perfect Square | [C++](../submissions/cpp/367.cpp) | Math, Binary Search | Easy | 39.2% | 380 | 88
| 368 | Largest Divisible Subset | [C++](../submissions/cpp/368.cpp) | Math, Dynamic Programming | Medium | 34.4% | 447 | 22
| 369 | Plus One Linked List |  | Linked List | Medium | 55.4% | 244 | 6
| 370 | Range Addition |  | Array | Medium | 59.5% | 374 | 12
| 371 | Sum of Two Integers | [C++](../submissions/cpp/371.cpp) | Bit Manipulation | Easy | 51.4% | 652 | 1017
| 372 | Super Pow |  | Math | Medium | 35.4% | 101 | 476
| 373 | Find K Pairs with Smallest Sums |  | Heap | Medium | 32.7% | 533 | 37
| 374 | Guess Number Higher or Lower | [C++](../submissions/cpp/374.cpp) | Binary Search | Easy | 38.3% | 185 | 956
| 375 | Guess Number Higher or Lower II |  | Dynamic Programming, Minimax | Medium | 37.0% | 440 | 619
| 376 | Wiggle Subsequence | [C++](../submissions/cpp/376.cpp) | Dynamic Programming, Greedy | Medium | 36.7% | 443 | 37
| 377 | Combination Sum IV |  | Dynamic Programming | Medium | 43.8% | 668 | 53
| 378 | Kth Smallest Element in a Sorted Matrix |  | Binary Search, Heap | Medium | 47.8% | 895 | 72
| 379 | Design Phone Directory |  | Linked List, Design | Medium | 39.3% | 81 | 124
| 380 | Insert Delete GetRandom O(1) | [Python3](../submissions/python3/380.py), [C++](../submissions/cpp/380.cpp) | Array, Hash Table, Design | Medium | 41.6% | 850 | 66
| 381 | Insert Delete GetRandom O(1) - Duplicates allowed |  | Array, Hash Table, Design | Hard | 31.1% | 343 | 35
| 382 | Linked List Random Node |  | Reservoir Sampling | Medium | 48.6% | 304 | 94
| 383 | Ransom Note |  | String | Easy | 49.0% | 264 | 97
| 384 | Shuffle an Array |  | None | Medium | 49.1% | 204 | 509
| 385 | Mini Parser |  | String, Stack | Medium | 31.4% | 140 | 487
| 386 | Lexicographical Numbers |  | None | Medium | 44.2% | 322 | 51
| 387 | First Unique Character in a String |  | Hash Table, String | Easy | 48.5% | 785 | 67
| 388 | Longest Absolute File Path |  | None | Medium | 38.5% | 358 | 657
| 389 | Find the Difference | [C++](../submissions/cpp/389.cpp) | Hash Table, Bit Manipulation | Easy | 52.5% | 413 | 206
| 390 | Elimination Game |  | None | Medium | 43.3% | 192 | 173
| 391 | Perfect Rectangle |  | None | Hard | 27.8% | 198 | 44
| 392 | Is Subsequence | [C++](../submissions/cpp/392.cpp) | Binary Search, Dynamic Programming, Greedy | Medium | 45.9% | 447 | 103
| 393 | UTF-8 Validation |  | Bit Manipulation | Medium | 35.2% | 114 | 544
| 394 | Decode String |  | Stack, Depth-first Search | Medium | 43.4% | 1116 | 63
| 395 | Longest Substring with At Least K Repeating Characters |  | None | Medium | 37.5% | 576 | 48
| 396 | Rotate Function |  | Math | Medium | 34.7% | 224 | 68
| 397 | Integer Replacement |  | Math, Bit Manipulation | Medium | 30.9% | 173 | 204
| 398 | Random Pick Index |  | Reservoir Sampling | Medium | 48.2% | 211 | 388
| 399 | Evaluate Division |  | Union Find, Graph | Medium | 45.8% | 943 | 76
| 400 | Nth Digit |  | Math | Easy | 30.0% | 216 | 664
| 401 | Binary Watch | [C++](../submissions/cpp/401.cpp) | Backtracking, Bit Manipulation | Easy | 44.9% | 317 | 509
| 402 | Remove K Digits |  | Stack, Greedy | Medium | 26.0% | 725 | 45
| 403 | Frog Jump |  | Dynamic Programming | Hard | 34.8% | 407 | 50
| 404 | Sum of Left Leaves | [C++](../submissions/cpp/404.cpp) | Tree | Easy | 48.5% | 549 | 60
| 405 | Convert a Number to Hexadecimal |  | Bit Manipulation | Easy | 41.5% | 210 | 56
| 406 | Queue Reconstruction by Height |  | Greedy | Medium | 58.4% | 1309 | 145
| 407 | Trapping Rain Water II |  | Heap, Breadth-first Search | Hard | 38.6% | 541 | 15
| 408 | Valid Word Abbreviation |  | String | Easy | 29.0% | 72 | 348
| 409 | Longest Palindrome |  | Hash Table | Easy | 47.1% | 429 | 43
| 410 | Split Array Largest Sum |  | Binary Search, Dynamic Programming | Hard | 41.1% | 519 | 35
| 411 | Minimum Unique Word Abbreviation |  | Backtracking, Bit Manipulation | Hard | 34.4% | 86 | 85
| 412 | Fizz Buzz | [Python3](../submissions/python3/412.py) | None | Easy | 58.6% | 436 | 634
| 413 | Arithmetic Slices | [C++](../submissions/cpp/413.cpp) | Math, Dynamic Programming | Medium | 55.0% | 499 | 101
| 414 | Third Maximum Number | [Python3](../submissions/python3/414.py), [C++](../submissions/cpp/414.cpp) | Array | Easy | 28.5% | 322 | 538
| 415 | Add Strings |  | Math | Easy | 42.7% | 329 | 109
| 416 | Partition Equal Subset Sum | [C++](../submissions/cpp/416.cpp) | Dynamic Programming | Medium | 39.4% | 943 | 24
| 417 | Pacific Atlantic Water Flow |  | Depth-first Search, Breadth-first Search | Medium | 36.2% | 541 | 81
| 418 | Sentence Screen Fitting |  | Dynamic Programming | Medium | 29.9% | 272 | 154
| 419 | Battleships in a Board |  | None | Medium | 64.9% | 370 | 288
| 420 | Strong Password Checker |  | None | Hard | 18.3% | 69 | 302
| 421 | Maximum XOR of Two Numbers in an Array |  | Bit Manipulation, Trie | Medium | 49.9% | 570 | 130
| 422 | Valid Word Square |  | None | Easy | 36.4% | 103 | 68
| 423 | Reconstruct Original Digits from English |  | Math | Medium | 45.3% | 95 | 366
| 424 | Longest Repeating Character Replacement |  | None | Medium | 43.4% | 420 | 41
| 425 | Word Squares |  | Backtracking, Trie | Hard | 43.2% | 304 | 26
| 426 | Convert Binary Search Tree to Sorted Doubly Linked List |  | Linked List, Divide and Conquer, Tree | Medium | 48.0% | 275 | 33
| 427 | Construct Quad Tree |  | None | Easy | 53.4% | 68 | 170
| 428 | Serialize and Deserialize N-ary Tree |  | Tree | Hard | 51.4% | 105 | 9
| 429 | N-ary Tree Level Order Traversal | [C++](../submissions/cpp/429.cpp) | Tree, Breadth-first Search | Easy | 57.7% | 157 | 19
| 430 | Flatten a Multilevel Doubly Linked List | [C++](../submissions/cpp/430.cpp) | Linked List, Depth-first Search | Medium | 39.2% | 220 | 32
| 431 | Encode N-ary Tree to Binary Tree |  | Tree | Hard | 58.6% | 47 | 4
| 432 | All O`one Data Structure |  | Design | Hard | 28.8% | 265 | 35
| 433 | Minimum Genetic Mutation |  | None | Medium | 37.0% | 218 | 31
| 434 | Number of Segments in a String |  | String | Easy | 36.6% | 119 | 484
| 435 | Non-overlapping Intervals |  | Greedy | Medium | 41.3% | 389 | 15
| 436 | Find Right Interval |  | Binary Search | Medium | 42.1% | 169 | 77
| 437 | Path Sum III | [C++](../submissions/cpp/437.cpp) | Tree | Easy | 41.4% | 1458 | 70
| 438 | Find All Anagrams in a String |  | Hash Table | Easy | 35.7% | 1285 | 92
| 439 | Ternary Expression Parser |  | Stack, Depth-first Search | Medium | 52.7% | 154 | 27
| 440 | K-th Smallest in Lexicographical Order |  | None | Hard | 26.0% | 136 | 25
| 441 | Arranging Coins | [C++](../submissions/cpp/441.cpp) | Math, Binary Search | Easy | 37.2% | 164 | 397
| 442 | Find All Duplicates in an Array | [C++](../submissions/cpp/442.cpp) | Array | Medium | 59.3% | 898 | 92
| 443 | String Compression |  | String | Easy | 36.4% | 282 | 836
| 444 | Sequence Reconstruction |  | Graph, Topological Sort | Medium | 20.0% | 141 | 423
| 445 | Add Two Numbers II | [C++](../submissions/cpp/445.cpp) | Linked List | Medium | 48.7% | 586 | 80
| 446 | Arithmetic Slices II - Subsequence |  | Dynamic Programming | Hard | 29.3% | 213 | 30
| 447 | Number of Boomerangs |  | Hash Table | Easy | 48.8% | 261 | 364
| 448 | Find All Numbers Disappeared in an Array | [Python3](../submissions/python3/448.py), [C++](../submissions/cpp/448.cpp), [Python](../submissions/python/448.py) | Array | Easy | 52.3% | 1344 | 128
| 449 | Serialize and Deserialize BST | [C++](../submissions/cpp/449.cpp) | Tree | Medium | 45.1% | 488 | 40
| 450 | Delete Node in a BST |  | Tree | Medium | 38.8% | 705 | 51
| 451 | Sort Characters By Frequency |  | Hash Table, Heap | Medium | 54.2% | 590 | 53
| 452 | Minimum Number of Arrows to Burst Balloons |  | Greedy | Medium | 45.4% | 395 | 22
| 453 | Minimum Moves to Equal Array Elements |  | Math | Easy | 48.8% | 303 | 520
| 454 | 4Sum II |  | Hash Table, Binary Search | Medium | 49.4% | 554 | 45
| 455 | Assign Cookies |  | Greedy | Easy | 47.9% | 262 | 55
| 456 | 132 Pattern |  | Stack | Medium | 27.4% | 526 | 31
| 457 | Circular Array Loop |  | None | Medium | 26.7% | 106 | 739
| 458 | Poor Pigs |  | None | Easy | 44.5% | 265 | 648
| 459 | Repeated Substring Pattern |  | String | Easy | 39.1% | 651 | 86
| 460 | LFU Cache |  | Design | Hard | 27.6% | 532 | 62
| 461 | Hamming Distance | [Python](../submissions/python/461.py), [C++](../submissions/cpp/461.cpp) | Bit Manipulation | Easy | 69.8% | 1153 | 91
| 462 | Minimum Moves to Equal Array Elements II |  | Math | Medium | 52.2% | 300 | 26
| 463 | Island Perimeter | [C++](../submissions/cpp/463.cpp) | Hash Table | Easy | 59.8% | 890 | 70
| 464 | Can I Win |  | Dynamic Programming, Minimax | Medium | 26.6% | 486 | 85
| 465 | Optimal Account Balancing |  | None | Hard | 41.4% | 174 | 36
| 466 | Count The Repetitions |  | Dynamic Programming | Hard | 27.2% | 90 | 63
| 467 | Unique Substrings in Wraparound String | [C++](../submissions/cpp/467.cpp) | Dynamic Programming | Medium | 33.4% | 315 | 52
| 468 | Validate IP Address |  | String | Medium | 20.9% | 90 | 568
| 469 | Convex Polygon |  | Math | Medium | 35.1% | 50 | 141
| 470 | Implement Rand10() Using Rand7() |  | Random, Rejection Sampling | Medium | 44.2% | 140 | 53
| 471 | Encode String with Shortest Length |  | Dynamic Programming | Hard | 44.3% | 196 | 13
| 472 | Concatenated Words |  | Dynamic Programming, Depth-first Search, Trie | Hard | 32.7% | 194 | 48
| 473 | Matchsticks to Square |  | Depth-first Search | Medium | 35.4% | 268 | 35
| 474 | Ones and Zeroes | [C++](../submissions/cpp/474.cpp) | Dynamic Programming | Medium | 39.0% | 473 | 107
| 475 | Heaters |  | Binary Search | Easy | 30.8% | 410 | 425
| 476 | Number Complement | [C++](../submissions/cpp/476.cpp) | Bit Manipulation | Easy | 61.9% | 485 | 64
| 477 | Total Hamming Distance |  | Bit Manipulation | Medium | 48.3% | 459 | 31
| 478 | Generate Random Point in a Circle |  | Math, Random, Rejection Sampling | Medium | 35.5% | 68 | 99
| 479 | Largest Palindrome Product |  | None | Easy | 26.8% | 67 | 1171
| 480 | Sliding Window Median |  | None | Hard | 31.0% | 305 | 32
| 481 | Magical String |  | None | Medium | 45.6% | 75 | 486
| 482 | License Key Formatting |  | None | Easy | 39.9% | 232 | 385
| 483 | Smallest Good Base |  | Math, Binary Search | Hard | 33.9% | 80 | 218
| 484 | Find Permutation |  | Greedy | Medium | 56.6% | 155 | 38
| 485 | Max Consecutive Ones | [C++](../submissions/cpp/485.cpp) | Array | Easy | 54.3% | 310 | 284
| 486 | Predict the Winner |  | Dynamic Programming, Minimax | Medium | 46.4% | 812 | 51
| 487 | Max Consecutive Ones II |  | Two Pointers | Medium | 46.1% | 327 | 5
| 488 | Zuma Game |  | Depth-first Search | Hard | 37.2% | 105 | 100
| 489 | Robot Room Cleaner |  | Depth-first Search | Hard | 61.0% | 348 | 20
| 490 | The Maze |  | Depth-first Search, Breadth-first Search | Medium | 45.9% | 323 | 26
| 491 | Increasing Subsequences |  | Depth-first Search | Medium | 41.1% | 357 | 62
| 492 | Construct the Rectangle |  | None | Easy | 48.2% | 114 | 178
| 493 | Reverse Pairs |  | Divide and Conquer, Binary Indexed Tree, Segment Tree, Binary Search Tree | Hard | 22.1% | 414 | 62
| 494 | Target Sum | [C++](../submissions/cpp/494.cpp) | Dynamic Programming, Depth-first Search | Medium | 44.6% | 1106 | 56
| 495 | Teemo Attacking | [C++](../submissions/cpp/495.cpp) | Array | Medium | 51.8% | 221 | 439
| 496 | Next Greater Element I | [C++](../submissions/cpp/496.cpp) | Stack | Easy | 58.2% | 655 | 1038
| 497 | Random Point in Non-overlapping Rectangles |  | Binary Search, Random | Medium | 34.9% | 64 | 79
| 498 | Diagonal Traverse |  | None | Medium | 44.7% | 291 | 198
| 499 | The Maze III |  | Depth-first Search, Breadth-first Search | Hard | 36.1% | 91 | 32
| 500 | Keyboard Row | [C++](../submissions/cpp/500.cpp) | Hash Table | Easy | 61.3% | 350 | 424
| 501 | Find Mode in Binary Search Tree | [C++](../submissions/cpp/501.cpp) | Tree | Easy | 38.6% | 482 | 180
| 502 | IPO |  | Heap, Greedy | Hard | 36.8% | 159 | 18
| 503 | Next Greater Element II |  | Stack | Medium | 49.6% | 552 | 35
| 504 | Base 7 |  | None | Easy | 44.4% | 126 | 95
| 505 | The Maze II |  | Depth-first Search, Breadth-first Search | Medium | 41.8% | 249 | 14
| 506 | Relative Ranks |  | None | Easy | 47.7% | 175 | 308
| 507 | Perfect Number |  | Math | Easy | 33.0% | 129 | 371
| 508 | Most Frequent Subtree Sum | [C++](../submissions/cpp/508.cpp) | Hash Table, Tree | Medium | 53.4% | 338 | 63
| 509 | Fibonacci Number | [Python3](../submissions/python3/509.py), [C++](../submissions/cpp/509.cpp) | Array | Easy | 67.0% | 43 | 80
| 513 | Find Bottom Left Tree Value | [C++](../submissions/cpp/513.cpp) | Tree, Depth-first Search, Breadth-first Search | Medium | 57.6% | 489 | 80
| 514 | Freedom Trail |  | Divide and Conquer, Dynamic Programming, Depth-first Search | Hard | 39.9% | 242 | 13
| 515 | Find Largest Value in Each Tree Row | [C++](../submissions/cpp/515.cpp) | Tree, Depth-first Search, Breadth-first Search | Medium | 57.0% | 428 | 39
| 516 | Longest Palindromic Subsequence | [C++](../submissions/cpp/516.cpp) | Dynamic Programming | Medium | 44.7% | 731 | 98
| 517 | Super Washing Machines |  | Math, Dynamic Programming | Hard | 36.5% | 167 | 94
| 518 | Coin Change 2 |  | None | Medium | 40.4% | 562 | 25
| 519 | Random Flip Matrix |  | Random | Medium | 32.2% | 67 | 20
| 520 | Detect Capital | [C++](../submissions/cpp/520.cpp) | String | Easy | 52.1% | 283 | 168
| 521 | Longest Uncommon Subsequence I  |  | String | Easy | 56.0% | 186 | 2940
| 522 | Longest Uncommon Subsequence II |  | String | Medium | 32.7% | 89 | 418
| 523 | Continuous Subarray Sum | [C++](../submissions/cpp/523.cpp) | Math, Dynamic Programming | Medium | 24.0% | 565 | 693
| 524 | Longest Word in Dictionary through Deleting |  | Two Pointers, Sort | Medium | 44.6% | 272 | 153
| 525 | Contiguous Array |  | Hash Table | Medium | 42.3% | 591 | 26
| 526 | Beautiful Arrangement | [C++](../submissions/cpp/526.cpp) | Backtracking | Medium | 53.5% | 385 | 96
| 527 | Word Abbreviation |  | String, Sort | Hard | 46.9% | 107 | 73
| 528 | Random Pick with Weight |  | Binary Search, Random | Medium | 42.5% | 163 | 221
| 529 | Minesweeper |  | Depth-first Search, Breadth-first Search | Medium | 51.4% | 244 | 261
| 530 | Minimum Absolute Difference in BST |  | Binary Search Tree | Easy | 49.4% | 450 | 35
| 531 | Lonely Pixel I |  | Array, Depth-first Search | Medium | 57.0% | 117 | 22
| 532 | K-diff Pairs in an Array | [Python3](../submissions/python3/532.py), [C++](../submissions/cpp/532.cpp) | Array, Two Pointers | Easy | 29.0% | 311 | 646
| 533 | Lonely Pixel II |  | Array, Depth-first Search | Medium | 45.9% | 34 | 379
| 535 | Encode and Decode TinyURL |  | Hash Table, Math | Medium | 75.3% | 370 | 784
| 536 | Construct Binary Tree from String |  | String, Tree | Medium | 43.4% | 213 | 57
| 537 | Complex Number Multiplication |  | Math, String | Medium | 64.7% | 146 | 490
| 538 | Convert BST to Greater Tree | [C++](../submissions/cpp/538.cpp) | Tree | Easy | 49.5% | 1054 | 78
| 539 | Minimum Time Difference |  | String | Medium | 47.0% | 197 | 75
| 540 | Single Element in a Sorted Array |  | None | Medium | 56.7% | 613 | 53
| 541 | Reverse String II |  | String | Easy | 44.8% | 210 | 611
| 542 | 01 Matrix |  | Depth-first Search, Breadth-first Search | Medium | 34.2% | 534 | 73
| 543 | Diameter of Binary Tree | [C++](../submissions/cpp/543.cpp) | Tree | Easy | 45.9% | 1110 | 67
| 544 | Output Contest Matches |  | String, Recursion | Medium | 72.5% | 174 | 40
| 545 | Boundary of Binary Tree |  | Tree | Medium | 33.8% | 174 | 324
| 546 | Remove Boxes |  | Dynamic Programming, Depth-first Search | Hard | 37.1% | 298 | 31
| 547 | Friend Circles |  | Depth-first Search, Union Find | Medium | 52.0% | 849 | 63
| 548 | Split Array with Equal Sum |  | Array | Medium | 41.1% | 103 | 44
| 549 | Binary Tree Longest Consecutive Sequence II |  | Tree | Medium | 43.6% | 325 | 18
| 551 | Student Attendance Record I |  | String | Easy | 45.1% | 128 | 518
| 552 | Student Attendance Record II |  | Dynamic Programming | Hard | 32.0% | 248 | 50
| 553 | Optimal Division |  | Math, String | Medium | 54.9% | 111 | 858
| 554 | Brick Wall |  | Hash Table | Medium | 47.1% | 496 | 20
| 555 | Split Concatenated Strings |  | String | Medium | 39.1% | 30 | 142
| 556 | Next Greater Element III |  | String | Medium | 29.6% | 298 | 94
| 557 | Reverse Words in a String III | [C++](../submissions/cpp/557.cpp) | String | Easy | 62.6% | 531 | 60
| 558 | Quad Tree Intersection |  | None | Easy | 39.1% | 28 | 135
| 559 | Maximum Depth of N-ary Tree | [C++](../submissions/cpp/559.cpp) | Tree, Depth-first Search, Breadth-first Search | Easy | 63.8% | 224 | 18
| 560 | Subarray Sum Equals K |  | Array, Hash Table | Medium | 41.1% | 1452 | 35
| 561 | Array Partition I | [C++](../submissions/cpp/561.cpp) | Array | Easy | 67.9% | 505 | 1462
| 562 | Longest Line of Consecutive One in Matrix |  | Array | Medium | 42.7% | 151 | 45
| 563 | Binary Tree Tilt | [C++](../submissions/cpp/563.cpp) | Tree | Easy | 46.8% | 276 | 587
| 564 | Find the Closest Palindrome |  | String | Hard | 17.8% | 113 | 478
| 565 | Array Nesting | [C++](../submissions/cpp/565.cpp), [Python3](../submissions/python3/565.py) | Array | Medium | 51.0% | 478 | 63
| 566 | Reshape the Matrix | [C++](../submissions/cpp/566.cpp) | Array | Easy | 58.2% | 493 | 72
| 567 | Permutation in String |  | Two Pointers | Medium | 37.1% | 513 | 28
| 568 | Maximum Vacation Days |  | Dynamic Programming | Hard | 37.2% | 193 | 27
| 569 | Median Employee Salary |  | None | Hard | 44.3% | 32 | 17
| 570 | Managers with at Least 5 Direct Reports |  | None | Medium | 60.4% | 51 | 4
| 571 | Find Median Given Frequency of Numbers |  | None | Hard | 46.8% | 39 | 13
| 572 | Subtree of Another Tree | [C++](../submissions/cpp/572.cpp) | Tree | Easy | 40.9% | 986 | 38
| 573 | Squirrel Simulation |  | Math | Medium | 52.7% | 84 | 16
| 574 | Winning Candidate |  | None | Medium | 35.4% | 16 | 126
| 575 | Distribute Candies | [C++](../submissions/cpp/575.cpp) | Hash Table | Easy | 58.9% | 255 | 587
| 576 | Out of Boundary Paths | [C++](../submissions/cpp/576.cpp) | Dynamic Programming, Depth-first Search | Medium | 31.1% | 241 | 95
| 577 | Employee Bonus |  | None | Easy | 55.8% | 31 | 14
| 578 | Get Highest Answer Rate Question |  | None | Medium | 34.5% | 17 | 158
| 579 | Find Cumulative Salary of an Employee |  | None | Hard | 32.9% | 32 | 34
| 580 | Count Student Number in Departments |  | None | Medium | 41.2% | 45 | 3
| 581 | Shortest Unsorted Continuous Subarray |  | Array | Easy | 29.5% | 1183 | 58
| 582 | Kill Process |  | Tree, Queue | Medium | 54.7% | 292 | 6
| 583 | Delete Operation for Two Strings |  | String | Medium | 44.0% | 595 | 17
| 584 | Find Customer Referee |  | None | Easy | 65.3% | 34 | 15
| 585 | Investments in 2016 |  | None | Medium | 45.5% | 37 | 31
| 586 | Customer Placing the Largest Number of Orders |  | None | Easy | 64.2% | 52 | 3
| 587 | Erect the Fence |  | Geometry | Hard | 34.0% | 120 | 134
| 588 | Design In-Memory File System |  | Design | Hard | 37.4% | 109 | 17
| 589 | N-ary Tree Preorder Traversal | [C++](../submissions/cpp/589.cpp) | Tree | Easy | 65.1% | 153 | 22
| 590 | N-ary Tree Postorder Traversal | [C++](../submissions/cpp/590.cpp) | Tree | Easy | 65.1% | 192 | 31
| 591 | Tag Validator |  | String, Stack | Hard | 31.3% | 49 | 241
| 592 | Fraction Addition and Subtraction |  | Math | Medium | 46.4% | 105 | 206
| 593 | Valid Square |  | Math | Medium | 39.9% | 109 | 234
| 594 | Longest Harmonious Subsequence |  | Hash Table | Easy | 42.6% | 351 | 45
| 595 | Big Countries | [MySQL](../submissions/mysql/595.sql) | None | Easy | 72.5% | 334 | 424
| 596 | Classes More Than 5 Students |  | None | Easy | 34.2% | 131 | 341
| 597 | Friend Requests I: Overall Acceptance Rate |  | None | Easy | 39.0% | 74 | 78
| 598 | Range Addition II |  | Math | Easy | 48.3% | 164 | 428
| 599 | Minimum Index Sum of Two Lists |  | Hash Table | Easy | 46.9% | 304 | 129
| 600 | Non-negative Integers without Consecutive Ones |  | Dynamic Programming | Hard | 32.2% | 204 | 57
| 601 | Human Traffic of Stadium |  | None | Hard | 34.8% | 65 | 142
| 602 | Friend Requests II: Who Has the Most Friends |  | None | Medium | 43.2% | 64 | 26
| 603 | Consecutive Available Seats |  | None | Easy | 56.2% | 69 | 2
| 604 | Design Compressed String Iterator |  | Design | Easy | 34.1% | 142 | 75
| 605 | Can Place Flowers | [C++](../submissions/cpp/605.cpp) | Array | Easy | 30.5% | 398 | 233
| 606 | Construct String from Binary Tree | [C++](../submissions/cpp/606.cpp) | String, Tree | Easy | 50.8% | 477 | 641
| 607 | Sales Person |  | None | Easy | 53.5% | 48 | 7
| 608 | Tree Node |  | None | Medium | 56.6% | 82 | 4
| 609 | Find Duplicate File in System |  | Hash Table, String | Medium | 53.7% | 192 | 314
| 610 | Triangle Judgement |  | None | Easy | 60.4% | 38 | 8
| 611 | Valid Triangle Number |  | Array | Medium | 43.7% | 477 | 61
| 612 | Shortest Distance in a Plane |  | None | Medium | 52.3% | 38 | 6
| 613 | Shortest Distance in a Line |  | None | Easy | 71.7% | 69 | 10
| 614 | Second Degree Follower |  | None | Medium | 22.7% | 20 | 184
| 615 | Average Salary: Departments VS Company |  | None | Hard | 34.4% | 28 | 7
| 616 | Add Bold Tag in String |  | String | Medium | 38.5% | 274 | 30
| 617 | Merge Two Binary Trees | [C++](../submissions/cpp/617.cpp) | Tree | Easy | 68.7% | 1552 | 114
| 618 | Students Report By Geography |  | None | Hard | 41.6% | 12 | 38
| 619 | Biggest Single Number |  | None | Easy | 37.7% | 28 | 26
| 620 | Not Boring Movies |  | None | Easy | 60.7% | 161 | 176
| 621 | Task Scheduler |  | Array, Greedy, Queue | Medium | 43.7% | 1289 | 201
| 622 | Design Circular Queue |  | Design, Queue | Medium | 38.1% | 173 | 30
| 623 | Add One Row to Tree | [C++](../submissions/cpp/623.cpp) | Tree | Medium | 46.7% | 236 | 94
| 624 | Maximum Distance in Arrays |  | Array, Hash Table | Easy | 36.6% | 223 | 35
| 625 | Minimum Factorization |  | Math, Recursion | Medium | 31.7% | 62 | 49
| 626 | Exchange Seats |  | None | Medium | 51.7% | 132 | 122
| 627 | Swap Salary |  | None | Easy | 68.4% | 252 | 175
| 628 | Maximum Product of Three Numbers | [C++](../submissions/cpp/628.cpp) | Array, Math | Easy | 45.3% | 563 | 238
| 629 | K Inverse Pairs Array |  | Dynamic Programming | Hard | 28.3% | 180 | 66
| 630 | Course Schedule III |  | Greedy | Hard | 30.6% | 326 | 20
| 631 | Design Excel Sum Formula |  | Design | Hard | 28.6% | 58 | 64
| 632 | Smallest Range |  | Hash Table, Two Pointers, String | Hard | 45.4% | 561 | 15
| 633 | Sum of Square Numbers |  | Math | Easy | 32.7% | 283 | 197
| 634 | Find the Derangement of An Array |  | Math | Medium | 37.1% | 77 | 91
| 635 | Design Log Storage System |  | String, Design | Medium | 52.4% | 130 | 58
| 636 | Exclusive Time of Functions |  | Stack | Medium | 47.4% | 366 | 559
| 637 | Average of Levels in Binary Tree | [C++](../submissions/cpp/637.cpp) | Tree | Easy | 57.5% | 726 | 116
| 638 | Shopping Offers | [C++](../submissions/cpp/638.cpp) | Dynamic Programming, Depth-first Search | Medium | 47.3% | 320 | 294
| 639 | Decode Ways II |  | Dynamic Programming | Hard | 24.4% | 224 | 321
| 640 | Solve the Equation |  | Math | Medium | 39.7% | 141 | 334
| 641 | Design Circular Deque |  | Design, Queue | Medium | 48.7% | 66 | 24
| 642 | Design Search Autocomplete System |  | Design, Trie | Hard | 34.9% | 342 | 29
| 643 | Maximum Average Subarray I | [C++](../submissions/cpp/643.cpp) | Array | Easy | 38.6% | 402 | 76
| 644 | Maximum Average Subarray II |  | Array, Binary Search | Hard | 27.3% | 243 | 31
| 645 | Set Mismatch |  | Hash Table, Math | Easy | 40.3% | 366 | 201
| 646 | Maximum Length of Pair Chain | [C++](../submissions/cpp/646.cpp) | Dynamic Programming | Medium | 47.6% | 484 | 46
| 647 | Palindromic Substrings | [C++](../submissions/cpp/647.cpp) | String, Dynamic Programming | Medium | 55.1% | 1098 | 59
| 648 | Replace Words |  | Hash Table, Trie | Medium | 50.0% | 373 | 98
| 649 | Dota2 Senate |  | Greedy | Medium | 36.9% | 179 | 137
| 650 | 2 Keys Keyboard |  | Dynamic Programming | Medium | 46.0% | 573 | 38
| 651 | 4 Keys Keyboard |  | Math, Dynamic Programming, Greedy | Medium | 49.9% | 240 | 34
| 652 | Find Duplicate Subtrees | [Python3](../submissions/python3/652.py), [C++](../submissions/cpp/652.cpp) | Tree | Medium | 43.1% | 626 | 131
| 653 | Two Sum IV - Input is a BST | [C++](../submissions/cpp/653.cpp) | Tree | Easy | 51.4% | 729 | 89
| 654 | Maximum Binary Tree | [C++](../submissions/cpp/654.cpp) | Tree | Medium | 71.3% | 864 | 93
| 655 | Print Binary Tree |  | Tree | Medium | 50.2% | 186 | 435
| 656 | Coin Path |  | Dynamic Programming | Hard | 26.3% | 108 | 58
| 657 | Robot Return to Origin | [C++](../submissions/cpp/657.cpp) | String | Easy | 70.3% | 640 | 519
| 658 | Find K Closest Elements |  | Binary Search | Medium | 36.5% | 525 | 115
| 659 | Split Array into Consecutive Subsequences |  | Heap, Greedy | Medium | 39.1% | 428 | 187
| 660 | Remove 9 |  | Math | Hard | 50.7% | 65 | 101
| 661 | Image Smoother | [C++](../submissions/cpp/661.cpp) | Array | Easy | 47.6% | 159 | 690
| 662 | Maximum Width of Binary Tree |  | Tree | Medium | 39.9% | 493 | 67
| 663 | Equal Tree Partition |  | Tree | Medium | 37.3% | 198 | 14
| 664 | Strange Printer |  | Dynamic Programming, Depth-first Search | Hard | 35.1% | 212 | 28
| 665 | Non-decreasing Array |  | Array | Easy | 19.6% | 854 | 175
| 666 | Path Sum IV |  | Tree | Medium | 51.1% | 104 | 129
| 667 | Beautiful Arrangement II | [C++](../submissions/cpp/667.cpp) | Array | Medium | 51.2% | 195 | 469
| 668 | Kth Smallest Number in Multiplication Table |  | Binary Search | Hard | 40.5% | 265 | 17
| 669 | Trim a Binary Search Tree | [C++](../submissions/cpp/669.cpp) | Tree | Easy | 59.4% | 943 | 114
| 670 | Maximum Swap |  | Array, Math | Medium | 39.2% | 480 | 40
| 671 | Second Minimum Node In a Binary Tree | [C++](../submissions/cpp/671.cpp) | Tree | Easy | 43.0% | 319 | 468
| 672 | Bulb Switcher II |  | Math | Medium | 49.1% | 80 | 620
| 673 | Number of Longest Increasing Subsequence | [C++](../submissions/cpp/673.cpp) | Dynamic Programming | Medium | 32.9% | 663 | 46
| 674 | Longest Continuous Increasing Subsequence | [C++](../submissions/cpp/674.cpp) | Array | Easy | 43.5% | 380 | 88
| 675 | Cut Off Trees for Golf Event |  | Breadth-first Search | Hard | 28.6% | 196 | 92
| 676 | Implement Magic Dictionary |  | Hash Table, Trie | Medium | 50.6% | 300 | 85
| 677 | Map Sum Pairs |  | Trie | Medium | 51.2% | 257 | 51
| 678 | Valid Parenthesis String |  | String | Medium | 31.4% | 530 | 22
| 679 | 24 Game |  | Depth-first Search | Hard | 40.9% | 289 | 68
| 680 | Valid Palindrome II |  | String | Easy | 33.5% | 584 | 40
| 681 | Next Closest Time |  | String | Medium | 41.9% | 309 | 502
| 682 | Baseball Game | [C++](../submissions/cpp/682.cpp) | Stack | Easy | 59.7% | 272 | 652
| 683 | K Empty Slots |  | Array, Binary Search Tree | Hard | 34.0% | 404 | 396
| 684 | Redundant Connection |  | Tree, Union Find, Graph | Medium | 49.5% | 481 | 172
| 685 | Redundant Connection II |  | Tree, Depth-first Search, Union Find, Graph | Hard | 29.7% | 362 | 127
| 686 | Repeated String Match |  | String | Easy | 31.3% | 422 | 396
| 687 | Longest Univalue Path | [C++](../submissions/cpp/687.cpp) | Tree, Recursion | Easy | 33.1% | 796 | 169
| 688 | Knight Probability in Chessboard |  | Dynamic Programming | Medium | 42.3% | 279 | 65
| 689 | Maximum Sum of 3 Non-Overlapping Subarrays |  | Array, Dynamic Programming | Hard | 43.1% | 494 | 29
| 690 | Employee Importance |  | Hash Table, Depth-first Search, Breadth-first Search | Easy | 52.8% | 343 | 313
| 691 | Stickers to Spell Word |  | Dynamic Programming, Backtracking | Hard | 36.9% | 208 | 21
| 692 | Top K Frequent Words |  | Hash Table, Heap, Trie | Medium | 44.2% | 580 | 55
| 693 | Binary Number with Alternating Bits | [C++](../submissions/cpp/693.cpp) | Bit Manipulation | Easy | 57.4% | 264 | 68
| 694 | Number of Distinct Islands |  | Hash Table, Depth-first Search | Medium | 49.1% | 295 | 18
| 695 | Max Area of Island | [Python3](../submissions/python3/695.py), [C++](../submissions/cpp/695.cpp) | Array, Depth-first Search | Medium | 55.1% | 921 | 54
| 696 | Count Binary Substrings |  | String | Easy | 51.9% | 539 | 97
| 697 | Degree of an Array | [C++](../submissions/cpp/697.cpp) | Array | Easy | 48.4% | 423 | 341
| 698 | Partition to K Equal Sum Subsets |  | Dynamic Programming, Recursion | Medium | 40.4% | 626 | 41
| 699 | Falling Squares |  | Segment Tree, Binary Search Tree | Hard | 39.0% | 138 | 23
| 700 | Search in a Binary Search Tree | [C++](../submissions/cpp/700.cpp) | Tree | Easy | 65.6% | 207 | 85
| 701 | Insert into a Binary Search Tree | [C++](../submissions/cpp/701.cpp) | Tree | Medium | 72.4% | 208 | 25
| 702 | Search in a Sorted Array of Unknown Size |  | Binary Search | Medium | 51.9% | 79 | 7
| 703 | Kth Largest Element in a Stream |  | Heap | Easy | 42.9% | 190 | 83
| 704 | Binary Search | [Python3](../submissions/python3/704.py), [C++](../submissions/cpp/704.cpp) | Binary Search | Easy | 44.0% | 152 | 20
| 705 | Design HashSet |  | Hash Table, Design | Easy | 48.0% | 83 | 27
| 706 | Design HashMap |  | Hash Table, Design | Easy | 52.5% | 148 | 39
| 707 | Design Linked List | [C++](../submissions/cpp/707.cpp) | Linked List, Design | Easy | 21.8% | 204 | 62
| 708 | Insert into a Cyclic Sorted List |  | Linked List | Medium | 28.5% | 66 | 96
| 709 | To Lower Case | [Python](../submissions/python/709.py), [C++](../submissions/cpp/709.cpp) | String | Easy | 75.6% | 210 | 664
| 710 | Random Pick with Blacklist |  | Hash Table, Binary Search, Sort, Random | Hard | 30.2% | 119 | 26
| 711 | Number of Distinct Islands II |  | Hash Table, Depth-first Search | Hard | 44.3% | 81 | 90
| 712 | Minimum ASCII Delete Sum for Two Strings |  | Dynamic Programming | Medium | 52.9% | 469 | 31
| 713 | Subarray Product Less Than K |  | Array, Two Pointers | Medium | 35.1% | 491 | 22
| 714 | Best Time to Buy and Sell Stock with Transaction Fee | [Python3](../submissions/python3/714.py), [C++](../submissions/cpp/714.cpp) | Array, Dynamic Programming, Greedy | Medium | 49.1% | 756 | 27
| 715 | Range Module |  | Array, Segment Tree, Binary Search Tree | Hard | 33.2% | 235 | 21
| 716 | Max Stack |  | Design | Easy | 38.8% | 228 | 41
| 717 | 1-bit and 2-bit Characters | [C++](../submissions/cpp/717.cpp) | Array | Easy | 48.7% | 219 | 545
| 718 | Maximum Length of Repeated Subarray | [C++](../submissions/cpp/718.cpp) | Array, Hash Table, Binary Search, Dynamic Programming | Medium | 44.0% | 510 | 21
| 719 | Find K-th Smallest Pair Distance |  | Array, Binary Search, Heap | Hard | 28.3% | 440 | 17
| 720 | Longest Word in Dictionary |  | Hash Table, Trie | Easy | 43.4% | 264 | 345
| 721 | Accounts Merge |  | Depth-first Search, Union Find | Medium | 38.1% | 479 | 136
| 722 | Remove Comments |  | String | Medium | 30.0% | 133 | 427
| 723 | Candy Crush |  | Array, Two Pointers | Medium | 60.6% | 117 | 60
| 724 | Find Pivot Index | [C++](../submissions/cpp/724.cpp) | Array | Easy | 40.0% | 483 | 106
| 725 | Split Linked List in Parts | [C++](../submissions/cpp/725.cpp) | Linked List | Medium | 48.2% | 294 | 67
| 726 | Number of Atoms |  | Hash Table, Stack, Recursion | Hard | 43.8% | 168 | 71
| 727 | Minimum Window Subsequence |  | Dynamic Programming | Hard | 35.3% | 257 | 11
| 728 | Self Dividing Numbers |  | Math | Easy | 68.4% | 374 | 193
| 729 | My Calendar I |  | Array | Medium | 45.7% | 303 | 24
| 730 | Count Different Palindromic Subsequences |  | String, Dynamic Programming | Hard | 37.1% | 236 | 22
| 731 | My Calendar II | [Python3](../submissions/python3/731.py), [C++](../submissions/cpp/731.cpp) | Array, Binary Search Tree | Medium | 42.0% | 265 | 50
| 732 | My Calendar III |  | Segment Tree, Binary Search Tree | Hard | 52.4% | 164 | 77
| 733 | Flood Fill |  | Depth-first Search | Easy | 49.2% | 326 | 81
| 734 | Sentence Similarity |  | Hash Table | Easy | 39.9% | 102 | 177
| 735 | Asteroid Collision |  | Stack | Medium | 37.4% | 336 | 48
| 736 | Parse Lisp Expression |  | String | Hard | 42.8% | 108 | 93
| 737 | Sentence Similarity II |  | Depth-first Search, Union Find | Medium | 42.2% | 252 | 17
| 738 | Monotone Increasing Digits |  | Greedy | Medium | 41.0% | 205 | 33
| 739 | Daily Temperatures |  | Hash Table, Stack | Medium | 57.8% | 923 | 28
| 740 | Delete and Earn | [C++](../submissions/cpp/740.cpp) | Dynamic Programming | Medium | 44.6% | 485 | 42
| 741 | Cherry Pickup |  | Dynamic Programming | Hard | 27.0% | 296 | 21
| 742 | Closest Leaf in a Binary Tree |  | Tree | Medium | 37.4% | 189 | 63
| 743 | Network Delay Time |  | Heap, Depth-first Search, Breadth-first Search, Graph | Easy | 39.0% | 421 | 128
| 744 | Find Smallest Letter Greater Than Target | [C++](../submissions/cpp/744.cpp) | Binary Search | Easy | 43.4% | 179 | 267
| 745 | Prefix and Suffix Search |  | Trie | Hard | 28.6% | 162 | 128
| 746 | Min Cost Climbing Stairs | [C++](../submissions/cpp/746.cpp) | Array, Dynamic Programming | Easy | 45.3% | 850 | 180
| 747 | Largest Number At Least Twice of Others | [C++](../submissions/cpp/747.cpp) | Array | Easy | 40.1% | 176 | 353
| 748 | Shortest Completing Word | [C++](../submissions/cpp/748.cpp) | Hash Table | Easy | 53.0% | 91 | 338
| 749 | Contain Virus |  | Depth-first Search | Hard | 40.4% | 42 | 132
| 750 | Number Of Corner Rectangles |  | Dynamic Programming | Medium | 62.7% | 244 | 26
| 751 | IP to CIDR |  | Bit Manipulation | Easy | 56.8% | 53 | 387
| 752 | Open the Lock |  | Breadth-first Search | Medium | 43.5% | 279 | 18
| 753 | Cracking the Safe |  | Math, Depth-first Search | Hard | 44.0% | 210 | 232
| 754 | Reach a Number |  | Math | Easy | 31.1% | 205 | 167
| 755 | Pour Water |  | Array | Medium | 37.7% | 82 | 129
| 756 | Pyramid Transition Matrix |  | Bit Manipulation, Depth-first Search | Medium | 49.5% | 146 | 223
| 757 | Set Intersection Size At Least Two |  | Greedy | Hard | 36.0% | 134 | 11
| 758 | Bold Words in String |  | String | Easy | 41.4% | 77 | 47
| 759 | Employee Free Time |  | Heap, Greedy | Hard | 59.4% | 157 | 11
| 760 | Find Anagram Mappings |  | Hash Table | Easy | 78.4% | 253 | 116
| 761 | Special Binary String |  | String, Recursion | Hard | 48.6% | 124 | 42
| 762 | Prime Number of Set Bits in Binary Representation | [C++](../submissions/cpp/762.cpp) | Bit Manipulation | Easy | 57.3% | 139 | 198
| 763 | Partition Labels |  | Two Pointers, Greedy | Medium | 67.4% | 688 | 39
| 764 | Largest Plus Sign | [C++](../submissions/cpp/764.cpp) | Dynamic Programming | Medium | 42.3% | 229 | 45
| 765 | Couples Holding Hands |  | Greedy, Union Find, Graph | Hard | 50.3% | 261 | 41
| 766 | Toeplitz Matrix | [C++](../submissions/cpp/766.cpp) | Array | Easy | 60.7% | 495 | 61
| 767 | Reorganize String |  | String, Heap, Greedy, Sort | Medium | 40.6% | 402 | 23
| 768 | Max Chunks To Make Sorted II |  | Array | Hard | 44.7% | 190 | 7
| 769 | Max Chunks To Make Sorted | [Python3](../submissions/python3/769.py), [C++](../submissions/cpp/769.cpp) | Array | Medium | 50.4% | 380 | 63
| 770 | Basic Calculator IV |  | Hash Table, String, Stack | Hard | 44.1% | 33 | 213
| 771 | Jewels and Stones | [C++](../submissions/cpp/771.cpp), [Python3](../submissions/python3/771.py) | Hash Table | Easy | 82.4% | 1166 | 211
| 772 | Basic Calculator III |  | String, Stack | Hard | 43.1% | 162 | 45
| 773 | Sliding Puzzle |  | Breadth-first Search | Hard | 49.4% | 223 | 8
| 774 | Minimize Max Distance to Gas Station |  | Binary Search | Hard | 38.7% | 180 | 29
| 775 | Global and Local Inversions |  | Array, Math | Medium | 37.0% | 177 | 85
| 776 | Split BST |  | Binary Search Tree | Medium | 51.4% | 299 | 18
| 777 | Swap Adjacent in LR String |  | Brainteaser | Medium | 32.4% | 167 | 146
| 778 | Swim in Rising Water |  | Binary Search, Heap, Depth-first Search, Union Find | Hard | 45.9% | 251 | 24
| 779 | K-th Symbol in Grammar |  | Recursion | Medium | 38.1% | 164 | 63
| 780 | Reaching Points |  | Math | Hard | 26.4% | 191 | 33
| 781 | Rabbits in Forest |  | Hash Table, Math | Medium | 50.5% | 121 | 164
| 782 | Transform to Chessboard |  | Array, Math | Hard | 38.9% | 70 | 78
| 783 | Minimum Distance Between BST Nodes |  | Binary Search Tree | Easy | 49.5% | 282 | 64
| 784 | Letter Case Permutation | [C++](../submissions/cpp/784.cpp) | Backtracking, Bit Manipulation | Easy | 54.7% | 485 | 61
| 785 | Is Graph Bipartite? |  | Depth-first Search, Breadth-first Search, Graph | Medium | 41.7% | 472 | 57
| 786 | K-th Smallest Prime Fraction |  | Binary Search, Heap | Hard | 36.8% | 170 | 9
| 787 | Cheapest Flights Within K Stops | [C++](../submissions/cpp/787.cpp) | Dynamic Programming, Heap, Breadth-first Search | Medium | 33.1% | 578 | 20
| 788 | Rotated Digits | [C++](../submissions/cpp/788.cpp) | String | Easy | 52.5% | 152 | 519
| 789 | Escape The Ghosts |  | Math | Medium | 54.2% | 103 | 216
| 790 | Domino and Tromino Tiling |  | Dynamic Programming | Medium | 34.8% | 200 | 95
| 791 | Custom Sort String |  | String | Medium | 60.4% | 293 | 94
| 792 | Number of Matching Subsequences |  | Array | Medium | 40.1% | 378 | 27
| 793 | Preimage Size of Factorial Zeroes Function |  | Binary Search | Hard | 39.1% | 82 | 36
| 794 | Valid Tic-Tac-Toe State |  | Math, Recursion | Medium | 28.6% | 78 | 210
| 795 | Number of Subarrays with Bounded Maximum |  | Array | Medium | 42.0% | 280 | 26
| 796 | Rotate String |  | None | Easy | 48.8% | 321 | 33
| 797 | All Paths From Source to Target |  | None | Medium | 68.8% | 301 | 30
| 798 | Smallest Rotation with Highest Score |  | None | Hard | 37.8% | 133 | 11
| 799 | Champagne Tower |  | None | Medium | 32.6% | 227 | 13
| 800 | Similar RGB Color |  | Math, String | Easy | 58.2% | 34 | 213
| 801 | Minimum Swaps To Make Sequences Increasing | [C++](../submissions/cpp/801.cpp) | Dynamic Programming | Medium | 33.7% | 408 | 23
| 802 | Find Eventual Safe States |  | Depth-first Search, Graph | Medium | 42.1% | 269 | 41
| 803 | Bricks Falling When Hit |  | Union Find | Hard | 26.7% | 235 | 74
| 804 | Unique Morse Code Words | [C++](../submissions/cpp/804.cpp) | String | Easy | 73.1% | 366 | 240
| 805 | Split Array With Same Average |  | Math | Hard | 23.2% | 176 | 37
| 806 | Number of Lines To Write String |  | None | Easy | 62.1% | 127 | 458
| 807 | Max Increase to Keep City Skyline |  | None | Medium | 80.7% | 389 | 83
| 808 | Soup Servings |  | Dynamic Programming | Medium | 35.4% | 78 | 265
| 809 | Expressive Words |  | String | Medium | 41.3% | 84 | 239
| 810 | Chalkboard XOR Game |  | Math | Hard | 42.6% | 30 | 121
| 811 | Subdomain Visit Count | [C++](../submissions/cpp/811.cpp) | Hash Table | Easy | 63.0% | 197 | 284
| 812 | Largest Triangle Area |  | Math | Easy | 54.5% | 86 | 567
| 813 | Largest Sum of Averages | [C++](../submissions/cpp/813.cpp) | Dynamic Programming | Medium | 43.1% | 420 | 14
| 814 | Binary Tree Pruning | [C++](../submissions/cpp/814.cpp) | Tree | Medium | 69.4% | 414 | 11
| 815 | Bus Routes |  | Breadth-first Search | Hard | 38.1% | 322 | 13
| 816 | Ambiguous Coordinates |  | String | Medium | 42.9% | 63 | 130
| 817 | Linked List Components | [C++](../submissions/cpp/817.cpp) | Linked List | Medium | 53.2% | 172 | 387
| 818 | Race Car |  | Dynamic Programming, Heap | Hard | 33.3% | 214 | 26
| 819 | Most Common Word |  | String | Easy | 41.2% | 236 | 479
| 820 | Short Encoding of Words |  | None | Medium | 45.3% | 128 | 38
| 821 | Shortest Distance to a Character |  | None | Easy | 62.2% | 449 | 40
| 822 | Card Flipping Game |  | None | Medium | 39.7% | 44 | 274
| 823 | Binary Trees With Factors |  | None | Medium | 31.1% | 156 | 20
| 824 | Goat Latin | [C++](../submissions/cpp/824.cpp) | String | Easy | 56.4% | 111 | 318
| 825 | Friends Of Appropriate Ages |  | Array | Medium | 34.5% | 133 | 277
| 826 | Most Profit Assigning Work |  | Two Pointers | Medium | 34.0% | 172 | 28
| 827 | Making A Large Island |  | Depth-first Search | Hard | 41.9% | 203 | 7
| 828 | Unique Letter String |  | Two Pointers | Hard | 37.6% | 164 | 19
| 829 | Consecutive Numbers Sum |  | Math | Hard | 31.3% | 145 | 150
| 830 | Positions of Large Groups | [C++](../submissions/cpp/830.cpp) | Array | Easy | 47.1% | 161 | 39
| 831 | Masking Personal Information | [C++](../submissions/cpp/831.cpp) | String | Medium | 41.9% | 38 | 159
| 832 | Flipping an Image | [C++](../submissions/cpp/832.cpp) | Array | Easy | 70.8% | 393 | 75
| 833 | Find And Replace in String | [C++](../submissions/cpp/833.cpp) | String | Medium | 43.8% | 119 | 160
| 834 | Sum of Distances in Tree |  | Tree, Depth-first Search | Hard | 36.9% | 326 | 19
| 835 | Image Overlap |  | Array | Medium | 49.6% | 146 | 217
| 836 | Rectangle Overlap |  | Math | Easy | 45.3% | 249 | 52
| 837 | New 21 Game | [C++](../submissions/cpp/837.cpp) | Dynamic Programming | Medium | 28.0% | 205 | 120
| 838 | Push Dominoes | [C++](../submissions/cpp/838.cpp) | Two Pointers, Dynamic Programming | Medium | 42.7% | 249 | 20
| 839 | Similar String Groups |  | Depth-first Search, Union Find, Graph | Hard | 33.1% | 117 | 46
| 840 | Magic Squares In Grid | [C++](../submissions/cpp/840.cpp) | Array | Easy | 35.1% | 57 | 498
| 841 | Keys and Rooms | [C++](../submissions/cpp/841.cpp) | Depth-first Search, Graph | Medium | 58.5% | 341 | 25
| 842 | Split Array into Fibonacci Sequence |  | String, Backtracking, Greedy | Medium | 34.5% | 186 | 57
| 843 | Guess the Word |  | Minimax | Hard | 41.3% | 178 | 188
| 844 | Backspace String Compare | [C++](../submissions/cpp/844.cpp) | Two Pointers, Stack | Easy | 44.6% | 448 | 36
| 845 | Longest Mountain in Array |  | Two Pointers | Medium | 33.5% | 239 | 9
| 846 | Hand of Straights | [C++](../submissions/cpp/846.cpp) | Map | Medium | 47.7% | 229 | 28
| 847 | Shortest Path Visiting All Nodes |  | Dynamic Programming, Breadth-first Search | Hard | 44.5% | 212 | 20
| 848 | Shifting Letters | [C++](../submissions/cpp/848.cpp) | String | Medium | 38.0% | 120 | 19
| 849 | Maximize Distance to Closest Person | [C++](../submissions/cpp/849.cpp) | Array | Easy | 40.0% | 299 | 48
| 850 | Rectangle Area II |  | Segment Tree | Hard | 42.5% | 130 | 19
| 851 | Loud and Rich |  | Depth-first Search | Medium | 46.0% | 134 | 143
| 852 | Peak Index in a Mountain Array | [C++](../submissions/cpp/852.cpp) | Binary Search | Easy | 68.5% | 201 | 468
| 853 | Car Fleet | [C++](../submissions/cpp/853.cpp) | Stack | Medium | 37.5% | 175 | 117
| 854 | K-Similar Strings |  | Breadth-first Search, Graph | Hard | 31.9% | 124 | 15
| 855 | Exam Room |  | Map | Medium | 36.1% | 228 | 113
| 856 | Score of Parentheses |  | String, Stack | Medium | 54.7% | 419 | 19
| 857 | Minimum Cost to Hire K Workers |  | Heap | Hard | 46.7% | 373 | 34
| 858 | Mirror Reflection |  | Math | Medium | 51.3% | 108 | 180
| 859 | Buddy Strings | [C++](../submissions/cpp/859.cpp) | String | Easy | 27.2% | 222 | 126
| 860 | Lemonade Change | [C++](../submissions/cpp/860.cpp) | Greedy | Easy | 50.2% | 221 | 43
| 861 | Score After Flipping Matrix | [C++](../submissions/cpp/861.cpp) | Greedy | Medium | 68.1% | 188 | 54
| 862 | Shortest Subarray with Sum at Least K |  | Binary Search, Queue | Hard | 21.2% | 350 | 8
| 863 | All Nodes Distance K in Binary Tree | [C++](../submissions/cpp/863.cpp) | Tree, Depth-first Search, Breadth-first Search | Medium | 44.9% | 527 | 8
| 864 | Shortest Path to Get All Keys |  | Heap, Breadth-first Search | Hard | 34.6% | 153 | 3
| 865 | Smallest Subtree with all the Deepest Nodes | [C++](../submissions/cpp/865.cpp) | Tree | Medium | 53.9% | 269 | 67
| 866 | Prime Palindrome |  | Math | Medium | 18.7% | 65 | 206
| 867 | Transpose Matrix | [Python3](../submissions/python3/867.py), [C++](../submissions/cpp/867.cpp) | Array | Easy | 63.6% | 160 | 163
| 868 | Binary Gap | [C++](../submissions/cpp/868.cpp) | Math | Easy | 59.1% | 89 | 226
| 869 | Reordered Power of 2 | [C++](../submissions/cpp/869.cpp) | Math | Medium | 49.1% | 98 | 48
| 870 | Advantage Shuffle |  | Array, Greedy | Medium | 40.7% | 205 | 16
| 871 | Minimum Number of Refueling Stops |  | Dynamic Programming, Heap | Hard | 27.6% | 276 | 5
| 872 | Leaf-Similar Trees | [C++](../submissions/cpp/872.cpp) | Tree, Depth-first Search | Easy | 61.6% | 294 | 15
| 873 | Length of Longest Fibonacci Subsequence | [Python3](../submissions/python3/873.py), [C++](../submissions/cpp/873.cpp) | Array, Dynamic Programming | Medium | 43.7% | 280 | 10
| 874 | Walking Robot Simulation |  | Greedy | Easy | 30.1% | 57 | 337
| 875 | Koko Eating Bananas |  | Binary Search | Medium | 43.7% | 212 | 20
| 876 | Middle of the Linked List | [C++](../submissions/cpp/876.cpp) | Linked List | Easy | 63.2% | 366 | 28
| 877 | Stone Game | [C++](../submissions/cpp/877.cpp) | Math, Dynamic Programming | Medium | 60.0% | 199 | 379
| 878 | Nth Magical Number |  | Math, Binary Search | Hard | 24.3% | 81 | 26
| 879 | Profitable Schemes |  | Dynamic Programming | Hard | 35.0% | 121 | 12
| 880 | Decoded String at Index | [C++](../submissions/cpp/880.cpp) | Stack | Medium | 22.9% | 174 | 39
| 881 | Boats to Save People | [C++](../submissions/cpp/881.cpp) | Two Pointers, Greedy | Medium | 42.1% | 175 | 21
| 882 | Reachable Nodes In Subdivided Graph |  | Heap | Hard | 36.3% | 70 | 69
| 883 | Projection Area of 3D Shapes | [C++](../submissions/cpp/883.cpp) | Math | Easy | 64.8% | 110 | 358
| 884 | Uncommon Words from Two Sentences | [C++](../submissions/cpp/884.cpp) | Hash Table | Easy | 60.6% | 155 | 44
| 885 | Spiral Matrix III |  | Math | Medium | 63.0% | 69 | 98
| 886 | Possible Bipartition | [C++](../submissions/cpp/886.cpp) | Depth-first Search | Medium | 40.0% | 217 | 13
| 887 | Super Egg Drop |  | Math, Binary Search, Dynamic Programming | Hard | 24.2% | 252 | 26
| 888 | Fair Candy Swap | [C++](../submissions/cpp/888.cpp) | Array | Easy | 54.6% | 208 | 62
| 889 | Construct Binary Tree from Preorder and Postorder Traversal | [C++](../submissions/cpp/889.cpp) | Tree | Medium | 57.3% | 275 | 18
| 890 | Find and Replace Pattern | [C++](../submissions/cpp/890.cpp) | String | Medium | 69.9% | 248 | 21
| 891 | Sum of Subsequence Widths |  | Array, Math | Hard | 27.2% | 101 | 66
| 892 | Surface Area of 3D Shapes |  | Math, Geometry | Easy | 55.3% | 113 | 131
| 893 | Groups of Special-Equivalent Strings |  | String | Easy | 61.5% | 114 | 373
| 894 | All Possible Full Binary Trees |  | Tree, Recursion | Medium | 68.2% | 276 | 26
| 895 | Maximum Frequency Stack |  | Hash Table, Stack | Hard | 49.6% | 232 | 4
| 896 | Monotonic Array | [Python3](../submissions/python3/896.py), [C++](../submissions/cpp/896.cpp) | Array | Easy | 54.6% | 174 | 19
| 897 | Increasing Order Search Tree | [C++](../submissions/cpp/897.cpp) | Tree, Depth-first Search | Easy | 61.2% | 166 | 182
| 898 | Bitwise ORs of Subarrays |  | Dynamic Programming, Bit Manipulation | Medium | 32.2% | 188 | 42
| 899 | Orderly Queue |  | Math, String | Hard | 45.2% | 79 | 103
| 900 | RLE Iterator | [C++](../submissions/cpp/900.cpp) | Array | Medium | 47.7% | 79 | 37
| 901 | Online Stock Span |  | Stack | Medium | 44.8% | 152 | 42
| 902 | Numbers At Most N Given Digit Set |  | Math, Dynamic Programming | Hard | 27.2% | 64 | 21
| 903 | Valid Permutations for DI Sequence |  | Divide and Conquer, Dynamic Programming | Hard | 40.8% | 118 | 16
| 904 | Fruit Into Baskets | [C++](../submissions/cpp/904.cpp) | Two Pointers | Medium | 40.7% | 272 | 301
| 905 | Sort Array By Parity | [Python](../submissions/python/905.py), [C++](../submissions/cpp/905.cpp) | Array | Easy | 71.7% | 312 | 36
| 906 | Super Palindromes |  | Math | Hard | 29.2% | 37 | 103
| 907 | Sum of Subarray Minimums |  | Array, Stack | Medium | 23.7% | 344 | 22
| 908 | Smallest Range I |  | Math | Easy | 63.9% | 68 | 389
| 909 | Snakes and Ladders |  | Breadth-first Search | Medium | 28.3% | 71 | 211
| 910 | Smallest Range II |  | Math, Greedy | Medium | 21.9% | 119 | 93
| 911 | Online Election |  | Binary Search | Medium | 42.3% | 118 | 63
| 913 | Cat and Mouse |  | Breadth-first Search, Minimax | Hard | 25.7% | 122 | 16
| 914 | X of a Kind in a Deck of Cards | [Python3](../submissions/python3/914.py), [C++](../submissions/cpp/914.cpp) | Array, Math | Easy | 34.3% | 144 | 27
| 915 | Partition Array into Disjoint Intervals |  | Array | Medium | 41.4% | 132 | 11
| 916 | Word Subsets |  | String | Medium | 43.6% | 115 | 39
| 917 | Reverse Only Letters |  | String | Easy | 56.1% | 159 | 19
| 918 | Maximum Sum Circular Subarray |  | Array | Medium | 27.7% | 210 | 12
| 919 | Complete Binary Tree Inserter | [C++](../submissions/cpp/919.cpp) | Tree | Medium | 54.5% | 88 | 21
| 920 | Number of Music Playlists |  | Dynamic Programming | Hard | 42.5% | 144 | 17
| 921 | Minimum Add to Make Parentheses Valid |  | Stack, Greedy | Medium | 69.5% | 154 | 16
| 922 | Sort Array By Parity II | [C++](../submissions/cpp/922.cpp) | Array, Sort | Easy | 66.4% | 167 | 16
| 923 | 3Sum With Multiplicity |  | Two Pointers | Medium | 30.6% | 126 | 17
| 924 | Minimize Malware Spread |  | Depth-first Search, Union Find | Hard | 37.6% | 88 | 70
| 925 | Long Pressed Name |  | Two Pointers, String | Easy | 44.4% | 141 | 11
| 926 | Flip String to Monotone Increasing |  | Array | Medium | 46.7% | 220 | 10
| 927 | Three Equal Parts |  | Math, Binary Search, Greedy | Hard | 28.6% | 62 | 22
| 928 | Minimize Malware Spread II |  | Depth-first Search, Union Find, Graph | Hard | 38.3% | 52 | 11
| 929 | Unique Email Addresses | [Python3](../submissions/python3/929.py), [C++](../submissions/cpp/929.cpp) | String | Easy | 79.8% | 270 | 71
| 930 | Binary Subarrays With Sum |  | Hash Table, Two Pointers | Medium | 35.6% | 144 | 9
| 931 | Minimum Falling Path Sum | [C++](../submissions/cpp/931.cpp) | Dynamic Programming | Medium | 56.6% | 152 | 14
| 932 | Beautiful Array |  | Divide and Conquer | Medium | 49.7% | 106 | 136
| 933 | Number of Recent Calls | [C++](../submissions/cpp/933.cpp), [Python3](../submissions/python3/933.py) | Queue | Easy | 67.4% | 79 | 251
| 934 | Shortest Bridge |  | Depth-first Search, Breadth-first Search | Medium | 42.6% | 176 | 11
| 935 | Knight Dialer |  | Dynamic Programming | Medium | 35.8% | 111 | 26
| 936 | Stamping The Sequence |  | String, Greedy | Hard | 33.8% | 58 | 19
| 937 | Reorder Log Files |  | String | Easy | 57.7% | 52 | 155
| 938 | Range Sum of BST |  | Binary Search Tree | Medium | 80.9% | 137 | 16
| 939 | Minimum Area Rectangle |  | Hash Table | Medium | 47.0% | 116 | 27
| 940 | Distinct Subsequences II |  | Dynamic Programming | Hard | 36.5% | 129 | 7
| 941 | Valid Mountain Array | [Python3](../submissions/python3/941.py), [C++](../submissions/cpp/941.cpp) | Array | Easy | 34.9% | 71 | 17
| 942 | DI String Match |  | Math | Easy | 69.8% | 196 | 54
| 943 | Find the Shortest Superstring |  | Dynamic Programming | Hard | 31.4% | 80 | 37
| 944 | Delete Columns to Make Sorted | [C++](../submissions/cpp/944.cpp) | Greedy | Easy | 70.1% | 29 | 448
| 945 | Minimum Increment to Make Array Unique |  | Array | Medium | 41.0% | 92 | 5
| 946 | Validate Stack Sequences |  | Stack | Medium | 57.9% | 127 | 3
| 947 | Most Stones Removed with Same Row or Column |  | Depth-first Search, Union Find | Medium | 52.4% | 179 | 40
| 948 | Bag of Tokens |  | Greedy | Medium | 38.5% | 53 | 37
| 949 | Largest Time for Given Digits | [C++](../submissions/cpp/949.cpp) | Math | Easy | 33.0% | 42 | 122
| 950 | Reveal Cards In Increasing Order |  | Array | Medium | 71.4% | 151 | 31
| 951 | Flip Equivalent Binary Trees | [C++](../submissions/cpp/951.cpp) | Tree | Medium | 65.4% | 106 | 5
| 952 | Largest Component Size by Common Factor |  | Math, Union Find | Hard | 23.3% | 65 | 23
| 953 | Verifying an Alien Dictionary | [C++](../submissions/cpp/953.cpp) | Hash Table | Easy | 57.2% | 75 | 27
| 954 | Array of Doubled Pairs | [C++](../submissions/cpp/954.cpp) | Array, Hash Table | Medium | 33.4% | 66 | 8
| 955 | Delete Columns to Make Sorted II |  | Greedy | Medium | 30.1% | 66 | 10
| 956 | Tallest Billboard |  | Dynamic Programming | Hard | 36.0% | 98 | 5
| 957 | Prison Cells After N Days | [C++](../submissions/cpp/957.cpp) | Hash Table | Medium | 36.3% | 39 | 53
| 958 | Check Completeness of a Binary Tree | [C++](../submissions/cpp/958.cpp) | Tree | Medium | 45.2% | 95 | 3
| 959 | Regions Cut By Slashes |  | Depth-first Search, Union Find, Graph | Medium | 62.3% | 118 | 33
| 960 | Delete Columns to Make Sorted III |  | Dynamic Programming | Hard | 51.5% | 75 | 1
| 961 | N-Repeated Element in Size 2N Array | [C++](../submissions/cpp/961.cpp) | Hash Table | Easy | 73.4% | 65 | 61
| 962 | Maximum Width Ramp | [C++](../submissions/cpp/962.cpp) | Array | Medium | 37.5% | 149 | 6
| 963 | Minimum Area Rectangle II |  | Math, Geometry | Medium | 40.1% | 32 | 55
| 964 | Least Operators to Express Number |  | Math, Dynamic Programming | Hard | 40.0% | 41 | 13
| 965 | Univalued Binary Tree | [C++](../submissions/cpp/965.cpp), [Python3](../submissions/python3/965.py) | Tree | Easy | 69.7% | 64 | 16
| 966 | Vowel Spellchecker | [Python3](../submissions/python3/966.py), [C++](../submissions/cpp/966.cpp) | Hash Table, String | Medium | 37.4% | 40 | 74
| 967 | Numbers With Same Consecutive Differences | [Python3](../submissions/python3/967.py), [C++](../submissions/cpp/967.cpp) | Dynamic Programming | Medium | 35.2% | 53 | 9
| 968 | Binary Tree Cameras |  | Dynamic Programming, Tree, Depth-first Search | Hard | 32.6% | 124 | 6
| 969 | Pancake Sorting | [Python3](../submissions/python3/969.py), [C++](../submissions/cpp/969.cpp) | Array, Sort | Medium | 62.5% | 57 | 61
| 970 | Powerful Integers | [Python3](../submissions/python3/970.py), [C++](../submissions/cpp/970.cpp) | Math | Easy | 38.3% | 28 | 51
| 971 | Flip Binary Tree To Match Preorder Traversal | [C++](../submissions/cpp/971.cpp) | Tree, Depth-first Search | Medium | 41.7% | 55 | 27
| 972 | Equal Rational Numbers |  | Math | Hard | 39.4% | 12 | 66
| 973 | K Closest Points to Origin | [Python3](../submissions/python3/973.py), [C++](../submissions/cpp/973.cpp) | Math, Divide and Conquer, Sort | Easy | 68.4% | 54 | 11
| 974 | Subarray Sums Divisible by K | [C++](../submissions/cpp/974.cpp), [Python3](../submissions/python3/974.py) | Array | Medium | 37.1% | 100 | 4
| 975 | Odd Even Jump |  | Dynamic Programming, Stack | Hard | 49.9% | 73 | 7
| 976 | Largest Perimeter Triangle | [Python3](../submissions/python3/976.py), [C++](../submissions/cpp/976.cpp) | Array, Math | Easy | 56.0% | 52 | 6
