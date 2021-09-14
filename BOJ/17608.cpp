// 런타임 에러.. 왜인지 모르겠다. 정답은 다 잘나온다.
#include <iostream>
#define MAX_STACK_SIZE 100

using namespace std;

typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

void init_stack(StackType* s) {
	s->top = -1;
}
int is_Empty(StackType* s){
	return s->top == -1;
}
int is_full(StackType* s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}
void push(StackType* s, int num) {
	if (is_full(s)) {
		fprintf(stderr, "스택 포화\n");
		return;
	}
	else s->data[++(s->top)] = num;
}
element pop(StackType* s) {
	if (is_Empty(s)) {
		fprintf(stderr, "스택 공백\n");
		exit(1);
	}
	else return (s->data[(s->top)--]);
}
element peek(StackType* s) {
	if (is_Empty(s)) {
		fprintf(stderr, "스택 공백\n");
		exit(1);
	}
	else return (s->data[(s->top)]);
}

int main() {
	StackType count;
	init_stack(&count);
	int first, look = 0, max = 0;;
	cin >> first;
	int* arr = new int[first];
	for (int i = 0; i < first; i++) {
		cin >> arr[i];
		push(&count, arr[i]);
	}
	for (int i = 0; i < first; i++) {
		if (max < count.data[count.top]) {
			max = count.data[count.top];
			look += 1;
		}
		else if (max >= count.data[count.top]) {
			look += 0;
		}
		pop(&count);
	}
	cout << look << "\n";
	delete[] arr;
	return 0;
}
