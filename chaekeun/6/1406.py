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

# # 커서를 기준으로 문자열을 스택 두개에 나누어 담는 풀이
# from sys import stdin
# input = stdin.readline

# st1 = list(input().strip())
# st2 = []

# for _ in range(int(input())):
# 	cmd = list(input().split())
# 	if cmd[0] == 'L':
# 		if st1:
# 			st2.append(st1.pop())

# 		elif cmd[0] == 'D':
# 			if st2:
# 				st1.append(st2.pop())

# 		elif cmd[0] == 'B':
# 			if st1:
# 				st1.pop()

# 		else:
# 			st1.append(cmd[1])

# st1.extend(reversed(st2))
# print("".join(st1))


#Linked list로 푼 풀이

originText = input().strip()
cmdLen = int(input())

# 노드 클래스 : 노드의 값과 next, prev의 값을 가진다
class Node:
	def __init__(self, data, prev = None, next = None):
        self.data = data
        self.prev = prev
        self.next = next

class DLinkedList:
	def __init__(self):
		self.head = Node(None)
		self.tail = Node(None, self.head)
		self.head.next = self.tail
		self.size = 0
	
	def is_empty(self):
		if self.size != 0:
			return False
		else:
			return True

	def selectNode(self, idx):
		if idx > self.size:
			print("Overflow: Index Error")
			return None
		if idx == 0:
			return self.head
		if idx = self.size:
			return self.tail # = Null?
		if idx <= self.size // 2: 
			target = self.head
			for _ range(idx): # head에서 시작해서 내려가며 찾는다.
				target = target.next
			return target
		else:
			target = self.tail
			for _ in range(self.size - idx): # tail에서 시작해서 올라가며 찾는다.
				target = target.prev
			return target

	def appendLeft(self, value):
		# 이 코드가 중복되는데 어떻게 안되나 ㅠ
		if self.is_empty():
			self.head = Node(value)
			self.tail = Node(None, self.head)
			self.head.next = self.tail
		else:
			tmp = self.head
			# 새로운 head를 만들고 next에 기존 head 연결
			self.head = Node(value, None, self.head)
			tmp.prev = self.head
		self.size += 1

	def append(self, value):
		if self.is_empty():
			self.head = Node(value)
			self.tail = Node(None, self.head)
			self.head.next = self.tail
		else:
			tmp = self.tail.prev
			# 왜 self.tail과 그 이전노드 사이에 새로운걸 집어넣는지 모르겠다. 개념이 부족한건가?
			newNode = Node(value, tmp, self.tail)	
			tmp.next = newNode
			self.tail.prev = newNode

		self.size += 1

    def insert(self, value, idx):
        if self.is_empty():
            self.head = Node(value)
            self.tail = Node(None, self.head)
            self.head.next = self.tail
		else:
			tmp = self.selectNode(idx)
			if tmp == None:
				return
			if tmp == self.head:
				self.appendLeft(value)
			elif tmp == self.tail: # 이부분 체크
				self.append(value)
			else:
				tmp_prev = tmp.prev
				newNode = Node(value, tmp_prev, tmp)
				tmp_prev.next = newNode
				tmp.prev = newNode
		self.size += 1

	def delete(self, idx):
		if self.is_empty():
			print("Underflow Error")
			return
		else:
			tmp = self.selectNode(idx)
			# 삭제한 척 LL에서 분리해버린다.
			if tmp == None:
				return
			elif tmp == self.head:
				tmp = self.head
				self.head = self.head.next
			elif tmp == self.tail:
				tmp = self.tail
				self.tail = self.tail.prev
			else:
				tmp.prev.next = tmp.next
				tmp.next.prev = tmp.prev
			# 진짜로 컴퓨터에서 삭제해버리는 delete
			del(tmp)
			self.size -= 1

	def printlist(self):
		target = self.head
		while target != self.tail:
			if target.next != self.tail:
				print(target.data, '<=> ', end='')
			else:
				print(target.data)
			target = target.next
			

