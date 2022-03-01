class Programmer:
    company = "Microsoft"
    def __init__(self, Id_no, name, fav_language, salary):
        self.Id_no =  Id_no
        self.name = name
        self.fav_language = fav_language
        self.salary = salary

    def getDetails(self):
        print(f"In {self.company} company")
        print(f"ID no: {self.Id_no} name is {self.name}. His working language is {self.fav_language}, And his salary is {self.salary}.")


Rushabh = Programmer(50,"Rushabh", "SQL", 500000)
Rushabh.getDetails()

Kalash = Programmer(24,"Kalash", "Java Script", 240000)
Kalash.getDetails()

Roshan = Programmer(700,"Roshan", "python", 57000)
Roshan.getDetails()