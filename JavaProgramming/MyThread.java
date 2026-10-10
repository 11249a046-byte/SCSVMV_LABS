/*

# Experiment: Multithreading in Java

## Aim:

To write a Java program to create and execute multiple threads using the Thread class.

## Algorithm:

1. Start the program.
2. Create a class `MyThread` that extends the `Thread` class.
3. Override the `run()` method to print numbers from 1 to 5.
4. Create two thread objects, `t1` and `t2`.
5. Start the first thread using `t1.start()`.
6. Start the second thread using `t2.start()`.
7. Both threads execute the `run()` method concurrently.
8. Display the output produced by both threads.
9. Stop the program.

## Program:

*/

class MyThread extends Thread
{
// Define the task performed by each thread
public void run()
{
// Print numbers from 1 to 5
for (int i = 1; i <= 5; i++)
{
System.out.println("Thread is running: " + i);
}
}


public static void main(String[] args)
{
    // Create the first thread
    MyThread t1 = new MyThread();

    // Create the second thread
    MyThread t2 = new MyThread();

    // Start both threads
    t1.start();
    t2.start();
}


}

/*

## Sample Output:

Thread is running: 1
Thread is running: 1
Thread is running: 2
Thread is running: 3
Thread is running: 2
Thread is running: 4
Thread is running: 3
Thread is running: 5
Thread is running: 4
Thread is running: 5

Note: The output order may vary because both threads execute concurrently.

## Result:

Thus, the Java program to create and execute multiple threads using the Thread class was implemented and executed successfully.
*/
