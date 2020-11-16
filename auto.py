import os
testcase = input("Testcase: ")
os.system("./main.o < ./testcase/" + testcase + ".in > ASM.out")
os.system("./ASMC.o < ASM.out > result.out")
with open("./testcase_ans/" + testcase + "_ans.out") as fh1:
	with open("result.out") as fh2:
		if fh1.readline() == fh2.readline():
			print("Correct")
		else:
			print("Wrong")