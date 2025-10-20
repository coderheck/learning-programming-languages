def calculate_series(n):
  sum_n=n*(n+1)//2
  result=sum_n*(sum_n - 1)
  return result
n = int(input())
print(calculate_series(n))

