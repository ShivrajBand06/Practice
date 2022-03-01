from unicodedata import name


class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class BST:
    def __init__(self, value):
        self.root = Node(value)
    
    def insert(self,value):
        self.insert_helper(self.root, value)

    def insert_helper(self, current, value):
        if current.value > value:
            if current.left:
                self.insert_helper( current.left, value)

            else:
                current.left = Node(value)
        else:
            if current.right:
                self.insert_helper(current.right,value)
            else:
                current.right = Node(value)

    def search(self,value):
        self.search_helper(self.root, value)
    
    def search_helper(self,current, value):
        if current.value == value:
            return True
        elif current.value > value:
            self.search_helper(current.left,value)
        elif current.value < value:
            self.search_helper(current.right, value)
        return False
        
    def Depth_of_Node(self, value):
        depth = 0
        depth = self.Depth(self.root,value,depth)
        return depth
    
    def Depth(self, current, value, depth):
        
        if current.value == value:
            return depth
        elif current.value > value:
            depth +=1
            self.Depth(current.left,value, depth)
        else :
            depth +=1
            self.Depth(current.right, value, depth)
        
        
    
    def Inorder_Traversal(self):
        print(self.Inorder(self.root,"")[:-1])
        print("\n")

    def Inorder(self, start, traversal):
        if start:
            traversal = self.Inorder(start.left,traversal)
            traversal += (str(start.value)+"-")
            traversal = self.Inorder(start.right,traversal)
        return traversal
    
    def Preorder_traversal(self):
        print(self.Preorder(self.root,"")[:-1])
        print("\n")
    
    def Preorder(self, start, traversal):
        if start:
            traversal += (str(start.value)+"-")
            traversal = self.Preorder(start.left,traversal)
            traversal = self.Preorder(start.right, traversal)
        return traversal

    def Postorder_traversal(self):
        print(self.Postorder(self.root,"")[:-1])
        print("\n")
    
    def Postorder(self, start, traversal):
        if start:
            traversal = self.Postorder(start.left,traversal)
            traversal = self.Postorder(start.right,traversal)
            traversal += (str(start.value)+"-")
        return traversal
    


if __name__=='__main__':
    Tree = BST(65)
    Tree.insert(77)
    Tree.insert(45)
    Tree.insert(37)
    Tree.insert(66)
    Tree.insert(467)
    Tree.insert(88)
    Tree.insert(7)
    Tree.insert(73)
    Tree.insert(36)
    Tree.insert(85)
    Tree.insert(967)
    Tree.insert(34)
    Tree.insert(124)
    Tree.insert(104)
    Tree.insert(351)
    Tree.Inorder_Traversal()
    Tree.Preorder_traversal()
    Tree.Postorder_traversal()
    print(Tree.Depth_of_Node(77))


