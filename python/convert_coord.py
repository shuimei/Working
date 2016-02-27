import math
from math import pi

def convert(bd_lng,bd_lat):
    x=bd_lng-0.0065
    y=bd_lat-0.006
    z=math.sqrt(x*x+y*y)-0.00002*math.sin(y*pi)
    theta=math.atan2(y,x)-0.000003*math.cos(x*pi)
    lng=z*math.cos(theta)
    lat=z*math.sin(theta)
    data=[str(lng),str(lat)]
    return data

input_path=r'C:\Users\Administrator\Desktop\ocean-trans.csv'
out_path=r'C:\Users\Administrator\Desktop\new.csv'
output_file=open(out_path,'w+')
with open(input_path,'r') as input_file:
    c=0
    input_file.next()
    try:
        while True:
            line=input_file.next().rstrip('\n').split(',')
            lng,lat=float(line[3]),float(line[4])
            new_lng,new_lat=convert(lng,lat)
            line[-2:]=new_lng,new_lat
            print c
            c+=1
            newline=''
            for i in line:
                newline=newline+i+','
            newline=newline.rstrip(',')
            output_file.write(newline+'\n')
            
    except StopIteration:
        print 'convert over!'
