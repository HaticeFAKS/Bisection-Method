# 📌 Bisection Method Implementation

## 📝 Overview
This project implements the **Bisection Method** in C++ to find the root of a given function. The program iteratively approximates the root using the midpoint of an interval where the function changes sign.

## 🚀 Features
- Uses **Bisection Method** for root-finding.
- Displays **error estimation** after each iteration.
- Stops execution when the **error is below a defined threshold**.
- Localized for **Turkish** language output.

## 🛠️ How It Works
1. Initializes an interval `[a, b]` where the function `F(x)` has opposite signs.
2. Iteratively computes the midpoint `c` of `[a, b]`.
3. Checks the function value `F(c)`:
   - If `F(c) == 0`, `c` is the root.
   - If `F(c)` has the same sign as `F(a)`, updates `a = c`.
   - Else, updates `b = c`.
4. Stops when the **error (difference between iterations) is sufficiently small**.
5. Prints the approximated root value.`

## 🎯 Requirements
- A C++ compiler (e.g., **GCC, Clang, MSVC**)
- Basic understanding of **numerical methods**

## ▶️ How to Run
1. Compile the program:
   ```sh
   g++ -o Khadıja_FAKSH_1220505802 main.cpp
   ```
2. Run the executable:
   ```sh
   ./Khadıja_FAKSH_1220505802
   ```

## 📜 Notes
- Ensure the initial interval `[a, b]` satisfies `F(a) * F(b) < 0`.
- Modify the `F(x)` function for different root-finding scenarios.
- Adjust the **error threshold** for desired precision.




 
