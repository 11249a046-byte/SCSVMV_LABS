import matplotlib.pyplot as plt
marks = [45, 50, 52, 55, 58, 60, 62, 65,68, 70, 72, 75, 78, 80, 82, 85,88, 90]
plt.hist(marks, bins=5, edgecolor="black")
plt.title("Distribution of Marks")
plt.xlabel("Marks")
plt.ylabel("Frequency")
plt.show()

"""Program Explanation:
The hist() function groups numerical values into intervals called bins. The height of each bar
represents the frequency of observations in that interval. A histogram is useful for understanding
the distribution of data."""