# Enter your code here. Read input from STDIN. Print output to STDOUT
dic = {}
N = int(raw_input())
for i in range(0,N):
    temp = [] 
    k    = raw_input() 
    temp = k.split(" ") 
    name = temp[0] 
    temp.pop(0) 
    dic[name] = temp
    
search = raw_input()
for i in dic: 
    if(i == search): 
        temp = dic[i] 
        p = ((float(temp[0])+float(temp[1])+float(temp[2]))/3)
        print("%.2f"%(p)) 
