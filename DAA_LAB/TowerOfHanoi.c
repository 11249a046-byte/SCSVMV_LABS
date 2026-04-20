/*
Program: Tower of Hanoi
Language: C

Aim:
----
To solve the Tower of Hanoi problem using recursion and display the sequence 
of steps required to move all disks from the source rod to the destination rod 
following the given rules.

Algorithm:
----------
1. Start the program.
2. Read the number of disks (n) from the user.
3. Define three rods:
      - Source (S)
      - Destination (D)
      - Auxiliary (A)
4. Apply recursion:
      a. If n == 1:
            - Move the disk directly from Source to Destination.
      b. Else:
            i. Move (n-1) disks from Source to Auxiliary using Destination.
           ii. Move nth disk from Source to Destination.
          iii. Move (n-1) disks from Auxiliary to Destination using Source.
5. Repeat until all disks are moved.
6. Display each move.
7. Stop the program.

Description:
------------
- This program demonstrates recursion using the Tower of Hanoi problem.
- Only one disk can be moved at a time.
- A larger disk cannot be placed on a smaller disk.
- Total moves required = (2^n - 1)

Sample Input:
-------------
Enter how many disks are there:
3

Sample Output:
--------------
Required moves:
Move the disk 1 from s to d
Move the disk 2 from s to a
Move the disk 1 from d to a
Move the disk 3 from s to d
Move the disk 1 from a to s
Move the disk 2 from a to d
Move the disk 1 from s to d
*/

#include <stdio.h>

/* 
Function: TowerOfHanoi
----------------------
This recursive function prints the steps required to solve the Tower of Hanoi problem.

Parameters:
n - Number of disks
s - Source rod
d - Destination rod
a - Auxiliary rod
*/
void TowerOfHanoi(int n, char s, char d, char a)
{
    /* Base Case: If only one disk, move it directly */
    if (n == 1)
    {
        printf("Move the disk %d from %c to %c\n", n, s, d);
        return;
    }

    /* Step 1: Move n-1 disks from source to auxiliary using destination */
    TowerOfHanoi(n - 1, s, a, d);

    /* Step 2: Move the nth (largest) disk from source to destination */
    printf("Move the disk %d from %c to %c\n", n, s, d);

    /* Step 3: Move n-1 disks from auxiliary to destination using source */
    TowerOfHanoi(n - 1, a, d, s);
}

int main()
{
    int disks_count;

    /* Take input from the user */
    printf("Enter how many disks are there:\n");
    scanf("%d", &disks_count);

    /* Print the sequence of moves */
    printf("Required moves:\n");
    TowerOfHanoi(disks_count, 's', 'd', 'a');

    return 0;
}