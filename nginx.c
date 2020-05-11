#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
/* Renk Ayarları */
#define yesil  "\033[0;29m"
#define kirmizi "\033[0;31m"
#define mavi "\033[0;36m"
#define sari  "\x1B[33m"
#define normal "\033[0m"
#define scriptversion "v1"
#define coded "MR.HASAN"

int main(){
	baslangic();
	return 0;
}

baslangic(){
  system("clear");
	printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
	printf("%s◄ ►     %sNginx Kurulum %s%s %sby %s%s %s& %s%s %s    ◄ ►\n",mavi,normal,kirmizi,scriptversion,normal,kirmizi,coded,normal,kirmizi,coded2,mavi);
	printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
  printf("%s◄ ►       %s1) %sNginx Kur                   %s◄ ►\n",mavi,sari,normal,mavi);
  printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
  int sectir;
  printf("%sCevap: %s",mavi,normal);
  scanf("%d",&sectir);
  if(sectir==1){
  system("clear");
  kurulumyapalim();
  } else {
	system("clear");
	hatalisectiniz();
	}
  }



kurulumyapalim(){
system("sudo apt update");
system("sudo apt upgrade");
system("sudo apt install nginx");
system("sudo systemctl enable nginx");
system("sudo systemctl start nginx");
system("cd /etc/nginx/sites-available/");
system("wget https://stresser.me/siteadi.conf");
system("cd /etc/nginx/sites-enabled/");
system("sudo ln -v -s /etc/nginx/sites-available/siteadi.conf");
system("sudo nginx -t");
system("sudo systemctl reload nginx");
}



hatalisectiniz(){
  printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►\n",mavi);
	printf("%s◄ ►                                                     ◄ ►\n",mavi);
	printf("%s◄ ►     %sYanlış tuşlama yapıldı, script kapatılıyor.     %s◄ ►\n",mavi,normal,mavi);
	printf("%s◄ ►                     %sİyi Günler                      %s◄ ►\n",mavi,normal,mavi);
	printf("%s◄ ►                                                     ◄ ►\n",mavi);
	printf("%s◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ► ◄ ►",mavi);
	printf("%s \n",normal);
	exit(-1);
}
