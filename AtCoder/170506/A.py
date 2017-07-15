def sort(n1, n2, n3):
	n=[n1, n2, n3]
	t=len(n)
	for i in range(t-1):
		for j in range(i+1, t):
			if n[i] > n[j]:
				n[i],n[j] = n[j],n[i]
	return n

if __name__ == '__main__':
	A, B, C=map(int, input().split())
	N=0
	arr=[]
	flag=1
	if(A%2==1 or B%2==1 or C%2==1):
		flag=0

	while(flag):
		A, B, C = sort(A,B,C)
		arr.append([A,B,C])
		sum = A+B+C
		A=(sum-A)/2
		B=(sum-B)/2
		C=(sum-C)/2
		N+=1
		if(A%2==1 or B%2==1 or C%2==1):
			flag=0
		for i in range(len(arr)-1):
			if(arr[i] == [A,B,C]):
				flag = 0
				N=-1
	print(N)
