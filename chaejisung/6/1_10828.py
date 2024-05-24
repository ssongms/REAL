# stack 구현체
class Stack:
    def __init__(self):
        self.storage = []
        self.size = 0
        return None
    
    def push(self, elem):
        self.storage.append(elem)
        self.size += 1
        return None
    
    def pop(self):
        if(not self.size):
            return -1
        self.size -= 1
        return self.storage.pop()
    
    def getSize(self):
        return self.size
    
    def isEmpty(self):
        if(not self.size):
            return 1
        return 0
    
    def getTop(self):
        if(not self.size):
            return -1
        return self.storage[self.size-1]
    
    # 스택의 다른 메서드들과 명령을 매핑
    def getPrompt(self, input_):
        inputArr = input_.split(" ")
        
        if(inputArr[0] == "push"):
            self.push(inputArr[1])
            return None
        elif(inputArr[0]=="pop"):
            return self.pop()
        elif(inputArr[0]=="top"):
            return self.getTop()
        elif(inputArr[0] == "size"):
            return self.size
        elif(inputArr[0]=="empty"):
            return self.isEmpty()
# 입력        
N = int(input())
inputArr = []
for i in range(N):
    inputArr.append(input())

# 실행
stack1 = Stack()
for i in inputArr:
    output = stack1.getPrompt(i)
    if(output != None):
        print(output)
        
        
# 실은 일케해야.. 더 빠르고 메모리도 덜먹긴 해요..        
"""
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int num;
    cin >> num;
    cin.ignore();
    
    vector<string> vec;
    string order;
    for(int i=0; i<num; i++){
        getline(cin, order);
        if(order == "pop"){
            if(vec.size() == 0){ cout << -1 << endl;}
            else{
                cout << vec.back() << endl;
                vec.pop_back();
            }
        }
        else if(order == "top"){
            if(vec.size() == 0){ cout << -1 << endl;}
            else{cout << vec.back() << endl;}
        }
        else if(order == "size"){
            cout << vec.size() << endl;
        }
        else if(order == "empty"){
            cout << ((vec.size() == 0)?1:0) << endl;
        }
        else{
            order.erase(0,5);
            vec.push_back(order);
        }
    }
    
}

"""