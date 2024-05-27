# 더블 링크드 리스트로 구현

import sys
input = sys.stdin.readline

originText = input().strip()
commandLen = int(input())

class Node: # 노드 클래스
    def __init__(self, value = None): # 노드의 값과 이전, 다음 노드를 가짐
        self.value = value 
        self.prev = None
        self.next = None

class LinkedList: # 더블 링크드 리스트 클래스
    def __init__(self):
        self.head = Node()
        self.tail = Node()
        self.head.next = self.tail
        self.tail.prev = self.head
        self.cursor = self.tail

    def append(self, value):
        new_node = Node(value)
        prev_node = self.tail.prev
        prev_node.next = new_node
        new_node.prev = prev_node
        new_node.next = self.tail
        self.tail.prev = new_node

    def insertBeforeCursor(self, value):
        new_node = Node(value)
        prev_node = self.cursor.prev
        prev_node.next = new_node
        new_node.prev = prev_node
        new_node.next = self.cursor
        self.cursor.prev = new_node

    def deleteBeforeCursor(self):
        if self.cursor.prev == self.head:
            return
        node_to_delete = self.cursor.prev
        prev_node = node_to_delete.prev
        prev_node.next = self.cursor
        self.cursor.prev = prev_node

    def moveCursorLeft(self):
        if self.cursor.prev != self.head:
            self.cursor = self.cursor.prev

    def moveCursorRight(self):
        if self.cursor != self.tail:
            self.cursor = self.cursor.next

    def getText(self):
        current = self.head.next
        result = []
        while current != self.tail:
            result.append(current.value)
            current = current.next
        return ''.join(result)

class Editor:
    def __init__(self, originText):
        self.text = LinkedList()
        for char in originText:
            self.text.append(char)

    def switchCommand(self, command, item):
        if command == 'L':
            self.text.moveCursorLeft()
        elif command == 'D':
            self.text.moveCursorRight()
        elif command == 'B':
            self.text.deleteBeforeCursor()
        elif command == 'P':
            self.text.insertBeforeCursor(item)

editor = Editor(originText)
for i in range(commandLen):
    commandList = input().split()
    command = commandList[0]
    item = commandList[1] if command == 'P' else None
    editor.switchCommand(command, item)

print(editor.text.getText())