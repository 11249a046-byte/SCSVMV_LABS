/*
Experiment 12(c): Border Layout

Aim:
To write a Java program to demonstrate BorderLayout using an applet.

Algorithm:
1. Import the required AWT and Applet packages.
2. Create an applet class named insertdemo.
3. Define the init() method.
4. Set the background color to cyan.
5. Set the layout to BorderLayout.
6. Add buttons to the NORTH, SOUTH, EAST, and WEST regions.
7. Add a TextArea to the CENTER region.
8. Set the insets to provide spacing around the components.
9. Display the output.

Program:
*/

import java.awt.*;
import java.applet.*;

public class insertdemo extends Applet {

    public void init() {
        setBackground(Color.cyan);
        setLayout(new BorderLayout());

        add(new Button("this is cross the top"), BorderLayout.NORTH);
        add(new Button("the footer message might go here"), BorderLayout.SOUTH);
        add(new Button("RIGHT"), BorderLayout.EAST);
        add(new Button("LEFT"), BorderLayout.WEST);

        String msg = "the reasonable man adapts\n\n";
        add(new TextArea(msg), BorderLayout.CENTER);
    }

    public Insets getInsets() {
        return new Insets(10, 10, 10, 10);
    }
}

/*
Sample Output:
A cyan applet window displays:
NORTH  - Top button
SOUTH  - Footer button
EAST   - Right button
WEST   - Left button
CENTER - Text area

Result:
Thus, the Java applet program demonstrating BorderLayout was executed successfully.
*/