#pragma once
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define MAX_STRING 100
#define MAX_STACK_SIZE 100

class Student {
	int id; // 학번
	char name[MAX_STRING]; // 이름
	char dept[MAX_STRING]; // 소속 학과

public:
	Student(int i = 0, const char* n = "", const char* d = "") { set(i, n, d); }
	void set(int i, const char* n, const char* d) {
		id = i;
		strcpy_s(name, n); // 문자열 복사 함수
		strcpy_s(dept, d); // 문자열 복사 함수
	}
	void display() {
		printf(" 학번:%-15d 성명:%-10s 학과:%-20s\n", id, name, dept);
	}
};

class StudentStack
{
	int top; // 요소의 개수
	Student data[MAX_STACK_SIZE];
public:
	// 생성자
	StudentStack() {
		top = -1;
	}

	bool isEmpty() {
		return (top == -1);
	}

	bool isFull() {
		return (top == MAX_STACK_SIZE - 1);
	}
	void push (Student e){
		if (isFull()) {
			printf("스택 포화 오류\n");
			return;
		}
		data[++top] = e;
	}
	Student pop() {
		if (isEmpty()) {
			printf("스택 공백 오류\n");
			return Student();
		}
		return data[top--];
	}
	Student peek() {
		if (isEmpty()) {
			printf("스택 공백 오류\n");
			return Student();
		}
		return data[top];
	}
	void display() {
		printf("[스택 항목의 수 = %2d] ==> ", top + 1);
		for (int i = 0; i <= top; i++)
			data[i].display();
		printf("\n");
	}
	
};