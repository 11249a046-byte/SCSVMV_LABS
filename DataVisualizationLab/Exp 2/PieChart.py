import matplotlib.pyplot as plt
labels = ["Python", "Java", "R", "Tableau"]
values = [35, 25, 20, 20]
plt.pie(values, labels=labels, autopct="%1.1f%%")
plt.title("Technology Usage")
plt.show()
"""Program Explanation
The pie() function divides a circle into sectors according to the supplied values. The labels identify
the sectors and autopct displays the percentage contribution."""