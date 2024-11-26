A quick and dirty tool to replace space intendation for tab indentation in your source or text files. It's pretty simple and carelessly written. I made it because I like everything to be tab indented but some people have a preference for spaces, so to make source code more readable for me in vim it does the job. 

If you want to use it, please make a copy of the file you input before using this in case the program freaks out :P

## spab

BUG!! If you pass the same file name to input file and output file expecting the original file will be rewritten, no. It deletes everything in the file. So if you're gonna use this set the input and output files to different stuff. 

```
usage: ./spab [input file] [output file] [amount of spaces to replace]
example: ./spab file.c file_tabbed.c 4
```

The minimum amount of spaces to replace is 2.

### build
	
Just run `make`. Default compiler is gcc, if you want to set another one, open makefile and set `CC` to you preferred C compiler. Then run make and a binary will be generated. You can copy that wherever or run it from wherever if you add a PATH entry.
