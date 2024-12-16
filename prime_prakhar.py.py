# prakhar code
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def format_array(arr):
  
    primes = [x for x in arr if is_prime(x)]
    
    if not primes:
        return sorted(arr, reverse=True) 
    
    largest_prime = max(primes)
    smallest_prime = min(primes)
    
 
    non_prime_elements = [x for x in arr if x not in (largest_prime, smallest_prime)]
    
    
    non_prime_elements.sort(reverse=True)
    
    
    result = [largest_prime] + non_prime_elements + [smallest_prime]
    return result


print(format_array([5, 1, 8, 11, 2])) 
print(format_array([1, 6, 4, 13, 9, 3]))  
