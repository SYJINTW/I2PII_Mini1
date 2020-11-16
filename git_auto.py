import os
commit_cmd = input("Commit_cmd: ")
os.system("git add .")
os.system('git commit -m "' + commit_cmd + '"')
os.system("git push -u origin master")
print("Finish")