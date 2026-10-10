/*

# Experiment: Drawing a Human Face Using Java Swing

## Aim:

To write a Java program to draw a human face using the Graphics class and Swing components.

## Algorithm:

1. Start the program.
2. Import the `java.awt` and `javax.swing` packages.
3. Create a class `face` that extends `JPanel`.
4. Override the `paintComponent()` method to draw the face.
5. Use `drawOval()` to draw the face, eyes, and ears.
6. Use `fillOval()` to draw the pupils and nose.
7. Use `fillArc()` to draw the mouth.
8. Create a `JFrame` to display the drawing.
9. Set the frame size and default close operation.
10. Make the frame visible.
11. Stop the program.

## Program:

*/

import java.awt.*;
import javax.swing.*;

public class face extends JPanel
{
// Draw the human face
public void paintComponent(Graphics g)
{
super.paintComponent(g);

    // Draw the outline of the face
    g.drawOval(40, 40, 120, 150);

    // Draw the eyes
    g.drawOval(57, 75, 30, 20);
    g.drawOval(110, 75, 30, 20);

    // Draw the pupils
    g.fillOval(68, 81, 10, 10);
    g.fillOval(121, 81, 10, 10);

    // Draw the nose
    g.fillOval(85, 100, 30, 30);

    // Draw the mouth
    g.fillArc(60, 125, 80, 40, 180, 180);

    // Draw the ears
    g.drawOval(25, 92, 15, 30);
    g.drawOval(160, 92, 15, 30);
}

public static void main(String[] args)
{
    // Create the frame
    JFrame frame = new JFrame("Human Face");

    // Add the face panel
    frame.add(new face());

    // Set the frame size
    frame.setSize(300, 300);

    // Close the application when the window is closed
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    // Display the frame
    frame.setVisible(true);
}


}

/*

## Sample Output:

A window titled "Human Face" appears, displaying a drawing of a human face with an oval outline, two eyes, pupils, a nose, a mouth, and two ears.

## Result:

Thus, the Java program to draw a human face using the Graphics class and Swing components was implemented and executed successfully.
*/
