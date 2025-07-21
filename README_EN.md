# Algorithms Lab Work (1st year, Software Engineering, UlSTU, 2021)

[На русском языке](./README.md)

This project contains solutions to two classic algorithmic problems:  
1. **Coin change problem** (Greedy algorithm)  
2. **Knapsack problem** (Specific cost method)  

---

## 1. Coin Change (Greedy Algorithm)

**Problem logic**:  
Need to exchange a given amount of money using the minimal number of coins, with standard denominations (e.g., 5000, 2000, 1000 RUB, etc.).

**Implementation**:  
- User inputs the amount (`sum`).  
- The algorithm sequentially selects the largest available denomination from the `nominals` array, divides the sum by this denomination, and subtracts the result from the total sum.  
- The process repeats until the sum becomes zero.  

**Example**:  
Enter the amount: 123
2 coins of 50 RUB
1 coin of 20 RUB
1 coin of 2 RUB
1 coin of 1 RUB

## 2. Knapsack Problem (Specific Cost Method)

**Problem logic**:  
Need to select a set of items with maximum total value without exceeding the knapsack's capacity (`C`).

**Implementation**:
1. Calculate "specific cost" (value/weight) for each item
2. Sort items by this coefficient in descending order
3. Add items to the knapsack until their total weight exceeds `C`

**Example output**:
Selected items: 5 1  
Total weight: 20  
Total value: 48