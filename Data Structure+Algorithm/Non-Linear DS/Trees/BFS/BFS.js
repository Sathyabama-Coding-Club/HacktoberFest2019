// This implementation is for binary tree. It will not work with trees more than two child nodes.

class Node {
    constructor(value) {
        this.value = value
        this.left = null
        this.right = null
    }
}

class BinarySearchTree {
    constructor() {
        this.root = null
    }
    /**
    * Insert - to insert new node to the tree
    * @param {*} value - initial value to create a Node
    */
    insert(value) {
        const newNode = new Node(value)
        if (this.root == null) {
            this.root = newNode
            return this
        }
        let currentNode = this.root
        while (true) {
            if (value == currentNode.value) return this
            if (value < currentNode.value) {
                if (currentNode.left == null) {
                    currentNode.left = newNode
                    return this
                }
                currentNode = currentNode.left
            } else {
                if (value > currentNode.value) {
                    if (currentNode.right == null) {
                        currentNode.right = newNode
                        return this
                    }
                    currentNode = currentNode.right
                }
            }
        }
    }

    /*
    * Treverse the tree in breath first order
    */
    BFS() {
        var node = this.root
        var queue = []        // Array to keep track of left and right of a node
        var data = []         // Array to keep track of visited node
        queue.push(node)
        while (queue.length) {
            node = queue.shift()
            data.push(node.value)
            if (node.left) queue.push(node.left)
            if (node.right) queue.push(node.right)
        }
        return data
    }
}

var tree = new BinarySearchTree()
tree.insert(10)
tree.insert(6)
tree.insert(15)
tree.insert(3)
tree.insert(8)
tree.insert(20)
console.log(tree.BFS())