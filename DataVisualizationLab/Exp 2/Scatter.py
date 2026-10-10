import matplotlib.pyplot as plt
hours = [1, 2, 3, 4, 5, 6]
marks = [45, 50, 58, 65, 72, 80]
plt.scatter(hours, marks)
plt.title("Study Hours vs Marks")
plt.xlabel("Study Hours")
plt.ylabel("Marks")
plt.show()

"""Program Explanation
The scatter() function displays observations as individual points. Study hours are placed on the
X-axis and marks on the Y-axis. The resulting pattern can be used to study the relationship between
the variables."""