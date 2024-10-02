import datetime

now = datetime.datetime.now().hour

print (now)

if now <= 12:
    print("good morning brother\n")
elif now <= 18:
    print("good afternoon brother\n")
elif now <= 20:
    print("good evening brother\n")
else:
    print("good night brother\n")