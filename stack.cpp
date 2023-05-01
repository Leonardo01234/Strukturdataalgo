#include <iostream>
#define MAX_SIZE 1000 

using namespace std;

class Stack {
    private:
        int arr[MAX_SIZE]; 
        int top; 
    public:
        Stack() {
            top = -1; 
        }

        void push(int data) {
            if (top >= MAX_SIZE - 1) {
                cout << "Stack penuh" << endl;
            } else {
                top++;
                arr[top] = data;
                cout << data << " telah dimasukkan ke dalam stack" << endl;
            }
        }

        void pop() {
            if (top <= -1) {
                cout << "Stack kosong" << endl;
            } else {
                int data = arr[top];
                top--;
                cout << data << " telah dihapus dari stack" << endl;
            }
        }
};

int main() {
    Stack myStack;
    int n, data;
    cout << "Masukkan jumlah data yang ingin dimasukkan: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> data;
        myStack.push(data);
    }
    cout << endl;
    cout << "Melakukan operasi pop..." << endl;
    for (int i = 0; i < n; i++) {
        myStack.pop();
    }
    return 0;
}

