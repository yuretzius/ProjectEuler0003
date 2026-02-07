# ProjectEuler0003
My work on 

[problem #3 of projecteuler.net](https://projecteuler.net/problem=3):

Largest Prime Factor

The prime factors of 13195 are 5, 7, 13, and 29.

What is the largest prime factor of the number 600851475143 ?

Completed on Sat, 20 Feb 2021, 17:22

#######################################################################################
Please note: Project Euler's policy allows publication of solutions for the first 100 problems,
that's why I am sharing my work here for reference and educational purposes.
#######################################################################################

I did many various attempts to make this optimal (not posting them here), but at the end I think the real fight for
efficient prime factoring should wait till later problems, since here we do not need all the factors, just the largest one.

And for this one something very short and simple will do:

```python
N = 600851475143
f = 1

while f*f <= N: 
    f = f + 1 
    while N % f == 0 and N != f:
        N = N // f
print(N)
```

Only need to go up to sqrt(N), because if the largest factor is > sqrt(N), we'll end up with it after all the divisions, and during the divisions as soon as we reach N = f, we are done.
This is hardly very efficient, since we sift through many composites by going with the step 1. This is also the Java version.

I did another simple Python version with step 2, it cuts slightly more than 1/3 of the processing time. I have it also as a C++ version (it is a Hackerrank version for multiple inputs,
so need to enter first 1 and then 600851475143 to solve the original Project Euler problem). 

I won't do any more improvements at this time.

