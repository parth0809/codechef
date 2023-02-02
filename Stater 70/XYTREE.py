t=int(input())
while(t>0):
    n=int(input())
    graph=[]
    sol={}
    leaf={}
    for i in range (1,n+1):
        sol[i]=0
        leaf[i]=0
    for i in range(n):
        lis1=[]
        for j in range(n):
            lis1.append(0)
        graph.append(lis1)
    for i in range(1,n):
        x,y=map(int,input().split(' '))
        graph[x-1][y-1]=1
        sol[x]=1
    q=int(input())
    for i in range(q):
        x=list(map(int,input().split(' ')))
        if(len(x)==1):
            pass
        else:
            if(sol[x[1]]==0):
                leaf[x[1]]=1
        print(sol)
        print(leaf)
    t-=1