# Dangling Pointer and Memory Corruption in C

This repository demonstrates a common C programming error: attempting to free memory that was not dynamically allocated using `malloc` or `calloc`. This leads to undefined behavior and potential memory corruption.

The `bug.c` file contains the erroneous code. The `bugSolution.c` file provides a corrected version.

**Understanding the Issue:**

In the erroneous code, an integer variable `x` is declared on the stack. A pointer `ptr` is then assigned the address of `x`.  The program then attempts to use `free` on `ptr`, which is invalid because `x` was not allocated using `malloc`.  `free` expects a pointer obtained from `malloc`, `calloc`, or similar functions.

Attempting to `free` memory not allocated by `malloc` results in undefined behavior. This could lead to crashes, data corruption, or other unpredictable consequences.

**Solution:**

The corrected code in `bugSolution.c` shows the appropriate way to dynamically allocate memory using `malloc` and then free it correctly. It avoids the undefined behavior associated with freeing memory not allocated via `malloc`. 