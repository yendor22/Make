lib_LTLIBRARIES = libExample.la
libExample_la_SOURCES = func1.c func2.c

bin_PROGRAMS = testprog

testprog_SOURCES = main.c
testprog_LDADD = libExample.la

ACLOCAL_AMFLAGS = -I m4
