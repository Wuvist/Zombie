# Overview

This algorithm is developed originally for [Google Code Jam](https://code.google.com/codejam/contest/2974486/dashboard#s=p1).

I find it interesting to use it as a performance of massive floating point computation in various languages; thus come with this project.

The number set `C = 37` `F = 7` `X = 54500000000` is randomly chosen by [Du Xiao Feng](https://github.com/duxiaofeng-github).

# Test Result

Please note that benchmark result could be `very misleading`.

These are only *simple test result* from my computer (i7, Mac), it doesn't imply that one language is faster than the other.

* py:  341.60s
	* pypy:  9.401s
* go:    6.184s
* java:  6.239s
* C:     6.22s
* node: 14.091s
* php:  88.41s
* lua:  316.60s
  * luajit:  6.35s
* C# mono: 6.240s
* C++ TMP: failed to compile, but if it does, it should take 0s in theory.
* OCaml: 76s
  * After compiled: 6.229s

Feel free to run the codes on your machine or send PR for new language. 

# Why Zombie?

Instead of "Cookie" as described in the question, I (Wuvist) find that it's more similar to gaining sunshine in the popular game [Plant Vs Zombie](http://www.popcap.com/plants-vs-zombies).

# Disclaimer

This project created just for fun. It's not related to Google Code Jam / PopCap in any ways.
