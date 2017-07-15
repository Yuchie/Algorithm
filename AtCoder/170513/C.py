if __name__ == '__main__':
	N, K = map(int, input().split())

	n=[]
	num=0
	for j in range(100000):
		n.append(0)

	for i in range(N):
		a, b = map(int, input().split())
		n[a-1] += b

	for j in range(100000):
		num+=n[j]
		if(num>=K):
			break

	print(j+1)