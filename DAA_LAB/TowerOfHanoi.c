/*
Program: Tower of Hanoi
Language: C
Aim: To implement Tower of Hanoi using recursion

Description:
- Move n disks from Source rod (S) to Destination rod (D)
- Use Auxiliary rod (A)
- Only one disk can be moved at a time
- A larger disk cannot be placed on a smaller disk

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

/* Recursive function to solve Tower of Hanoi */
void TowerOfHanoi(int n, char s, char d, char a)
{
    if (n == 1)
    {
        printf("Move the disk %d from %c to %c\n", n, s, d);
        return;
    }

    // Move n-1 disks from source to auxiliary
    TowerOfHanoi(n - 1, s, a, d);

    // Move the nth disk from source to destination
    printf("Move the disk %d from %c to %c\n", n, s, d);

    // Move n-1 disks from auxiliary to destination
    TowerOfHanoi(n - 1, a, d, s);
}

int main()
{
    int disks_count;

    /* Input number of disks */
    printf("Enter how many disks are there:\n");
    scanf("%d", &disks_count);

    /* Display the required moves */
    printf("Required moves:\n");
    TowerOfHanoi(disks_count, 's', 'd', 'a');

    return 0;
}
