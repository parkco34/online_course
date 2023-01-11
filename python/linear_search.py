#!/usr/bin/env python
# Exercise 2.1-3 in Algorithms textbook
from random import sample, choice

def linear_search(A, v):
    # A is a sequence of integers and some value v to search for
    # Returning v = A[i] for some index i
    for i in range(len(A)):
        if A[i] == v:
            return A[i]


def main():
    A = sample(range(2, 333), 7)
    print(linear_search(A, choice(A)))

        
if __name__ == "__main__":
    main()
