#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    int length = 1;
    long long mul = a;
    while (mul * 2 <= b && mul *2 >= a)
    {
        mul *= 2;
        length++;
    }
    cout << length;
    return 0;
}
/*
I understand that you're looking to improve your understanding of mathematical conditions like "1 ≤ i ≤ ∣A∣−1" and "A[i+1]." These conditions are commonly used in mathematics and programming. Let's break down the specific mathematical condition you mentioned:

1. **"1 ≤ i ≤ ∣A∣−1"**:
   - "i" is a variable representing the index of an element in a sequence.
   - "1 ≤ i" means that "i" must be greater than or equal to 1. In other words, it starts at index 1 or later in the sequence.
   - "i ≤ ∣A∣−1" means that "i" must be less than or equal to (∣A∣−1), where ∣A∣ represents the length or number of elements in sequence A.
   - So, this condition essentially restricts the index "i" to be within the range of valid indices in the sequence A. It ensures that "i" does not exceed the last index (∣A∣) and starts from the second index (1 or later).

2. **"A[i+1]"**:
   - "A" is the sequence or array.
   - "A[i+1]" represents the element in the sequence "A" at the index (i+1).
   - In other words, it refers to the next element in the sequence after the element at index "i."

To understand this condition in practical terms, consider the following example:

Suppose you have a sequence A = [5, 10, 15, 20, 25]. 

- For "i" from 1 to ∣A∣−1, you would consider the following:
  - When "i" is 1, "A[i]" is 5, and "A[i+1]" is 10 (the next element).
  - When "i" is 2, "A[i]" is 10, and "A[i+1]" is 15 (the next element).
  - When "i" is 3, "A[i]" is 15, and "A[i+1]" is 20 (the next element).
  - When "i" is 4, "A[i]" is 20, and "A[i+1]" is 25 (the next element).

The condition ensures that you are looking at adjacent pairs of elements in the sequence, starting from the first element (index 1) and moving through the sequence until the second-to-last element.

In summary, "1 ≤ i ≤ ∣A∣−1" and "A[i+1]" together represent a condition that examines adjacent elements in a sequence, where "i" is constrained to valid indices within the sequence.
*/