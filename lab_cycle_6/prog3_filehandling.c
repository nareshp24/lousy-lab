#include <stdio.h>
#include <stdlib.h>	// for exit()

#define MAXCHAR 1000

void readInputAndWrite();
void readContentsAndDisplay();
void copyContents();
void randomNumberGenerator();


int main() 
{	
	char *sourcefilename = "sourcefile.txt";
	char *targetfilename = "targetfile.txt";


		printf("\nRead Input to write to file\n");
		readInputAndWrite(sourcefilename);		// reads input from user and writes to file named textfile.txt
	
		printf("\nReading from file and displaying\n");
		readContentsAndDisplay(sourcefilename);		// reads content from existing file and displays on screen
		
		printf("\nCopying from source file to target file\n");
		copyContents(sourcefilename, targetfilename);
		
		printf("\nDisplaying contents of target file\n");
		readContentsAndDisplay(targetfilename);

		printf("\nWriting random numbers to randomNumber.txt\n");
		randomNumberGenerator();


	return 0;
}

void readInputAndWrite(char *filename)
{
	FILE *fptr;		// fptr is a file pointer. File pointers are necessary for file handling
	char InputString[MAXCHAR];
	
		// read input from user
		printf("\nEnter your text: \n");
		scanf("%[^\n]s", InputString);		// read user input until ENTER is pressed

		// write to file
		fptr = fopen(filename, "w");	// w stands for open file in write mode
		fputs(InputString, fptr);		// write to file
		fclose(fptr);				// close file

}

void readContentsAndDisplay(char *filename)
{
	FILE *fptr;
	char c;

		// open file
		fptr = fopen(filename, "r");	// r stands for open file in read mode
		if (fptr == NULL)		// fopen return NULL if file can't be opened
       		{
			printf("\nCannot open file\n");
			exit(0);
		}

		// read contents from file character by character
		c = fgetc(fptr);	
		while (c != EOF)
		{
			printf("%c", c);
			c = fgetc(fptr);
		}	
		printf("\n");

		// close file
		fclose(fptr);

}

void copyContents(char *sourcefile, char *targetfile)
{
	FILE *sourceptr, *targetptr;
	char c;
		
		// open source file to read
		sourceptr = fopen(sourcefile, "r");
		if(sourceptr == NULL)
		{	
			printf("\nUnable to open source file\n");
			exit(0);
		}
		
		// open target file to write
		targetptr = fopen(targetfile, "w");
		if(targetptr == NULL)
		{	
			fclose(sourceptr);
			printf("\nUnable to open target file\n");
			exit(0);
		}
		
		// read from source character by character and write to target
		c = fgetc(sourceptr);
		while (c != EOF)
		{
			fputc(c, targetptr);
			c = fgetc(sourceptr);
		}
		printf("\nFile copied successfully!\n");

		// close both files
		fclose(sourceptr);
		fclose(targetptr);

}

void randomNumberGenerator()
{
	FILE *fptr;
	int i;
	
		fptr = fopen("randomNumber.txt", "a"); 		// a stands for open file in append mode
		if (fptr == NULL)
		{
			printf("\nCan't open file\n");
			exit(0);
		}
	
		for (i = 0; i < 1000; i++)
			fprintf(fptr, "%d\n", rand());
		
		fclose(fptr);


}
