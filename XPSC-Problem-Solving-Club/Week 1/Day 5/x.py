T = int(input())

while T:
    S = input()
    if len(S) <= 10:
        print(S)
    else:
        print(f"{S[0]}{len(S)-2}{S[len(S)-1]}")    
    T = T-1    
