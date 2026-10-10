/*
Experiment: String Operations in Java

Aim:
To write a Java program to demonstrate various string operations using built-in String class methods.

Algorithm:

1. Initialize two strings, s1 and s2.
2. Display the original strings.
3. Find the length of s1.
4. Perform concatenation and compare the strings.
5. Check equality with and without ignoring case.
6. Convert the string to uppercase and lowercase.
7. Access characters and extract substrings.
8. Replace characters and check the beginning and ending of the string.
9. Find the index of characters and check whether a substring exists.
10. Remove leading and trailing spaces using trim().
11. Split the string into words and display them.
12. Reverse the string using a loop.
13. Display all results.

Program:
*/

public class StringOperations {


public static void main(String[] args) {

    // Initialize strings
    String s1 = "Java Programming";
    String s2 = "Language";

    System.out.println("Original String 1: " + s1);
    System.out.println("Original String 2: " + s2);

    // Find the length of the string
    System.out.println("\nLength: " + s1.length());

    // Join two strings
    System.out.println("Concatenation: " + s1.concat(" " + s2));

    // Compare strings lexicographically
    System.out.println("CompareTo: " + s1.compareTo(s2));

    // Check whether strings are equal
    System.out.println("Equals: " + s1.equals(s2));

    // Compare strings ignoring case
    System.out.println("Equals Ignore Case: "
            + s1.equalsIgnoreCase("java programming"));

    // Convert to uppercase and lowercase
    System.out.println("Uppercase: " + s1.toUpperCase());
    System.out.println("Lowercase: " + s1.toLowerCase());

    // Access a character and extract substrings
    System.out.println("Character at Index 5: " + s1.charAt(5));
    System.out.println("Substring (5): " + s1.substring(5));
    System.out.println("Substring (0,4): " + s1.substring(0, 4));

    // Replace a character
    System.out.println("Replace: " + s1.replace('a', '@'));

    // Check the start and end of the string
    System.out.println("StartsWith Java: " + s1.startsWith("Java"));
    System.out.println("EndsWith ming: " + s1.endsWith("ming"));

    // Find character positions
    System.out.println("Index of 'P': " + s1.indexOf('P'));
    System.out.println("Last Index of 'a': " + s1.lastIndexOf('a'));

    // Check whether a substring exists
    System.out.println("Contains 'Program': " + s1.contains("Program"));

    // Remove leading and trailing spaces
    String s3 = "   Hello Java   ";
    System.out.println("Before Trim: '" + s3 + "'");
    System.out.println("After Trim: '" + s3.trim() + "'");

    // Split the string into words
    String[] words = s1.split(" ");

    System.out.println("\nSplit Words:");
    for (String word : words) {
        System.out.println(word);
    }

    // Reverse the string
    String reverse = "";

    for (int i = s1.length() - 1; i >= 0; i--) {
        reverse += s1.charAt(i);
    }

    System.out.println("\nReversed String: " + reverse);
}


}

/*
Sample Output:
Original String 1: Java Programming
Original String 2: Language

Length: 16
Concatenation: Java Programming Language
CompareTo: -1
Equals: false
Equals Ignore Case: true
Uppercase: JAVA PROGRAMMING
Lowercase: java programming
Character at Index 5: P
Substring (5): Programming
Substring (0,4): Java
Replace: J@v@ Progr@mming
StartsWith Java: true
EndsWith ming: true
Index of 'P': 5
Last Index of 'a': 10
Contains 'Program': true
Before Trim: '   Hello Java   '
After Trim: 'Hello Java'

Split Words:
Java
Programming

Reversed String: gnimmargorP avaJ

Result:
Thus, the Java program to demonstrate various string operations was executed successfully.
*/
