def collatz(n, seq = []):
    seq.append(n)
    if n == 1:
      return seq
    elif n%2 == 0: n /= 2
    else: n = 3*n + 1

    return collatz(int(n), seq)



def main():
    num = 12
    result_arr = collatz(num)
    print(result_arr)

    
if __name__ == '__main__':
    main()
    