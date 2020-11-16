import os
add_flag = int(input("Add or not? (1/0): "))
commit_flag = int(input("Commit or not? (1/0): "))
commit_cmd = input("Commit_cmd: ")
push_flag = int(input("Push or not? (1/0): "))

if add_flag == 1:
	os.system("git add .")
if commit_flag == 1:
	os.system('git commit -m "' + commit_cmd + '"')	
if push_flag == 1:
		os.system("git push -u origin master")
print("Finish")