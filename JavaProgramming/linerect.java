/*

# Experiment: Drawing Lines and Rectangles Using Java Swing

## Aim:

To write a Java program to draw lines, rectangles, filled rectangles, rounded rectangles, and intersecting lines using the Graphics class.

## Algorithm:

1. Start the program.
2. Import the `java.awt` and `javax.swing` packages.
3. Create a class `linerect` that extends `JPanel`.
4. Override the `paintComponent()` method.
5. Use `drawLine()` to draw lines.
6. Use `drawRect()` to draw an outlined rectangle.
7. Use `fillRect()` to draw a filled rectangle.
8. Use `drawRoundRect()` to draw an outlined rounded rectangle.
9. Use `fillRoundRect()` to draw a filled rounded rectangle.
10. Draw two intersecting lines using `drawLine()`.
11. Create a `JFrame`, set its size, and add the panel.
12. Make the frame visible.
13. Stop the program.

## Program:

*/

import java.awt.*;
import javax.swing.*;

public class linerect extends JPanel
{
// Draw lines and rectangles
public void paintComponent(Graphics g)
{
super.paintComponent(g);

    // Draw a simple line
    g.drawLine(10, 10, 50, 50);

    // Draw an outlined rectangle
    g.drawRect(10, 60, 40, 30);

    // Draw a filled rectangle
    g.fillRect(60, 10, 30, 80);

    // Draw an outlined rounded rectangle
    g.drawRoundRect(10, 100, 80, 50, 10, 10);

    // Draw a filled rounded rectangle
    g.fillRoundRect(20, 110, 60, 30, 5, 5);

    // Draw the first diagonal line
    g.drawLine(100, 10, 230, 140);

    // Draw the second diagonal line
    g.drawLine(100, 140, 230, 10);
}

public static void main(String[] args)
{
    // Create the frame
    JFrame frame = new JFrame("Lines and Rectangles");

    // Add the drawing panel
    frame.add(new linerect());

    // Set the frame size
    frame.setSize(300, 220);

    // Close the application when the window is closed
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    // Display the frame
    frame.setVisible(true);
}


}

/*

## Sample Output:

A window titled "Lines and Rectangles" appears, displaying:

* A simple diagonal line.
* An outlined rectangle.
* A filled rectangle.
* An outlined rounded rectangle.
* A filled rounded rectangle.
* Two intersecting diagonal lines.

## Result:

Thus, the Java program to draw lines, rectangles, filled rectangles, rounded rectangles, and intersecting lines using the Graphics class was implemented and executed successfully.
*/
