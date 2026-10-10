/*
Experiment: Thread Priority in Java

Aim:
To write a Java program to demonstrate thread creation and thread priorities using the Thread class.

Algorithm:

1. Create three thread classes named A, B, and C by extending the Thread class.
2. Override the run() method in each class.
3. Print a starting message in each thread.
4. Use loops to print values from 1 to 4.
5. Create objects for all three thread classes in the main() method.
6. Set the priority of thread C to maximum, thread B to normal, and thread A to minimum.
7. Start all three threads using the start() method.
8. Display the end of the main thread.
9. Observe the execution of the threads.

Program:
*/

class A extends Thread {


public void run() {
    System.out.println("Thread A started");

    for (int i = 1; i <= 4; i++) {
        System.out.println("from thread A i=" + i);
    }

    System.out.println("exit from A");
}


}

class B extends Thread {


public void run() {
    System.out.println("Thread B started");

    for (int j = 1; j <= 4; j++) {
        System.out.println("from thread B j=" + j);
    }

    System.out.println("exit from B");
}


}

class C extends Thread {


public void run() {
    System.out.println("Thread C started");

    for (int k = 1; k <= 4; k++) {
        System.out.println("thread c =" + k);
    }

    System.out.println("exit from C");
}


}

public class ThreadPriority {


public static void main(String[] args) {

    // Create thread objects
    A threadA = new A();
    B threadB = new B();
    C threadC = new C();

    // Set thread priorities
    threadC.setPriority(Thread.MAX_PRIORITY);
    threadB.setPriority(Thread.NORM_PRIORITY);
    threadA.setPriority(Thread.MIN_PRIORITY);

    // Start the threads
    System.out.println("start thread A");
    threadA.start();

    System.out.println("start thread B");
    threadB.start();

    System.out.println("start thread C");
    threadC.start();

    System.out.println("end of main thread");
}


}

/*
Sample Output:
start thread A
start thread B
Thread A started
from thread A i=1
from thread A i=2
from thread A i=3
from thread A i=4
exit from A
Thread B started
from thread B j=1
from thread B j=2
from thread B j=3
from thread B j=4
exit from B
Thread C started
thread c =1
thread c =2
thread c =3
thread c =4
exit from C
end of main thread

Result:
Thus, the Java program to demonstrate thread creation and thread priorities was executed successfully.
*/
