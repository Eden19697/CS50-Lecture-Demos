# CS50 Lecture Demos

Section and lecture code-alongs from my 2025 CS50 self-study — not graded problem set submissions.

This is deliberately kept separate from my private CS50 problem-set archive: these files are demo code written during lectures/sections (pointers, arrays, memory, recursion, searching, HTML/CSS/JS basics, SQL, Flask sessions, etc.), not solutions to graded assignments, so there's no academic-honesty concern with posting them publicly.

## Structure

```text
lecture-demos/     Small C programs from lecture/section walkthroughs — pointers, arrays,
                    memory, recursion, linear search, a phonebook example, and similar
                    fundamentals practice

flask-hello/        A "hello world" Flask app from the web-track lecture (routes + templates)

html-css-js/        HTML/CSS/JS lecture walkthroughs — headings, tables, lists, forms,
                    images/video, geolocation, autocomplete, a small blink/search JS demo

python-lecture/      CS50P lecture walkthroughs — agree/compare/exit/exception demos,
                    a phonebook dict example, a calculator, a QR-code generator, an
                    image blur demo (Pillow), etc.

sql-lecture/         A small SQLite "favorites" demo from the SQL lecture

flask-login-demo/    A minimal Flask + server-side session login/logout walkthrough

flask-show-demo/     A Flask + Ajax "search as you type" demo backed by SQLite

flask-store-demo/    A Flask + session-based shopping cart walkthrough (books/cart)
```

## Running

Each file in `lecture-demos/` is a standalone C program, e.g.:

```bash
cd lecture-demos
gcc -o recursion recursion.c
./recursion
```

Each `flask-*` folder and `flask-hello/` is a small Flask app:

```bash
cd flask-login-demo
pip install -r requirements.txt
flask run
```

`python-lecture/` scripts run directly, e.g. `python3 python-lecture/meow.py`. `html-css-js/` files can be opened directly in a browser.
