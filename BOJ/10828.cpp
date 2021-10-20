#include <iostream>
#include <string>
#define MAX_STACK_SIZE 10001

using namespace std;

typedef struct {
	int data[MAX_STACK_SIZE];
	int top;
}StackType;
void init_stack(StackType* s) {
	s->top = -1;
}
int is_Empty(StackType* s) {
	if (s->top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}
void push(StackType* s, int item) {
	s->data[++(s->top)] = item;
}
int pop(StackType* s) {
	if (s->top == -1) {
		return -1;
	}
	else {
		return s->data[(s->top)--];
	}
}
int top(StackType* s) {
	if (s->top != -1) {
		return s->data[s->top];
	}
	else {
		return -1;
	}
}
int is_size(StackType* s) {
	return s->top + 1;
}
int main() {
	int N, ps;
	cin >> N;
	StackType s;
	init_stack(&s);
	string name;
	for (int i = 0; i < N; i++) {
		cin >> name;
		if (name == "push") {
			cin >> ps;
			push(&s, ps);
		}
		else if (name == "top") {
			cout << top(&s) << endl;
		}
		else if (name == "empty") {
			cout << is_Empty(&s) << endl;
		}
		else if (name == "pop") {
			cout << pop(&s) << endl;
		}
		else if (name == "size") {
			cout << is_size(&s) << endl;
		}
	}
	return 0;
}