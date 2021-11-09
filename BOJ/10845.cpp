#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 10001

typedef struct QueueType {
	int data[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;

void init_queue(QueueType* q);
void dequeue(QueueType* q, int item);
int pop(QueueType* q);
int is_Empty(QueueType* q);
int q_size(QueueType* q);
int q_front(QueueType* q);
int q_back(QueueType* q);

int main(void) {
	int n, num;
	char str[6];
	QueueType q;
	init_queue(&q);
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%s", str);
		if (!strcmp(str, "push")) {
			scanf_s("%d", &num);
			dequeue(&q, num);
		}
		else if (!strcmp(str, "pop")) {
			printf("%d\n", pop(&q));
		}
		else if (!strcmp(str, "front")) {
			printf("%d\n", q_front(&q));
		}
		else if (!strcmp(str, "back")) {
			printf("%d\n", q_back(&q));
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", q_size(&q));
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", is_Empty(&q));
		}
	}
	return 0;
}
void init_queue(QueueType* q) {
	q->front = q->rear = 0;
}
void dequeue(QueueType* q, int item) {
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}
int pop(QueueType* q) {
	if (is_Empty(q)) {
		return -1;
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}
int is_Empty(QueueType* q) {
	if ((q->front == q->rear)) {
		return 1;
	}
	else {
		return 0;
	}
}
int q_size(QueueType* q) {
	int cut = 0;
	for (int i = q->front; i < q->rear; i++) {
		cut++;
	}
	return cut;
}
int q_front(QueueType* q) {
	if (is_Empty(q)) {
		return -1;
	}
	return q->data[q->front + 1];
}
int q_back(QueueType* q) {
	if (is_Empty(q)) {
		return -1;
	}
	return q->data[q->rear];
}