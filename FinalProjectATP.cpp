#include <iostream>
using namespace std;

struct Mysong {
    char judul lagu [100];
    char penyanyi [100];
    char genre [100];
    char favorit [100];
    Node *next;
};

void insertAwal (Node** head, string NamaBaru, string NRPBaru, string NomorBaru){

    //Membuat node baru di heap memori
    Node* nodeBaru = new Node ();
    nodeBaru->NRP = NRPBaru;
    nodeBaru->Nama = NamaBaru;
    nodeBaru->Nomor = NomorBaru;
    
    //Membuat pointer next mengarah ke head dimana head merupakan NULL
    nodeBaru->next = *head;
    //Pindahkan head ke node yang baru
    *head = nodeBaru;
    
}

void deleteAwal (Node** head) {
    //Mengecek apakah head = NULL
    // Jika pointer ke head itu sendiri NULL, atau list kosong (*head == NULL)
    if (head == NULL || *head == NULL) {
        cout << "List Kosong" << endl;
        return;
    }

    // Menyimpan alamat node pertama sementara
    Node* t = *head;
    // Memindahkan head ke node berikutnya
    *head = (*head)->next;
    // Menghapus node yang lama
    delete t;
}

void printList(Node* n) {
    int i = 1;
    cout << "== Data Mahasiswa Saat Ini ==" << endl;
    while (n != NULL)
    {   cout << i << "." << endl;
        cout << "NRP: " << n->NRP << endl;
        cout << "Nama: " << n->Nama << endl;
        cout << "Nomor: " << n->Nomor << endl;
        //Jadi kita menginisialisasi agar n dapat mengakses ke alamat dari node berikutnya
        n = n->next;
        i++;
    };
    

};

int main (){
struct Mysong s; 

    
    return 0;

}
