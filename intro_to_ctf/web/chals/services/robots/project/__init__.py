from flask import Flask, send_from_directory
from flask import request
from flask import render_template
from flask import Response


import os

app = Flask(__name__)
app.config.from_object("project.config.Config")


@app.route('/', methods=['GET'])
def index():
    return render_template("index.html")

@app.route('/robots.txt', methods=['GET'])
def robots():
    return Response('User-agent: *\nDisallow: /secret_flag', mimetype='text/plain')

@app.route('/secret_flag', methods=['GET'])
def secret():
    return render_template('flag.html')

if __name__ == '__main__':
    app.run()
