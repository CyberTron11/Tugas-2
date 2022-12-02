#include <stdio.h>
int main()
{
	printf("Tugas 2 Pertemuan 6 Menghitung Sebuah Volume Kubus\n");
	printf("==================================================\n");
	
	float sisi;
	int volume;
	
	printf("Masukan Nilai dari Ketiga Sisi Kubus : ");
	scanf("%f,", &sisi);
	
	if(sisi == (int)sisi){
		volume = sisi * sisi * sisi;
		
	printf("==================================================\n");
	printf("Hasil Perhitungan Volume Kubus Adalah %i", volume);
	printf("\n\n\n");
	}else {
	printf("Tipe Data Tidak Sesuai\n", volume);
	}
	return 0;
}
