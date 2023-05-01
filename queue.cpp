#include<iostream>
#define MAX_SIZE 1000

using namespace std;

struct Queue {
  int arr[MAX_SIZE];
  int front;
  int rear;
  int size;
};
void createQueue(Queue *q) {
  q->front = -1;
  q->rear = -1;
  q->size = 0;
}

void enqueue(Queue *q, int data) {
  if (q->rear == MAX_SIZE - 1) {
    cout << "Antrian sudah penuh!" << endl;
    return;
  }
  
  if (q->front == -1 && q->rear == -1) {
    q->front = 0;
    q->rear = 0;
  } else {
    q->rear++;
  }
  
  q->arr[q->rear] = data;
  q->size++;
  cout << data << " ditambahkan ke antrian." << endl;
}

void dequeue(Queue *q) {
  if (q->front == -1 || q->front > q->rear) {
    cout << "Antrian kosong!" << endl;
    return;
  }
  
  int data = q->arr[q->front];
  q->front++;
  q->size--;
  cout << data << " dihapus dari antrian." << endl;
}

int main() {
  Queue q;
  createQueue(&q);
  
  int choice, data;
  
  do {
    cout << "\n=====================================" << endl;
    cout << "  MENU ANTRIAN" << endl;
    cout << "=====================================" << endl;
    cout << "1. Tambah elemen ke antrian" << endl;
    cout << "2. Hapus elemen dari antrian" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan Anda: ";
    cin >> choice;
    
    switch(choice) {
      case 1:
        cout << "Masukkan data: ";
        cin >> data;
        enqueue(&q, data);
        break;
        
      case 2:
        dequeue(&q);
        break;
        
      case 3:
        cout << "Terima kasih!" << endl;
        break;
        
      default:
        cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
    }
  } while (choice != 3);
  
  return 0;
}

