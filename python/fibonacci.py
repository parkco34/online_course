#!/usr/bin/env python

def fibonacci(n):
    # Calculates the nth fibonacci number
   pass


if __name__ == "__main__":
#    print(fibonacci(int(input("Enter nth fibonacci number to calculate:\n"))))
    efficient = input("""\nWould youn like to run the efficient algorithm?: (Y or
                     N?)""")

    if efficient.lower() == 'n':
        print(better_fib(int(input("Enter nth fibonacci number:\n"))))

    else:
        print(fibonacci(int(input("Enter the nth fibonacci number: \n"))))
    

