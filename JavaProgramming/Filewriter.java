/*

# Experiment: Writing Data to a File Using FileWriter

## Aim:

To write a Java program to write uppercase alphabets from A to Z into a text file using the FileWriter class.

## Algorithm:

1. Start the program.
2. Import the `java.io` package.
3. Create a `FileWriter` object to open the file `sample2.txt`.
4. Use a `for` loop to generate characters from A to Z.
5. Write each character into the file using the `write()` method.
6. Close the file using the `close()` method.
7. Display a success message.
8. Handle input/output exceptions using a `try-catch` block.
9. Stop the program.

## Program:

*/

import java.io.*;

public class Filewriter
{
public static void main(String[] args)
{
try
{
// Open the file for writing
FileWriter fw = new FileWriter("sample2.txt");

        // Write uppercase alphabets from A to Z
        for (char i = 'A'; i <= 'Z'; i++)
        {
            fw.write(i);
        }

        // Close the file
        fw.close();

        // Display success message
        System.out.println("Data written successfully.");
    }
    catch (IOException e)
    {
        // Handle file-related exceptions
        System.out.println("Exception: " + e.getMessage());
    }
}


}

/*

## Sample Output:

Data written successfully.

## Contents of sample2.txt:

ABCDEFGHIJKLMNOPQRSTUVWXYZ

## Result:

Thus, the Java program to write uppercase alphabets from A to Z into a text file using the FileWriter class was implemented and executed successfully.
*/
