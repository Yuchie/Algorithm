if __name__ == '__main__':

	N, M =  map(int, input().split())

	a=[]
	b=[]
	c=[]
	for i in range(M):
		a_t, b_t, c_t = map(int, input().split())
		a.append(a_t)
		b.append(b_t)
		# コスト最大を求めたいが，cを正負反転することで最小を求める
		c.append(-c_t)

	# dist[i]には1からiの頂点までの最小コストが入る
	dist=[]
	for j in range(N):
		dist.append(float('inf'));

	dist[0]=0

	for loop in range(N-1):
		for i in range(M):
			if dist[a[i]-1] == float('inf') :
				continue

			if dist[b[i]-1] > dist[a[i]-1] + c[i] :
				dist[b[i]-1] = dist[a[i]-1] + c[i]

	ans = dist[N-1]

	# 負経路を検出
	negative = []

	for i in range(N):
		negative.append(False)

	for loop in range(N):
		for i in range(M):
			if dist[a[i]-1] == float('inf'):
				continue

			if dist[b[i]-1] > dist[a[i]-1]+c[i]:
				dist[b[i]-1] = dist[a[i]-1]+c[i]
				negative[b[i]-1]=True

			if negative[a[i]-1] == True:
				negative[b[i]-1] == True

	if negative[N-1]:
		print('inf')
	else:
		print(-ans)
