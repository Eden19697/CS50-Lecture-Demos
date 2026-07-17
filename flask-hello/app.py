from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":
        # Assume that form was submitted
        return render_template("greet.html", name=request.form.get("name","world"))
    else:
        # Assume that no form was submitted, so show form
        return render_template("index.html")



