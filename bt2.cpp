#include <stdio.h>
int main() {
    int tuoi_benh_nhan[4];
    int co_bao_hiem[4];
    int phi_kham[4];
    int tong_doanh_thu = 0;
    int tong_uu_tien = 0;
    int i;
    // Nhap thong tin 4 benh nhan
    for (i = 0; i < 4; i++) {
        printf("\nNhap thong tin benh nhan %d\n", i + 1);
        printf("Nhap tuoi: ");
        scanf("%d", &tuoi_benh_nhan[i]);
        printf("Co BHYT (1: Co, 0: Khong): ");
        scanf("%d", &co_bao_hiem[i]);
    }
    // Xu ly thong tin 4 benh nhan
    for (i = 0; i < 4; i++) {
        // Kiem tra tuoi
        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {
            phi_kham[i] = 0;
        } else {
            // Kiem tra BHYT
            if (co_bao_hiem[i] != 0 && co_bao_hiem[i] != 1) {
                co_bao_hiem[i] = 0;
            }
            // Tinh phi kham
            if (co_bao_hiem[i] == 1) {
                phi_kham[i] = 40000;
            } else {
                phi_kham[i] = 200000;
            }
            // Kiem tra benh nhan uu tien
            if (tuoi_benh_nhan[i] > 70) {
                tong_uu_tien++;
            }
        }
        // Cong doanh thu
        tong_doanh_thu = tong_doanh_thu + phi_kham[i];
    }
    // In ket qua
    printf("\n============================================\n");
    printf("       BAO CAO TIEP NHAN MEDCARE CLINIC\n");
    printf("============================================\n");
    for (i = 0; i < 4; i++) {
        printf("\nBenh nhan %d\n", i + 1);
        printf("Tuoi: %d\n", tuoi_benh_nhan[i]);
        printf("BHYT: %d\n", co_bao_hiem[i]);
        printf("Phi kham: %d VNĐ\n", phi_kham[i]);
        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {
            printf("Luồng: LOI DU LIEU\n");
        } else if (tuoi_benh_nhan[i] > 70) {
            printf("Luồng: UU TIEN\n");
        } else {
            printf("Luồng: THUONG\n");
        }
    }
    printf("\n============================================\n");
    printf("Tong doanh thu: %d VNĐ\n", tong_doanh_thu);
    printf("Tong so ca UU TIEN: %d\n", tong_uu_tien);
    printf("============================================\n");
    return 0;
}
