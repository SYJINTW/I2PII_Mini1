import os
import random
#testcase = input("Testcase: ")
#os.system("./main.o < ./testcase/" + testcase + ".in > ASM.out")
#os.system("./ASMC.o < ASM.out > result.out")
#with open("./testcase_ans/" + testcase + "_ans.out") as fh1:
#	with open("result.out") as fh2:
#		if fh1.readline() == fh2.readline():
#			print("Correct")
#		else:
#			print("Wrong")

testcase = input("Testcase: ")
os.system("gcc main.c -o main.o")
os.system("./main.o < ./testcase/" + testcase + ".in > ASM.out")
os.system("./ASMC.o < ASM.out")
