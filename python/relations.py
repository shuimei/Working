# -*- coding: utf-8 -*-
"""
Created on Fri Feb 26 16:26:46 2016

@author: root
"""
import random
import itertools

def makeRandomRecords(recNum,items):
    records=[]
    for rec in xrange(recNum):
        length=random.randint(1,len(items))
        record=[]
        for l in xrange(length):
            record.append(items[random.randint(0,length-1)])
        records.append({'id':rec+1,'item':record})
    return records
    
    
def subset_1(records,items):
    allInOne=[]
    for rec in records:
        allInOne.extend(rec['item'])
    frequent_1=[]
    for item in items:
        frequent_1.append({'item':item,'count':allInOne.count(item)})
    return frequent_1
    
def subset(items, length):
    return list(itertools.permutations(items,length))
    
def frequent(records,items, itemsLength):
    assert itemsLength > 0
    frequents=[]
    preFrequent=iter(subset(items,itemsLength))
    for one in preFrequent:
        count=0
        for rec in records:
            if listInList(one, rec['item']):
                count+=1
        frequents.append({'items':list(one), 'surpport':float(count)/len(records)})
    return frequents
    

def listInList(smallList,largeList):
    if map(lambda a: a in largeList, smallList).count(True) == len(smallList):
        return True
    else:
        return False
    
    
    

        
        
    
    
    