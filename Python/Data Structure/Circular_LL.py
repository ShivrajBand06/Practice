from ast import Delete


class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Circular_LL:
    def __init__(self, head =None):
        self.head = head
    
    def push(self,data):
        ptr = Node(data)   
        current = self.head 
        ptr.next = self.head

        if self.head:
            while current.next != self.head:
                current = current.next
            current.next = ptr

        else: 
            ptr.next = ptr 
        
         
        self.head = ptr
    '''
    Time Complexity O(2n)
    def append(self, data):
        
        ptr = Node(data)
        if self.head:

            count = self.count_Nodes()
            current = self.head
           # print(count)
            while count > 1:
                current = current.next
                #print(count)
                count -=1
            ptr.next = current.next
            current.next = ptr
        else:
            ptr.next=ptr
            self.head = ptr
    '''
    def append(self, data):
        
        ptr = Node(data)
        if self.head:
            current = self.head
            while True:
                current = current.next
                if current.next ==self.head:
                    break
            ptr.next = current.next
            current.next = ptr
        else:
            ptr.next= ptr
            self.head = ptr


    def deleteLast(self):
        current = self.head
        while True:
            ptr = current
            current = current.next
            if current.next == self.head:
                break
        ptr.next = current.next
        self.head = ptr.next

    def deleteFirst(self):
        current = self.head
        while True:
            current = current.next
            if current.next == self.head:
                break
        current.next = self.head.next
        self.head = current.next

    def delete_at_position(self, position):
        if(position  <= self.count_Nodes() and position > 0 ):
            if(position == 1):
                self.deleteFirst()
            else:
                current = self.head
                prev = None
                count = 0

                while count< position-1:
                    prev = current
                    current = current.next
                    count+=1
                prev.next = current.next


    def Traversal(self):
        current = self.head
        while True:
            print(current.value,end= " ")
            current = current.next
            if(current == self.head):
                break

    def insert_at_position(self, position,data):
        if(position <= self.count_Nodes()+1 and position > 0):
            if(position == 1):
                self.push(data)
            else:
                ptr = Node(data)
                count = 1
                current = self.head
                while count < position-1:
                    current = current.next
                    count+=1
                ptr.next = current.next 
                current.next = ptr
        else:
            print("Can't insert on this position, Position is greater than size")
    
    def count_Nodes(self):
        if self.head :
            current = self.head
            count = 0
            while True:
                current = current.next
                count += 1
                if current == self.head:
                    break
            return count
        else:
            return 0

    def deleteValue(self, value):
        current = self.head
        Prev = None
        count = 0
        while count <= self.count_Nodes():
            if(current.value == value):
                break
            Prev = current
            current = current.next
            count+=1
        if current.value == value:

            if Prev :
                Prev.next= current.next
            else :
                self.head = current.next
        else:
            print("Value is Not present in List")

if __name__ =='__main__':
    

    LL = Circular_LL()
    
    LL.push(2)
    LL.push(3)
    LL.push(4)
    LL.push(5)
    LL.push(6)

    LL.Traversal()
    print("\n")
    #print(LL.count_Nodes())
    LL.append(1)
    LL.Traversal()
    print("\n")
   # LL.deleteLast()
    #LL.Traversal()
   # print("\n")
    #LL.deleteFirst()
   # LL.Traversal()
    LL.insert_at_position(7,88)
    LL.Traversal()
    #LL.delete_at_position(6)
    print("\n")
    LL.deleteValue(17)
    LL.Traversal()
    

