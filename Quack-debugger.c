#include <stdio.h>

int main() {
  
  char issue[1000];
  char path[1000];
  char yn;
  
  printf("please specify the absolute path of the file that dosent work:\n");
  
  scanf(" %s", path);
  
  if (!access(path, 0) == 0){
      printf("file not found\n enter to continue\n");
      
      printf("\npress enter to continue\n");
      while (getchar() != '\n')
        ;
      getchar();
      main();
  }
  
  progress();
  
  printf("solution has been found, fix code? (y/n)\n");
  


  scanf(" %c", &yn);

  if (yn == 'y') {
  
  } else if (yn == 'n') {
  return 0;
  } else {

    printf("invalad input");
    main();

  }

  
  erase(path);
  progress();
  
  printf("code fixed, thank you for using this program\n");
  
  return 0;
}

int progress(){
     int i = 0;
     for (i = 0; i < 10000; i++){
         printf("\rIn progress %d", i/100);
       fflush(stdout);
     }
     printf("\n");
 }

int erase(char path[1000]) { 
    FILE* FileBeingWritenTo; 
    FileBeingWritenTo = fopen(path, "w+"); 
    fprintf(FileBeingWritenTo, "%s", ""); 
  fprintf(FileBeingWritenTo, "quack");
} 
