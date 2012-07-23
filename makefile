libffplaylib.so: CFLAGS+=-fPIC -O2 -shared
libffplaylib.so: ffplaylib.c cmdutils.c
	$(CC) $(CFLAGS) -o $@ $^