class Library:
    def __init__(self, ListofBooks):
        self.book = ListofBooks

    def DisplayAvailableBooks(self):
        print("Books Presents in this Library are: ")
        for book in self.book:
            print(" *" + book)

    def borrowBooks(self, bookname):
        if bookname in self.book:
            print(
                f" You have been issued a {bookname}. Please Keep it safe and return it in 30 days. ")
            self.book.remove(bookname)
            return True
        else:
            print("Sorry, The book is either not available or issued to someone else. Please wait until available. ")
            return False

    def returnBook(self, bookname):
        self.book.append(bookname)
        print("Thanks for returning book! Hope you enjoyed it! Have a great day ahead! ")


class Student:
    def requstBook(self):
        self.book = input("Enter the name of book you want to borrow : ")
        return self.book

    def returnBook(self):
        self.book(" Enter the name of book you want to return : ")
        return self.book


if __name__ == "__main__":
    centralLibrary = Library(
        ["Algorithm", "DSA", "Data Science", "AIML", "Cyber security", "IOT", "Robotics"])
    student = Student()

    while True:
        welcomeMSG = '''\n ************ Welcome to Central Library ***********\n
            Please Choose an option:
            1) List of all books
            2) Request a book
            3) Add/Return a book
            4) Exit a Library
        '''
        print(welcomeMSG)
        a = int(input("Enter a Choice: "))
        if a == 1:
            centralLibrary.DisplayAvailableBooks()
        elif a == 2:
            centralLibrary.borrowBooks(student.requstBook())
        elif a == 3:
            centralLibrary.returnBook(student.returnBook())
        elif a == 4:
            print("Thanks for choosing cental library, Have a nice day!")
            exit()
        else:
            print("Invalid input!")
