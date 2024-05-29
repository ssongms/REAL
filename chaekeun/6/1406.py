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
from sys import stdin
input = stdin.readline

st1 = list(input().strip())
st2 = []

for _ in range(int(input())):
	cmd = list(input().split())
	if cmd[0] == 'L':
		if st1:
			st2.append(st1.pop())

		elif cmd[0] == 'D':
			if st2:
				st1.append(st2.pop())

		elif cmd[0] == 'B':
			if st1:
				st1.pop()

		else:
			st1.append(cmd[1])

st1.extend(reversed(st2))
print("".join(st1))


#Linked list로 푼 풀이

originText = input().strip()
cmdLen = int(input())

# 노드 클래스 : 노드의 값과 next, prev의 값을 가진다
class Node:
	def __init(self, value = None):
		self.value = value
		self.prev = None
		self.next = None

class DLinkedList:
	def __init__(self, data):
		self.head = Node()
		self.tail = self.head

	def insert(self, data):
		if self.head == None:
			self.head = Node(data)
			self.tail = self.head
		else:
			node = self.head
			while node.next:
				node = node.next
			new = Node(data, prev=node)
			node.next = new
			self.tail = new

	def desc(self):
		node = self.head
		while node:
			print(node.data)
			node = node.next

	def insert_before(self, next_data, new_data):
		if self.head is None:
			self.head = Node(new_data)
			self.tail = self.head
			return True
		else:
			node = self.tail
			while node.data != next_data: # 넣을 위치를 찾는다
				node = node.prev
				if node == None: # head node이면
					return False

			prev_node = node.prev
			new_node = Node(new_data, prev=prev_node, next=node)
			if prev_node:
				prev_node.next = new_node
			else:
				self.head = new_node
			node.prev = new_node
			return True

	def insert_after(self, before_data, new_data):
		if self.head is Node:
			self.head = Node(new_data)
			self.tail = self.head
			return True

		else:
			node = self.head
			while node.data != before_data:
				node = node.next
				if node == None:
					return False
			next_node = node.next
			new_node = Node(new_data, prev=node, next=next_node)
			if next_node:
				next_node.prev = new_node
			else:
				self.tail = new_node
			node.next = new_node

