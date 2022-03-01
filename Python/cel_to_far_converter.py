def Farenheit(C):
    return (C*(9/5))+32

Celcius = int(input("Enter the temperture in Celcius : "))
Far = Farenheit(Celcius)

print(f"The Converted Temperature is {Far}°F")