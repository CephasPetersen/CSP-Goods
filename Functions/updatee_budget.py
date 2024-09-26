income = 0
rent = 0
utilities = 0
groceries = 0
transportation = 0
expenses = 0
savings = 0
spend = 0

def input_value(type):
    return float(input(f"How much is your {type}: "))

def percent(type, amount):
    per = amount / income * 100
    print(f"your {type} is {per:.0f}% of your income.")

print("this is a budget calculator.")
income = input_value("income")
rent = input_value("rent")
utilities = input_value("utilities")
groceries = input_value("groceries")
transportation = input_value("transportation")
savings = income * 0.2
expenses = rent + utilities + groceries + transportation
spend = income - expenses - savings
print(f"you make ${income:.2f}")
print(f"your expenses are ${expenses:.2f}")
print(f"your savings are ${savings:.2f}")
print(f"your spending money is ${spend:.2f}")

percent("rent", rent)
percent("utilities", utilities)
percent("groceries", groceries)
percent("transportation", transportation)
percent("savings", savings)
percent("expenses", expenses)