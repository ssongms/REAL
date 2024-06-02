from sys import stdin
input = stdin.readline

# str = input().strip()
# n = len(str)
# m = int(input().strip())
# cursor = n

# def execCmd():
#     global str, cursor
#     if cmd[0] == 'L':
#         if cursor != 0:
#             cursor -= 1
#     elif cmd[0] == 'D':
#         if cursor != n-1:
#             cursor += 1
#     elif cmd[0] == 'B':
#         if cursor != 0:
#             str = str[:cursor-1] + str[cursor:]
#             cursor -= 1
#     elif cmd[0] == 'P':
#         str = str[:cursor] + cmd[2:] + str[cursor:]
#         cursor += 1


# for i in range(m):
#     cmd = input().strip('\n')
#     execCmd()

# print(str)

# list함수를 이용해서 더 깔끔하지만 시간초과나는 풀이
# list함수는 전달된 문자열의 각 문자를 개별 요소로 분리한다. 
# str_list = list(input().strip())
# n = len(str_list)
# m = int(input())
# cursor = n

# for _ in range(m):
#     cmd = list(inpt().split())
#     if cmd[0] == 'P':
#         str_list.insert((cursor, cmd[1]))
#         cursor += 1

#     elif cmd[0] == 'L':
#         if cursor > 0:
#             cursor -= 1

#     elif cmd[0] == 'D':
#         if cursor < n:
#             cursor += 1

#     else:
#         if cursor > 0:
#             str_list.remove(str_list[cursor-1])

# print(''.join(str_list))

# 커서를 기준으로 문자열을 스택 두개에 나누어 담는 풀이
import sys

st1 = list(sys.stdin.readline().rstrip())
st2 = []

for _ in range(int(sys.stdin.readline())):
	command = list(sys.stdin.readline().split())
    if command[0] == 'L':
		if st1:
        	st2.append(st1.pop())
            
	elif command[0] == 'D':
    	if st2:
        	st1.append(st2.pop())

	elif command[0] == 'B':
    	if st1:
        	st1.pop()
            
	else:
    	st1.append(command[1])
        
st1.extend(reversed(st2))
print(''.join(st1))