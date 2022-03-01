from hashlib import new


class Element:
    def __init__(self, value):
        self.value = value
        self.next = None

class Linkedlist:
    def __init__(self, head = None):
        self.head = head
    
    def Delete_First(self):
        Delete = self.head
        temp = self.head.next
        self.head = temp
        return Delete.value

    def InsertLast(self,newElement):
        current = self.head
        while current.next:
            current = current.next
        current.next = newElement

    def Traversal(self):
        current = self.head
        while current:
            print(current.value)
            current = current.next
        
class Queue:
    def __init__(self,rear):
        self.LL = Linkedlist(rear)

    def Enqueue(self,new_element):
        self.LL.InsertLast(new_element)
    
    def Dequeue(self):
        return self.LL.Delete_First()
    
    def Queue_traversal(self):
        self.LL.Traversal()
    
if __name__ == '__main__':
    E1 = Element(45)
    E2 = Element(4)
    E3 = Element(96)
    E4 = Element(12)
    E5 = Element(66)
    E6 = Element(34)
    E7 = Element(730)

    Q = Queue(E1)
    #Q.Queue_traversal()

    Q.Enqueue(E2)
    Q.Enqueue(E3)
    Q.Enqueue(E4)
    Q.Enqueue(E5)
    Q.Queue_traversal()
    print("After Traversal")
    print(f"{Q.Dequeue()} is Dequeued value")
    print(f"{Q.Dequeue()} is Dequeued value")
    Q.Queue_traversal()
    print("After Traversal")
    Q.Enqueue(E6)
    Q.Enqueue(E7)
    Q.Queue_traversal()
    print("After Traversal")
    print(f"{Q.Dequeue()} is Dequeued value")
    Q.Queue_traversal()





