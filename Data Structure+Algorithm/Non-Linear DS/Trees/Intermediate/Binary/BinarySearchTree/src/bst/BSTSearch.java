package bst;

import java.util.ArrayList;
import java.util.List;

class BSTSearch<T extends Comparable<T>> {

	private BinarySearchTreeNode<T> root;

	public BSTSearch() {
		root = new BinarySearchTreeNode<T>();
	}

	public BinarySearchTreeNode<T> getRoot() {
		return this.root;
	}

	public boolean isEmpty() {
		return root.isEmpty();
	}

	public void insert(T element) {
		if (element != null) {
			this.insert(root, element);
		}
	}

	public void insert(BinarySearchTreeNode<T> node, T element) {
		if (node.isEmpty()) {

			node.setData(element);
			node.setLeft(new BinarySearchTreeNode<T>());
			node.setRight(new BinarySearchTreeNode<T>());

			node.getRight().setParent(node);
			node.getLeft().setParent(node);

		} else {
			if (element.compareTo(node.getData()) > 0) {
				insert(node.getRight(), element);
			} else {
				insert(node.getLeft(), element);
			}
		}
	}

	@SuppressWarnings("unchecked")
	public T[] search(T element) {
		List<T> lista = new ArrayList<T>();
		this.search(root, element, lista);
		return lista.toArray((T[]) new Comparable[lista.size()]);
	}

	private void search(BinarySearchTreeNode<T> node, T element, List<T> lista) {
		if (!node.isEmpty()) {

			lista.add(node.getData());

			if (element.equals(node.getData())) {

			} else if (element.compareTo(node.getData()) > 0) {
				this.search(node.getRight(), element, lista);
			} else {
				this.search(node.getLeft(), element, lista);
			}

		}
	}
}
