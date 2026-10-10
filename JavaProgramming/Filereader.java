/*

# Experiment: Reading a File Using FileReader

## Aim:

To write a Java program to read and display the contents of a text file using the FileReader class.

## Algorithm:

1. Start the program.
2. Import the `java.io` package.
3. Create a `FileReader` object to open the file `sample2.txt`.
4. Declare an integer variable to store each character read from the file.
5. Read the file character by character using the `read()` method.
6. Continue reading until the end of the file is reached (`-1`).
7. Display each character on the console.
8. Close the file using the `close()` method.
9. Handle any input/output exceptions using a `try-catch` block.
10. Stop the program.

## Program:

*/

import java.io.*;

public class Filereader
{
public static void main(String[] args)
{
try
{
// Open the text file for reading
FileReader fr = new FileReader("sample2.txt");

        // Variable to store each character
        int i;

        // Read the file character by character
        while ((i = fr.read()) != -1)
        {
            // Display the character
            System.out.print((char) i);
        }

        // Close the file
        fr.close();
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

If sample2.txt contains:

Hello World!
Welcome to Java Programming.

The output will be:

Hello World!
Welcome to Java Programming.

## Result:

Thus, the Java program to read and display the contents of a text file using the FileReader class was implemented and executed successfully.
*/
