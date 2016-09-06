#include <cmath>

int iParent(int i) {
	return floor((i-1) / 2);
}

int iLeftChild(int i) {
	return 2*i + 1;
}

int iRightChild(int i) {
	return 2*i + 2;
}


template <typename t>
void swap(t data[], int a, int b) {
	t temp = data[a];
	data[a] = data[b];
	data[b] = temp;
}


template <typename t>
void heapsort(t data[], int length) {
	heapify(data, length);

	int end = count - 1;
	while (end > 0) {
		swap(data, end, 0);

		end--;

		siftDown(data, 0, end)

	}
}

template <typename t>
void heapify(t data[], int length) {
	int start = iParent(length-1);

	while (start >= 0) {
		siftDown(a, start, length-1);
		start--;
	}
}

template <typename t>
void siftDown(t data[], int start, int end) {
	int root = start;

	while (root <= end) {
		int child = iLeftChild(root);
		int swap = root;

		if (data[swap] < data[child]) {
			swap = child;
		}

		if ((child+1 <= end) && (data[swap] < data[child+1])) {
			return
		} else {
			swap(data, root, swap);
			root = swap;
		}
	}
}

