package bst;

class BinarySearchTreeNode<T> {

	private T data;
	private BinarySearchTreeNode<T> left;
	private BinarySearchTreeNode<T> right;
	private BinarySearchTreeNode<T> parent;

	public BinarySearchTreeNode() {

	}

	public BinarySearchTreeNode(T data) {
		super();
		this.data = data;
		this.left = new BinarySearchTreeNode<T>();
		this.right = new BinarySearchTreeNode<T>();
		this.parent = null;
	}

	public BinarySearchTreeNode(T data, BinarySearchTreeNode<T> left, BinarySearchTreeNode<T> right, BinarySearchTreeNode<T> parent) {
		super();
		this.data = data;
		this.left = left;
		this.right = right;
		this.parent = parent;
	}

	public boolean isEmpty() {
		return data == null;
	}

	public T getData() {
		return data;
	}

	public void setData(T data) {
		this.data = data;
	}

	public BinarySearchTreeNode<T> getLeft() {
		return left;
	}

	public void setLeft(BinarySearchTreeNode<T> left) {
		this.left = left;
	}

	public BinarySearchTreeNode<T> getRight() {
		return right;
	}

	public void setRight(BinarySearchTreeNode<T> right) {
		this.right = right;
	}

	public BinarySearchTreeNode<T> getParent() {
		return parent;
	}

	public void setParent(BinarySearchTreeNode<T> parent) {
		this.parent = parent;
	}

}