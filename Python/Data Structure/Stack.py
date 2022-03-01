from ast import Delete
from multiprocessing.dummy import current_process
from pickle import EXT1


class Element:
    def __init__(self, value):
        self.value = value
        self.next = None

class Linked_list:
    def __init__(self,head = None):
        self.head = head
    
    def Append(self, Element):
        if self.head:
            current = self.head
            while current:
                current = current.next
            current.next = Element
    
    def Insert_at_first(self, Element):
        Element.next = self.head
        self.head = Element


    def Delete_at_first(self):
        Delete = self.head
        NewHead = self.head.next
        self.head = NewHead
        return Delete.value
    
    def Traversal(self):
        current = self.head
        while current:
            print(current.value)
            current = current.next

class Stack:
    def __init__(self, top = None):
        self.LL = Linked_list(top)
    
    def push(self, value):
        self.LL.Insert_at_first(value)
    
    def pop(self):
        return self.LL.Delete_at_first()
    
    def Stack_Travelsal(self):
        self.LL.Traversal()

if __name__=='__main__':
    E1 = Element(78)
    E2 = Element(7)
    E3 = Element(8)
    E4 = Element(278)
    E5 = Element(56)
    E6 = Element(99)
    S = Stack(E1)
    S.push(E2)
    S.push(E3)
    S.push(E4)
    S.push(E5)
    S.push(E6)
    S.Stack_Travelsal()
    print("After POP")
    print(f"{S.pop()} Element is popped")
    
    print(f"{S.pop()} Element is popped")
    
    print(f"{S.pop()} Element is popped")
    S.Stack_Travelsal()


