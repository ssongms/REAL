# 1406 에디터

editor_string = list(input()) # 초기 입력되어 있는 문자열
N = len(editor_string)
cursor = N # 커서는 문장 맨 뒤에 위치 (젤 앞이 index 0)
M = int(input()) # 입력할 명령어 개수

for _ in range(M):
    command = input()
    if command == "L":
        if cursor != 0:
            cursor -= 1
    elif command == "D":
        if cursor != N:
            cursor += 1
    elif command == "B":
        if cursor != 0:
            editor_string.pop(cursor - 1)
            ###editor_string = editor_string[:cursor] + editor_string[cursor + 1:]
            cursor -= 1
    else:
        editor_string.insert(cursor, command[-1])
        cursor += 1

editor_string = ''.join(editor_string)
print(editor_string)