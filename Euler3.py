from time import perf_counter

start = perf_counter()

N = 600851475143

f = 1
while f*f <= N: 
    f = f + 1 # inefficient, since we sift through many composites
    while N % f == 0 and N != f: 
        N = N // f

end = perf_counter()

print(N)
print('step 1:', end - start, 'sec')

start = perf_counter()

N = 600851475143

f = 2
while N % f == 0 and N != f: 
    N = N // f
if N != f:
    f = 3
    while N % f == 0 and N != f: 
        N = N // f
if N != f:       
    while f*f <= N: 
        f = f + 2 # at least here we exclude even factors
        while N % f == 0 and N != f: 
            N = N // f
        
end = perf_counter()

print(N)
print('step 2:', end - start, 'sec')


