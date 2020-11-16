import os
os.system("git add .")
commit_flag = int(input("Commit or not? (1/0): "))
if commit_flag == 1:
	commit_cmd = input("Commit_cmd: ")
	os.system('git commit -m "' + commit_cmd + '"')
	push_flag = int(input("Push or not? (1/0): "))
	if push_flag == 1:
		os.system("git push -u origin master")
print("Finish")