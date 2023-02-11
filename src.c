#include <stdio.h>

void pilihan(){
    int angka;
    int pilih;
    printf("Daftar isi\n");
    printf("1. Menu\n");
    printf("2. beli\n");
    printf("3. keluar\n");
    printf("Masukkan angka: ");
    scanf("%d", pilih);
     if (pilih == 1){
            daftar_menu();
        }
        else if (pilih ==2){
            beli();
        }
        else if (pilih == 3){
            menu_awal();
        }
}

void nama(){
    char nama[30];
    printf("Masukkan nama anda (ganti spasi dengan underscore ex: budi_andi): \n");
    scanf(" %s", nama);
}

void daftar_menu(){
    nama();
    print("Berikut adalah menunya\n");
    pilihan();
    
}

void menu_awal(){
    char buka;
    printf("----------Pemilik Toko----------\n");
    printf("Apakah anda mau membuka toko ?(Y/N) ");
    scanf("%c", &buka);
    if (buka == 'Y'){
        pilihan();    
}
    else{
        printf("Tidak Ada Penjualan");

        }
    return 0;

}


void beli(){
    nama();
    printf("Masukkan ID: \n");
    printf("Masukkan jumlah: \n");
    pilihan();
}



int main(){
    menu_awal();
}
