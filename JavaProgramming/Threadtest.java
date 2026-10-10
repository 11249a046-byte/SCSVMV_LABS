/*
Experiment: Thread Methods in Java (yield() and sleep())

Aim:
To write a Java program to demonstrate the use of yield() and sleep() methods in multithreading.

Algorithm:

1. Create three thread classes named A, B, and C by extending the Thread class.
2. Override the run() method in each class.
3. In thread A, use Thread.yield() to allow other threads an opportunity to execute.
4. In thread B, print numbers from 1 to 5.
5. In thread C, print numbers from 1 to 5 and use Thread.sleep(1500) when k equals 1.
6. Handle InterruptedException using a try-catch block.
7. Create objects for all three threads in the main() method.
8. Start the threads using the start() method.
9. Display the exit message from the main thread.
10. Observe the execution of all threads.

Program:
*/

class A extends Thread {


public void run() {
    for (int i = 1; i <= 5; i++) {

        // Give other threads an opportunity to execute
        if (i == 1) {
            Thread.yield();
        }

        System.out.println("from thread A i=" + i);
    }

    System.out.println("exit from A");
}


}

class B extends Thread {


public void run() {
    for (int j = 1; j <= 5; j++) {
        System.out.println("from thread B j=" + j);
    }

    System.out.println("exit from B");
}


}

class C extends Thread {


public void run() {
    for (int k = 1; k <= 5; k++) {
        System.out.println("thread c =" + k);

        // Pause the current thread for 1.5 seconds
        if (k == 1) {
            try {
                Thread.sleep(1500);
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                return;
            }
        }
    }

    System.out.println("exit from C");
}


}

public class Threadtest {


public static void main(String[] args) {

    // Create thread objects
    A a = new A();
    B b = new B();
    C c = new C();

    // Start the threads
    System.out.println("Start thread A");
    a.start();

    b.start();
    c.start();

    System.out.println("exit from main thread");
}


}

/*
Sample Output:
Start thread A
exit from main thread
from thread A i=1
from thread B j=1
thread c =1
from thread A i=2
from thread B j=2
from thread A i=3
from thread B j=3
from thread A i=4
from thread B j=4
from thread A i=5
from thread B j=5
exit from A
exit from B
thread c =2
thread c =3
thread c =4
thread c =5
exit from C

Result:
Thus, the Java program to demonstrate the yield() and sleep() methods in multithreading was executed successfully.
*/
