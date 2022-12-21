#!/usr/bin/env python
import time

def maxpair_prod(arr, n):
    start = time.time()
    if (n < 2):
        print("Lo Siento... No pairs here!\n")
        return None

    a = arr[0]; b = arr[1]  # Initialize

    for i in range(0, n):
        for j in range(i+1, n):
            if (arr[i]*arr[j] > a*b):
                a = arr[i]; b = arr[j]
    end = time.time()
    print(f"\nMax Pair Product is: {a},{b} ->  {a*b}", sep="")
    print(f"\nTotal time: {end-start}\n")

def main():
    n = int(input())    # Length of array
    arr = []
    for i in range(0, n):
        arr.append(int(input()))  # integer inputs for arrray of length n

    result = maxpair_prod(arr, n)

if __name__ == "__main__":
#    arr = [7, 5, 14, 2, 8, 8, 16, 1, 2, 3]
    main()

