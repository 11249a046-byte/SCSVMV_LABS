import matplotlib.pyplot as plt
x = [1, 2, 3, 4, 5]
y = [10, 15, 12, 18, 20]
plt.plot(x, y, marker="o", label="Values")
plt.title("Line Chart")
plt.xlabel("X Values")
plt.ylabel("Y Values")
plt.legend()
plt.grid(True)
plt.show()

"""Program Explanation:

The plot() function creates a line chart. The X and Y lists contain the coordinates of the ob-
servations. The marker highlights individual points. The title, labels, legend and grid make the

visualization easier to understand."""