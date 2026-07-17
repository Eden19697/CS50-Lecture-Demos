people = {
    "A":"11",
    "D":"22",
    "J":"33",
}

name = input("Name: ")

if name in people:
    print(f"Number: {people[name]}")#people[name]在字典代表
                                    #的是在这个位置对应的num，不是它本身
else:
    print("Not found")
