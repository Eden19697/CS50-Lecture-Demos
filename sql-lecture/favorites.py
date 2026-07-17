from cs50 import SQL

db = SQL("sqlite:///favorites.db")  # open the table file

favorite = input("Favorites: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE language = ?", favorite)
row = rows[0]

print(row["n"])
