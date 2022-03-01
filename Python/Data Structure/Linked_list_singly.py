
class Node:
    def __init__(self,value):
        self.value = value
        self.next = None

class LinkedList:
    def __init__(self, head=None):
        self.head = head
    
    def append(self,new_element):
        current = self.head
        if self.head :
            while current.next:
                current = current.next
            current.next = new_element
        else:
            self.head = new_element

    def Traversal(self):
        current = self.head
        while current:
            print(current.value, end= " ")
            current=current.next    
        print("\n")

    def Delete_at_Position(self,position):
        prev =None
        current =self.head
        counter = 1
        if position <1 :
            return None
        elif position>1:
            while counter < position:
                prev = current
                current = current.next
                counter += 1
        
        if counter == position:
            if prev :
                prev.next = current.next
            else:
                self.head = current.next

    def deleteValue(self,value):
        count = 0
        current = self.head
        Prev = None
        while count< self.countNodes():
            if (current.value == value):
                break
            Prev = current
            current = current.next
            count+=1
        if(current.value == value):
            if Prev:
                Prev.next = current.next
            else:
                self.head = current.next
        else:
            print("Value is Not Present in List")

    def countNodes(self):
        current = self.head 
        count = 0
        while current:
            count+=1
            current =current.next
        return count

if __name__ == '__main__':
    N1 = Node(4)
    LL = LinkedList()
    LL.append(N1)
    N2 = Node(44)
    N3 = Node(84)
    N4 = Node(124)
    N5 = Node(546)
    N6 = Node(433)
    LL.append(N2)
    LL.append(N3)
    LL.append(N4)
    LL.append(N5)
    LL.append(N6)
    LL.Traversal()
    #LL.Delete_at_Position(5)
    LL.deleteValue(433)
    print("After deletion")
    LL.Traversal()



