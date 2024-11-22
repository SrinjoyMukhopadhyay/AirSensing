from flask import Flask, request, render_template, redirect
import mysql.connector
import statistics
app=Flask(__name__)
mydb=mysql.connector.connect(host="localhost", user="root", password="", database="firstdb")
mycursor=mydb.cursor()


@app.route('/')
def func():
    return render_template("form.html")
@app.route('/selection_1',methods=['POST'])
def selection_1():
	status=request.form.get('ubed')
	if status=="uvalue":
		mycursor.execute("""SELECT `gas` FROM `room`""")
		books=mycursor.fetchall()
		lst=[]
		for x in books:
			y=x[0]
			lst.append(y)
		avg=statistics.mean(lst)
		return render_template("bedroom.html", a=int(avg))
@app.route('/selection_2',methods=['POST'])
def selection_2():
	status=request.form.get('ukit')
	if status=="uvalue1":
		mycursor.execute("""SELECT `gas` FROM `sensor`""")
		books_1=mycursor.fetchall()
		lst1=[]
		for x in books_1:
			y=x[0]
			lst1.append(y)
		avg=statistics.mean(lst1)
		return render_template("kitchen.html", a=int(avg))



if __name__ == "__main__":
	app.run(debug=True)
