# CS50 Lecture Demos

Section and lecture code-alongs from my 2025 CS50 self-study — not graded problem set submissions.

This is deliberately kept separate from my private CS50 problem-set archive: these files are demo code written during lectures/sections (pointers, arrays, memory, recursion, searching, a phonebook example, etc.), not solutions to graded assignments, so there's no academic-honesty concern with posting them publicly.

## Structure

```text
lecture-demos/   Small C programs from lecture/section walkthroughs — pointers, arrays,
                 memory, recursion, linear search, a phonebook example, and similar
                 fundamentals practice
flask-hello/     A "hello world" Flask app from the web-track lecture (routes + templates)
```

## Running

Each file in `lecture-demos/` is a standalone C program, e.g.:

```bash
cd lecture-demos
gcc -o recursion recursion.c
./recursion
```

`flask-hello/` is a small Flask app:

```bash
cd flask-hello
pip install -r requirement.txt
flask run
```
