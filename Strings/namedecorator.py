def decorate_name(name):
    border = "-" * len(name)
    return f"{border}\n{name}\n{border}"

user_name = f"----{input('What is your name? ')}----"
print(decorate_name(user_name))


