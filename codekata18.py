
l = int(input())
u = int(input())
 
for num in range(l+1,u):
   sum = 0
   temp = num
   while temp > 0:
       digit = temp % 10
       sum += digit ** 3
       temp //= 10
 
   if num == sum:
       print(num)