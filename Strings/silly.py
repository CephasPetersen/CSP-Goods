def main():
    name = input("Type a name: ")
    place = input("Type a place: ")
    verb = input("Type a verb: ")
    noun = input("Type a noun: ")

    part1 = name + " went to the "
    part2 = place + " where they "
    part3 = verb + " and bought a "
    part4 = noun + ".\n"

    sentence = part1 + part2 + part3 + part4
    print(sentence)

main()


