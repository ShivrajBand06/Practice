from re import X


class Node:
    def __init__(self, value = None):
        self.value = value
        self.next = None
        self.prev = None

class DoulbyLL:
    def __init__(self, head = None):
        self.head = head
    
    def Insert_at_first(self, data):
        ptr = Node(data)
        if self.head:
            current = self.head
            current.prev = ptr

            ptr.next = current
            self.head = ptr
        else :
            self.head =ptr
    
    def append(self, data):
        ptr = Node(data)
        if self.head:
            current = self.head
            while current.next:
                current = current.next
            current.next = ptr
            ptr.prev = current
        else:
            self.head = ptr
    
    def Insert_at_position(self,position, data):
        if(position == 1):
            self.Insert_at_first(data)
        elif(position <= self.countNode()+1 and position >0):
            ptr = Node(data)
            count =1
            current = self.head
            while count < position-1:
                current = current.next
                count+=1
            if current.next:
                No = current.next
                ptr.next = No
                current.next = ptr
                No.prev = ptr
                ptr.prev =current
            else:
                ptr.next = current.next
                current.next= ptr
                ptr.prev = current
        else:
            print("Invalid Position")
             
    def Traversal(self):
        current = self.head
        while current:
            print(current.value, end = " ")
            current = current.next
        print("\n")
        
    
    def Reverse_traversal(self):
        Last = self.FindLast()
        while Last:
            print(Last.value, end = " ")
            Last = Last.prev
        print("\n")

    def DeleteFirst(self):
        current = self.head
        x = current.value
        self.head = current.next
        self.head.prev = None
        return x
    
    def DeleteLast(self):
        current = self.head
        prev = None
        while current.next:
            prev = current 
            current = current.next
        prev.next = None
        val = current.value
        return val
    
    def Delete_at_position(self,position):
        if(position == 1):
           return self.DeleteFirst()
        elif(position <= self.countNode() and position > 0):
            current = self.head
            Prev = None
            val = None
            count = 0
            while count < position-1:
                Prev = current
                current = current.next
                count +=1
            if current.next:
                val = current.value   
                Prev.next = current.next
                No = current.next
                No.prev = Prev
                return val
            else:
                val = current.value
                Prev.next = None
                return val
        else:
            print("Invalid Position")
            return 0

    def deleteValue(self,value):
        current = self.head
        count =0
        while count <= self.countNode():
            if current.value == value:
                break
            count+=1
            current = current.next

        if(current.value == value):    
            Prev = current.prev
            Next = current.next
            if(Prev):
                Prev.next = Next
            else:
                Next.prev = None
                if(current == self.head):
                    self.head = Next
                current.next = None
                

            if(Next):   
                Next.prev = Prev
            else:
                Prev.next = None
        else:
            print("Value is not Present")

    def FindLast(self):
        current = self.head
        while current.next:
            current = current.next
        return current

    def countNode(self):
        current = self.head
        count = 0
        while current:
            current = current.next
            count +=1
        return count

if __name__=='__main__':
    DL = DoulbyLL()
    DL.Insert_at_first(7)
    DL.Insert_at_first(8)
    DL.append(1)
    DL.append(5)
    DL.append(86)
    DL.append(73)
    DL.append(30)

    DL.Traversal()
    DL.Reverse_traversal()
    DL.Insert_at_position(8,56)
    DL.Traversal()
    DL.Reverse_traversal()
    #print(f"{DL.Delete_at_position(8)} is Deleted")
    DL.deleteValue(90)    
    DL.Traversal()
    DL.Reverse_traversal()
    #DL.Traversal()

    #print(f"{DL.DeleteLast()} is Deleted")

