class Employee:
    Salary = 100000
    increment = 2

    @property
    def SalaryAfterIncrement(self):
        return (self.Salary*self.increment)
    
    @SalaryAfterIncrement.setter
    def SalaryAfterIncrement(self, SAI):
        self.increment = SAI/self.Salary

e= Employee()
print(e.increment)
print(e.Salary)
print(e.SalaryAfterIncrement)
e.SalaryAfterIncrement = 500000
print(e.increment)