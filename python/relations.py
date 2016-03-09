from relations import *
import itertools
min_sup_percent=0.5
size=len(Data)
min_sup=min_sup_percent*size
FreqDic = {} #{itemset1:freq1,itemsets2:freq2}
for event in Data:
	for item in Data[event]:
		if item in FreqDic:
			FreqDic[item] += 1
		else:
			FreqDic[item] = 1

for k in FreqDic.keys():
	if FreqDic[k]<min_sup:
		del(FreqDic[k])

possible=[]
for i in xrange(2,len(FreqDic.keys())):
	possible.extend(list(itertools.combinations(FreqDic.keys(),i)))

def listInList(smallList,largeList):
    if map(lambda a: a in largeList, smallList).count(True) == len(smallList):
        return True
    else:
        return False

FreqSets=[]
for p in possible:
	count=0
	for event in Data:
		if listInList(list(p),Data[event]):
			count+=1
	FreqSets.append((p,count))

print [f for f in FreqSets if f[1]>min_sup]