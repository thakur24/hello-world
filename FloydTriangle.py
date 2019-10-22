# Print a Floyd's Triangle
# Range of the triangle
size = int(input("Enter the range: \t "))
print("\nFLOYD'S TRIANGLE with numbers: \n")
k = 1
# 2 for loops, one for column looping another for row looping
# i loop for column looping and j loop for row looping
for i in range(1, size + 1):
    for j in range(1, i + 1):
        print(k, end=" ")
        k = k + 1
    print()
print("\n")
print("\nFLOYD'S TRIANGLE with *'s: \n")
for i in range(1, size + 1):
    for j in range(1, i + 1):
        print('*', end=" ")
    print()
print("\n")

/// Output 
1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15 ///
