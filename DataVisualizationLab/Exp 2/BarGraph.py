import matplotlib.pyplot as plt
subjects = ["Python", "Java", "R", "Tableau", "SQL"]
marks = [85, 78, 82, 90, 88]
plt.bar(subjects, marks)
plt.title("Marks by Subject")
plt.xlabel("Subject")
plt.ylabel("Marks")
plt.show()

"""Program Explanation
The bar() function creates vertical bars. The height of each bar represents the corresponding mark.
Bar charts are useful for comparing independent categories."""