class Node:
    def __init__(self, value ):
        self.value= value
        self.left = None
        self.right = None

class BinaryTree:
    def __init__(self, root):
        self.root = Node(root)

    def Search(self, findVAlue):
        return self.preOrdersearch(tree.root, findVAlue)

    def printTree(self):
        return self.preorder_print(tree.root, "")[:-1]
    
    
    def preOrdersearch(self,start,findvalue):
        if start:
            if start.value == findvalue:
                return True
            else:
                return self.preOrdersearch(start.left,findvalue) or self.preOrdersearch(start.right,findvalue)
        return False

    def preorder_print(self, start, traversal):
        if start:
            traversal += (str(start.value)+"-")
            traversal = self.preorder_print(start.left,traversal)
            traversal = self.preorder_print(start.right,traversal)
        return traversal
    
    def Inorder_print(self,start, traversal):
        if start:
            traversal = self.Inorder_print(start.left,traversal)
            traversal += (str(start.value)+"-")
            traversal = self.Inorder_print(start.right,traversal)
        return traversal

    def postorder_print(self,start,traversal):
        if start:
            traversal = self.postorder_print(start.left,traversal)
            traversal = self.postorder_print(start.right, traversal)
            traversal+= (str(start.value)+" ")
        return traversal

if __name__=='__main__':
    tree = BinaryTree(1)
    tree.root.left = Node(2)
    tree.root.right= Node(3)

    tree.root.left.left = Node(4)
    tree.root.left.right= Node(5)
    tree.root.right.left = Node(6)
    tree.root.right.right= Node(7)
    
    tree.root.left.left.left = Node(8)
    tree.root.left.left.right= Node(9)
    tree.root.left.right.left = Node(10)
    tree.root.left.right.right= Node(11)
    tree.root.right.left.left = Node(12)
    tree.root.right.left.right= Node(13)
    tree.root.right.right.left = Node(14)
    tree.root.right.right.right= Node(15) 
    
    print(tree.printTree())
    print("\n")
    print(tree.Inorder_print(tree.root,"")[:-1])
    print("\n")
    print(tree.postorder_print(tree.root,"")[:-1])
