import csv

name = input("Name: ")
number = input("NUmber: ")

with open("phonebook.csv","a") as file:

    writer = csv.DictWriter(file, fieldname=["name","number"])
    writer.writerow({"name":name, "number": number})


