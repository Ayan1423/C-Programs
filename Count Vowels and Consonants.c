#include<stdio.h>
#include<string.h>
int main()
{	
	char str[100]; 
	int vowels=0, consonant=0, digits=0, space=0, symbols=0, i;
	
	printf("Enter the string : ");
	scanf("%[^\n]s", &str);
	
	for( i = 0; i < strlen(str); i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
			vowels++;
		}
		else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			consonant++;
		}
		else if(str[i]>='0' && str[i]<='9'){
			digits++;
		}
		else if(str[i] == ' '){
			space++;
		}
		else{
			symbols++;
		}
	}
	
	printf("Vowels : %d\n", vowels);
	printf("Consonants : %d\n", consonant);
	printf("Digits : %d\n", digits);
	printf("Space : %d\n", space);
	printf("Symbols : %d\n", symbols);
}
