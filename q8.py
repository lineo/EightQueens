print('Eight queens solution')
col=[0]*8
row=0
while row>=0:
    col[row]+=1 
    if col[row]>8:
        row-=1
    else:
        for row1 in range(row+1):
            if (col[row]==col[row1]) or (abs(col[row]-col[row1])==row-row1):
                break
        if row1==row :
            if row>=7:
                print(col)
            else:
                row+=1
                col[row]=0
