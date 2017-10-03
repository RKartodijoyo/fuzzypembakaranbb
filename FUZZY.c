#include<stdio.h>

int main(){
	printf("selamat datang di program simulasi pengkontrolan pembakaran batu bata\n dengan menggunakan metode fuzzy tsugeno-kang\n");
	printf("program ini menggunakan 2 input dan 1 output\n");
	printf("oleh rizaldi 11041055\n\n\n");
	printf("Membership function dari jumlah bata \n\n");
printf("    SE   BA   SB\n");

	printf("     .    .    .     \n");
	printf("    . . .   . . .    \n");	
	printf("   .   .     .   .   \n");	
	printf("  .   . .   . .   .  \n");	
	printf(" .   .   . .   .   . \n");	
	printf(".   .     .     .   .\n");
	printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n");
	printf("NE\tNZ\tPE\n");
	printf("a=50.000\ta=55.000\ta=60.000\n");
	printf("b=54.000\tb=60.000\tb=66.000\n");
	printf("c=60.000\tc=65.000\tb=70.000\n\n\n");
	
	printf("Membership function dari ketebalan \n\n");
	printf("    TI   TE   ST\n");

	printf("     .    .    .     \n");
	printf("    . . .   . . .    \n");	
	printf("   .   .     .   .   \n");	
	printf("  .   . .   . .   .  \n");	
	printf(" .   .   . .   .   . \n");	
	printf(".   .     .     .   .\n");
	printf("\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n");
	printf("NE\tNZ\tPE\n");
	printf("a=45mm\ta=50mm\ta=55mm\n");
	printf("b=48mm\tb=55mm\tb=62mm\n");
	printf("c=55mm\tc=60mm\tb=65mm\n\n\n");

	printf("normal panas sangat panas  \n\n");
	
	printf(".    .     .\n");
	printf(".    .     .  \n");	
	printf(".    .     .\n");	
	printf(".    .     .\n");	
	printf(".    .     .\n");	
	printf(".    .     .\n");
	printf("\"\"\"\"\"\"\"\"\"\"\"\"\n");
	printf("800  900   1000");
	
	
	float mb11,mb12,mb13,mb21,mb22,mb23;
	float ep, et;
	printf("\n\nMasukan banyak bata antara 50.000 sampai 70.000 : ");
	scanf("%f",&ep);
	printf("\nMasukan ketebalan bata antara 45mm sampai 65mm : ");
	scanf("%f",&et);
	if(ep>=70000||ep<=50000||et>=65||et<=45){
	printf("maaf input eror");
	}
	else{}
	
	if(ep>50000&&ep<=54000){
	mb11=(ep-50000)/5000;
	mb12=0;
	mb13=0;
	 }
	 else if(ep>54000&&ep<=55000){
	 	mb11=(ep-50000)/5000;
	 	mb12=(ep-54000)/6000;
	 	mb13=0;
	 		 }
	else if(ep>55000&&ep<=60000){
		mb11=(60000-ep)/5000;
		mb12=(ep-54000)/6000;
		mb13=0;
	}
	else if (ep>60000&&ep<=65000){
		mb11=0;
		mb12=(66000-ep)/6000;
		mb13=(ep-60000)/5000;
	}
	else if(ep>65000&&ep<=66000){
		mb11=0;
		mb12=(66000-ep)/6000;
		mb13=(ep-65000)/5000;
	}
	else if(ep>66000&&ep<=70000){
		mb11=0;
		mb12=0;
		mb13=(ep-65000)/5000;
	}
	
	
	
	
	if(et>45&&et<=48){
	mb21=(et-45)/5;
	mb22=0;
	mb23=0;
	 }
	 else if(et>48&&et<=50){
	 	mb21=(et-45)/5;
	 	mb22=(et-48)/7;
	 	mb23=0;
	 		 }
	else if(et>50&&et<=55){
		mb21=(55-et)/5;
		mb22=(et-48)/7;
		mb23=0;
	}
	else if (et>55&&et<=60){
		mb21=0;
		mb22=(62-et)/7;
		mb23=(et-55)/5;
	}
	else if(et>60&&et<=62){
		mb21=0;
		mb22=(62-et)/7;
		mb23=(65-et)/5;
	}
	else if(et>62&&et<=65){
		mb21=0;
		mb22=0;
		mb23=(65-et)/5;
	}
	
	float z1,z2,z3,z4,z5,z6;
	z1= mb11*800;
	z2= mb12*900;
	z3=mb13*1000;
	z4=mb21*800;
	z5=mb22*900;
	z6=mb23*1000;
	
	float cog;
	cog=(z1+z2+z3+z4+z5+z6)/(mb11+mb12+mb13+mb21+mb22+mb23);
	
	printf("\nnilai a1 adalah : %f",mb11);
	
	printf("\nnilai a2 adalah : %f",mb12);
	
	printf("\nnilai a3 adalah : %f",mb13);
	printf("\n\nnilai a4 adalah : %f",mb21);
	
	printf("\nnilai a5 adalah : %f",mb22);
		printf("\nnilai a6 adalah : %f",mb23);
	printf("\n\nnilai z1 adalah : %f",z1);
	
	printf("\nnilai z2 adalah : %f",z2);
	
	printf("\nnilai z3 adalah : %f",z3);
	printf("\n\nnilai z4 adalah : %f",z4);
	
	printf("\nnilai z5 adalah : %f",z5);
	printf("\nnilai z6 adalah : %f",z6);
	printf("\n\nnilai COG adalah : %.0f derajat",cog);
	
	return 0;
}
