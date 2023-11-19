clean:
	find . -name build -type d -print0|xargs -0 rm -rf --
	find . -name *.exe -type f -print0|xargs -0 rm -rf --
	find . -name *.out -type f -print0|xargs -0 rm -rf --
	find . -name *.o -type f -print0|xargs -0 rm -rf --

.phony: clean
