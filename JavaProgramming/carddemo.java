/*
Experiment 12(b): Card Layout

Aim:
To write a Java program to demonstrate CardLayout using an applet.

Algorithm:
1. Import the required AWT, Applet, and event packages.
2. Create an applet class named carddemo implementing ActionListener.
3. Create a Panel and set its layout to CardLayout.
4. Create three buttons and add them to the panel as separate cards.
5. Register action listeners for the buttons.
6. Define the actionPerformed() method.
7. Use the next() method of CardLayout to display the next card when a button is clicked.
8. Display the output.

Program:
*/

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class carddemo extends Applet implements ActionListener {

    Button b1, b2, b3;
    Panel buttonPanel;
    CardLayout buttonCardLayout;

    public void init() {
        buttonPanel = new Panel();
        add(buttonPanel);

        buttonCardLayout = new CardLayout();
        buttonPanel.setLayout(buttonCardLayout);

        b1 = new Button("first Button");
        b1.addActionListener(this);
        buttonPanel.add(b1, "first Button");

        b2 = new Button("second Button");
        b2.addActionListener(this);
        buttonPanel.add(b2, "second Button");

        b3 = new Button("third button");
        b3.addActionListener(this);
        buttonPanel.add(b3, "third Button");
    }

    public void actionPerformed(ActionEvent e) {
        buttonCardLayout.next(buttonPanel);
    }
}

/*
Sample Output:
Initially, the first Button is displayed.
Clicking the button displays the next card.
The second and third buttons appear successively.

Result:
Thus, the Java applet program demonstrating CardLayout was executed successfully.
*/