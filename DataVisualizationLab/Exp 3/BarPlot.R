subjects <- c("Python", "Java", "R", "Tableau", "SQL")
marks <- c(85, 78, 82, 90, 88)
barplot(marks,names.arg=subjects,main="Marks by Subject",xlab="Subject",ylab="Marks")
"""
Program Explanation:
The barplot() function creates bars whose heights represent the supplied values. The names.arg
argument supplies the category labels.
"""