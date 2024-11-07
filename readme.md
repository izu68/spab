A quick tool to replace space intendation for tabs in your source or text files.
## spab

BUG!! If you pass the same file name to input file and output file expecting the original file will be rewritten, no. It deletes everything in the file. So if you're gonna use this set the input and output files to different stuff. 

```
usage: ./spab [input file] [output file]
example: ./spab file.c file_tabbed.c
```
	
To compile, open makefile and set CC to you preferred C compiler. Then run make and a spab binary will be generated. You can copy that anywhere or call it from anywhere if you add a PATH entry.

If your 'tab' formatting is greater than a sequence of 4 spaces, you can set how many spaces to replace in the main source file. Change the define SPACES to your desired number.
