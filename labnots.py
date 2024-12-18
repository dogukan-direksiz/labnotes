# name=input("please write your name: ")
# print("welcome",name)

# print(type(input("this is just for type checking")))

# age=int(input("please write your age: "))
# future_age=age+10
# print(future_age)

# number1=input("please write a number: ")
# number2=input("please write another number: ")
# sum=int(number1)+int(number2)
# print(sum)


# not1=float(input("1.notu giriniz: "))
# not2=float(input("2.notu giriniz: "))
# not3=float(input("3.notu giriniz: "))
# ortalama=(not1+not2+not3)/3
# print(ortalama)


"""
this is a multiline comment in python
"""
'''
this is a multiline comment in python
'''
print("comments are fun!") # this line print out a string

# message = "hello world"
# number = 10
# pi = 3.14
# is_active = True

# print("message")
# print("number")
# print("pi")
# print("is_active")
# print(type(is_active))
# print(is_active)

# lecture="introduction to programming"
# print(lecture)
# print(type(lecture))
# lecturer="ali"
# print(lecturer)
# print(type(lecturer))
# number_of_students=40
# print(number_of_students)
# print(type(number_of_students))
# average_age=19.5
# print(average_age)
# print(type(average_age))
# average_quiz_notes=0.2
# print(average_quiz_notes)
# print(type(average_quiz_notes))
# can_they_pass=False 
# print(can_they_pass)
# print(type(can_they_pass))
# can_they_pass="Gecebilirler!"
# print(can_they_pass)
# print(type(can_they_pass))

# number1=input("give me the first number: ")
# number2=input("give me the second number: ")

# total=number1+number2
# print(type(number1))
# print(type(number2))
# print(type(total))
# print("total is" , total) #concatenation

# total_of_two_bool= True+False #true=1 false=0
# print(total_of_two_bool)

# total_of_two_bool= True+True
# print(total_of_two_bool)
# print(type(total_of_two_bool))

# number1=input("give me the first number: ")
# number2=input("give me the second number: ")

# total=int(number1)+int(number2)
# print(type(number1))
# print(type(number2))
# print(type(total))
# print("total is" , total) 

# a=10
# b=4
# c="---"

# mul=a * b
# print("mul: ", mul)

# rep=a * c 
# print("rep: ", rep)

# float_div=a/b
# print("float_div: ", float_div)

# integer_div=a//b
# print("integer_div: ", integer_div)

# print(True and False)
# print(False and True)
# print(False and False)
# print(True and True)
# print(False or not False)

# note="it is not possible"

# a=True
# print(type(a))

# print("hello,mars!") #QUİZ1

# print(200%19)
# print(type(200%19))
# print(type(False))
# print(type("False"))
# print(type(input("this is just for type checking: ")))

# for i in range(0,100):
#     print(i)
#     print("Software Engineering!")


# for i in range(0,100):
#     print(i)
# print("Software Engineering!")


# for i in range(0,101,2):
#     print(i)

# for i in range(0,101,5):
#     print(i)

# for i in range(0,101):
#     if i%2==0:
#         print(i)

# for i in range(0,101):
#     if i%2!=0:
#       continue
#     print(i)

# for i in range(0,101):
#     if i%2!=0:
#         pass
#     else:
#         print(i)



# for i in range(0,101):
#     if i%2!=0:
#        print(i)


# number = 0

# while number<=100:
#     print(number)
#     number = number + 1
    

# while number<=100:
#     print(number)
#     number = number + 2


    
#SINAVDA GELİR
'''
number=0
while True:
   if number%2==0:
      print(number)
   number=number+1
   if number==101:
      break
number=0
print("number:" ,number)
while number<=100:
   if number % 2 !=0:
      print(number)
   number+=1

student_id=[1,2,3,4,5,6,7,8,9,10]
for i in student_id:
   print(i)

students=["Ahmet","Onur","Mehmet","Enes","Oğuz"]
for Name in students:
   if Name=="Mehmet":
      print(Name,":",100)
   else: #iki defa mehmet yazmaması için else kullandık
      print(Name,":",50)

for i in range(1,10):
   if i==5:
      break
   print(i)


# for i in range(1,10):
#    if i>=5:
#       continue
#    print(i)

# for i in range(1,4):
#    for j in range(1,4):
#       #for z in range(1,4):

#         print(f"({i},{j},{z})",end=" ")
#       #print()
#    print()
'''
# for i in range(1,6):
#    for j in range(1,6):
#        print(f"{i}x{j}={i*j}",end=" ")
#    print()

# number=0
# while number<=100:
#     print(number)
#     number = number + 1

''' #aynı sonuçlu
i = 1
while i < 6:
    j = 1
    while j < 6:
        print(f"{i}x{j}={i*j}", end=" ")
        j += 1
    print()
    i += 1 
     
for i in range(1,6):
   for j in range(1,6):
       print(f"{i}x{j}={i*j}",end=" ")
   print()
'''


# for i in range(1,4):
#    for j in range(1,4):
#       for z in range(1,4):

#         print(f"({i},{j},{z})",end=" ")
#       print()
#    print()

# if __name__ == '__main__':
#     x = int(input())
#     y = int(input())
#     z = int(input())
#     n = int(input())
#     for i in range(x+1):
#         for j in range(y+1):
#             for k in range(z+1):
#                 if i+j+k!=n:
#                     print(f"[{i},{j},{k}]",end="")
#             print()
# print()


# for i in range(1,6):
#    for j in range(1,6):
#        print(f"{i}x{j}={i*j}",end=" ")
# print()

'''
students=["Ahmet","Onur","Mehmet","Enes","Oğuz"]
for Name in students:
   if Name=="Mehmet":
      print(Name,":",100)
   else: #iki defa mehmet yazmaması için else kullandık
      print(Name,":",50)

students = ["ahmet","onur","mehmet","enes","oğuz"]
for name in students:
   if name == "mehmet":
      print(name ,":", 100)
      continue
   print(name, ":" ,50)
'''


# how_much= int(input("How much money in your bank account?"))
# real_estate=int(input("How many house do you have in kötekli?"))
# car=input("Do you have a car?")

# threshold_money=100000
# threshold_house=5

# if how_much > threshold_money and real_estate > threshold_house and (car == "yes" or car=="Yes"):
#     print("You don't have to all day work")
# elif how_much > 50000 and (car=="yes" or car=="Yes"):
#     print("You have to work one day in a week")
# else:
#     print("You are so poor you have to work to live")

# how_much= int(input("How much money in your bank account?"))
# real_estate=int(input("How many house do you have in kötekli?"))
# car=input("Do you have a car?")

# threshold_money=100000
# threshold_house=5

# if how_much > threshold_money and real_estate > threshold_house  :
#     if car == "yes" or car=="Yes":   #nested if 
#         print("you don't have to all day work")
#     else:
#         print("you should buy a car")

# elif how_much > 50000 and (car=="yes" or car=="Yes"):
#     print("You have to work one day in a week")
# else:
#     print("You are so poor you have to work to live")

# hp=int(input())
# if hp<=60:
#     print("there isn't a car")
# elif   60<hp<=75:
#     print("200.000")

# elif 75<hp<=90 :
#     print("350.000")
 
# elif 90<hp<=110 :
#     print("500.000")

# elif 110<hp<=150 :
#     print("700.000")

# elif 150<hp<200:
#     print("1.200.000")

# else:
#     print("2.000.000")


# for i in range(1,4):
#    for j in range(1,4):
#       for z in range(1,4):

#         print(f"({i},{j},{z})",end=" ")
#       print()
#    print()


   
# x = int(input())
# y = int(input())
# z = int(input())
# n = int(input())
# for i in range(x+1):
#    for j in range(y+1):
#       for k in range(z+1):
#          if i+j+k!=n:
#             print(f"[{i},{j},{k}]",end="")
#       print()
#    print()
# print()


# students = ["ahmet","onur","mehmet","enes","oğuz"]
# for name in students:
#    if name != "mehmet":
#       print(f"{name}:{50}")
#    else:                    #bu şekilde alt alta çıktı veriyor
#       print(f"{name}:{100}") 

# students = ["ahmet","onur","mehmet","enes","oğuz"]
# for name in students:
#    if name != "mehmet":
#       print(f"{name}:{50}",end=" ")
#    else:                            #bu şekilde yan yana çıktı veriyor
#       print(f"{name}:{100}",end=" ")
 




# def myAbs(x):
#     if x < 0 :
#         print("Above")
#         return -x
#         print("Below")
    
#     return x

# myAbs(-5)


# def myAbs(x):
#     if x < 0 :
#         print(-x)

#     print(x)    

# myAbs(-5)


# def myAbs(x):
#     if x < 0 :
#         print(-x)

#     else: 
#         print(x)    

# myAbs(-5)


# def myAbs(x):
#     if x < 0 :
#         print(-x)
#         return

#     print(x)    

# print(myAbs(-10))


# result = ""

# if 10<5:
#     result = "True"
# elif 1==1:
#     result="Equal"
# else:
#     result= "False"
# print(result)
    
# result = "True" if 10>5 else "False"
# print(result)
 
# if 10<5:
#     result = "True"

# else:
#     if 1==1:
#         result="Equal"
#     else:
#       result= "False"
# print(result)
    
# result = "True" if 10<5  else "Equal" if 1==1 else "False"
# print(result

# number1 = 4
# number = 5
# total = number1 + number
# # 4 + 5 = 9
# notformattedstring=str(number1)+"+"+str(number)+"="+str(total)
# formattedSrting= f"{number}+{number1}={total}"
# formattedSrting2= "{} + {} = {}".format(number1,number,total)
# print(notformattedstring)
# print(formattedSrting)
# print(formattedSrting2)


# id=int(input("write your id: "))
# Result=id%10
# a=(id//(10**10)) + (id//(10**9)) + (id//(10**8)) + (id//(10**7)) + (id//(10**6)) + (id//(10**5)) + (id//(10**4)) + (id//(10**3)) + (id//(10**2)) + (id//10)
# Result2=a%10
# if Result == Result2:
#    print("valid")
# else:
#    print("not valid")

# b=0 #HOMEWORK
# id=int(input("please write your id: "))
# result=id%10
# for i in range(1,11):
#    a=id//10**i
#    b+=a
# c=b%10
# if result==c:
#    print("valid")
# else:
#    print("not valid")
 


# def myfunc(a,b,c,d,e): #HOMEWORK
#     if a == b or a == c or   a == d or a == e:
#         print("Equal")
        
#     elif b == c or b == d or b == e:
#          print("Equal")

#     elif c == d or c == e or d == e:
#          print("Equal")
#     else:
#          print("not equal")
      
# a=int(input("a:"))
# b=int(input("b:"))
# c=int(input("c:"))
# d=int(input("d:"))
# e=int(input("e:"))
     
# myfunc()
        
# def function(x):
#    sum=0
#    for j in range(x+1):
#       sum+=j
#    return sum
# print(function(5))
   
   
# def function1(x):
#    sum=0
#    while sum <= x:
#       sum+=1
#    return sum
# print(function1(5))



# def triangularFor(number):
#    result=0
#    for i in range(number,0,-1):
#       result += i
#    return result
# print(f"Triangular: {triangularFor(10)}")

# def triangularWhile(number):
#    result=0
#    while (number > 0):
#       result += number
#       number -=1
#    return result
# print(f"triangular: {triangularWhile(10)}")


# def triangularRecursive(number):
#    if number == 1:
#       return 1
#    return number + triangularRecursive(number-1)

# print(f"triangular: {triangularRecursive(10)}")
            

# def for1(number):
#    for i in range(number):
#       print(i)
# for1(101)
   
# def recursive(number,number1,asc):
#    if asc:
#       if number == number1+1:
#          return
#       print(number,end=" ")
#       return recursive(number+1,number1,asc)
#    else: 
#       if number == number1+1:
#          return
#       print(number,end=" ")
#       return recursive(number,number1-1,asc)


# recursive(0,10,True)
# print()

# def recursive(start,end,asc):
#     if asc:
#         if start == end:
#             return
#         print(start+(start+1),end=" ")
#         return recursive(start+1,end,asc)
        
#     else:
#         if start == end:
#             return
#         print(end+(end-1),end=" ")
#         return recursive(start,end-1,asc)
        
# recursive(0,10,False)
# print()


# def pairwise(start,end):
#     if start == end :
#         return
    
#     total = start+ (start+1)
#     print(total, end=" ")
#     return pairwise(start+1,end)
# pairwise(0,10)
# print()

"""
casting = tuple([1,2,3,4,5])
emptyTuple = ()
emptyTuple = tuple()
myTuple = (1,2,3,4,4,5)

print(type(casting))
print(myTuple.index(3))
print(myTuple.count(4))
"""

import random

# #a= [random.randint(0,35) for i in range(30)]
# tempatures=[5,10,15,24,21,19,18,15]
# # for i in range(30):
# #    a.append(random.randint(0,35))
# print(tempatures)
# def biggest_difference(tempss):
#    max_temp = 0
#    for temp in tempss:
#       if temp > max_temp:
#          max_temp = temp
#    print(max_temp)
#    max_index = tempss.index(max_temp)
#    print(max_index)
   
#    max_diff = 0
#    for i in range(max_index,len(tempss)-1):
#       # print(i,i+1)
#       # print(tempss[i],tempss[i+1])
#       difference = abs(tempss[i]-tempss[i+1])
#       if difference > max_diff:
#          max_diff = difference
#    print(max_diff)
      


# biggest_difference(temps)

number = random.randint(0,1000)

guess = int(input("Please give a number to guess :"))
counter = 1


while guess != -1 and number != guess and counter < 10:
   counter += 1

   
   if number > guess:
      print("higher")
      
   else:
      number < guess
      print("lower")
   guess = int(input("Please give a number to guess :"))

if guess == -1:
   print("thank you for playing this game")

if counter > 10:
   print("You lost the game")

if guess == number:
   print("you won the game")











   

   










   
   















    


















