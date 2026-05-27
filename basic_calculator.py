print("\n---Welcome to mini Calculator---\n\n")
print("It can only perform operation between two numbers(decimal value accepted):-\n")
x = input("Please choose which operation you want to perform:\n Multiplication => enter *\n Division => enter /\n Addition =>enter +\n Substraction => enter -\n\nYour choice: ")

if(x=='*'):
    print("\nMultiplication (a*b)")
    num1 = float(input("Please enter first number(number a): "))
    num2 = float(input("Please enter second number(number b): "))
    print("Calculated result:",num1*num2)


elif(x=='/'):
    print("\nDivision (a/b)")
    num1 = float(input("Please enter first number(number a): "))
    num2 = float(input("Please enter second number(number b): "))
    if(num2==0):
        print("Number can't be divided by zero...\n")
    else:    
        print("Calculated result:",num1/num2)


elif(x=='+'):
    print("\nSubstitution (a+b)")
    num1 = float(input("Please enter first number(number a): "))
    num2 = float(input("Please enter second number(number b): "))
    print("Calculated result:",num1+num2)
    

elif(x=='-'):
    print("\nSubstitution (a-b)")
    num1 = float(input("Please enter first number(number a): "))
    num2 = float(input("Please enter second number(number b): "))
    print("Calcculated result:",num1-num2)


else:
    print("\nInvalid input, please choose valid operation...\n")
    






