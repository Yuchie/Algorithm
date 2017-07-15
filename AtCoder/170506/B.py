
if __name__ == '__main__':
	N, M=map(int, input().split())

	n=[]
	for j in range(N):
		n.append(0)

	for i in range(M):
		a,b=[int(i) for i in input().split()]
		n[a-1]+=1
		n[b-1]+=1

	flag = 0
	for i in range(N):
		if(n[i]%2==1):
			flag +=1

	if(flag<2):
		print('YES')
	else:
		print('NO')