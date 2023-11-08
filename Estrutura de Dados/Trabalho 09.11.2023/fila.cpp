#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Função para inicializar a fila
void initialize(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Função para verificar se a fila está vazia
int isEmpty(Queue *queue) {
    return (queue->front == -1);
}

// Função para verificar se a fila está cheia
int isFull(Queue *queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Função para adicionar um elemento à fila
void enqueue(Queue *queue, int item) {
    if (isFull(queue)) {
        printf("A fila está cheia. Não é possível adicionar mais elementos.\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }

    queue->data[queue->rear] = item;
}

// Função para remover um elemento da fila
int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia. Não é possível remover elementos.\n");
        return -1; // Valor inválido
    }

    int item = queue->data[queue->front];
    
    if (queue->front == queue->rear) {
        // Se houver apenas um elemento na fila, a fila fica vazia
        initialize(queue);
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }

    return item;
}

int main() {
    Queue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Elemento removido: %d\n", dequeue(&queue));
    printf("Elemento removido: %d\n", dequeue(&queue));
    printf("Elemento removido: %d\n", dequeue(&queue));

    return 0;
}
