#include "ruby/ruby.h"

#define init(func, name) {	\
    extern void func(void);	\
    ruby_init_ext(name, func);	\
}

void ruby_init_ext(const char *name, void (*init)(void));

void Init_ext(void)
{
    init(Init_bigdecimal, "bigdecimal.so");
    init(Init_escape, "cgi/escape.so");
    init(Init_continuation, "continuation.so");
    init(Init_coverage, "coverage.so");
    init(Init_date_core, "date_core.so");
    init(Init_dbm, "dbm.so");
    init(Init_digest, "digest.so");
    init(Init_bubblebabble, "digest/bubblebabble.so");
    init(Init_md5, "digest/md5.so");
    init(Init_rmd160, "digest/rmd160.so");
    init(Init_sha1, "digest/sha1.so");
    init(Init_sha2, "digest/sha2.so");
    init(Init_etc, "etc.so");
    init(Init_fcntl, "fcntl.so");
    init(Init_fiber, "fiber.so");
    init(Init_console, "io/console.so");
    init(Init_nonblock, "io/nonblock.so");
    init(Init_wait, "io/wait.so");
    init(Init_generator, "json/ext/generator.so");
    init(Init_parser, "json/ext/parser.so");
    init(Init_complex, "mathn/complex.so");
    init(Init_rational, "mathn/rational.so");
    init(Init_nkf, "nkf.so");
    init(Init_objspace, "objspace.so");
    init(Init_pathname, "pathname.so");
    init(Init_psych, "psych.so");
    init(Init_pty, "pty.so");
    init(Init_cparse, "racc/cparse.so");
    init(Init_sizeof, "rbconfig/sizeof.so");
    init(Init_readline, "readline.so");
    init(Init_ripper, "ripper.so");
    init(Init_sdbm, "sdbm.so");
    init(Init_socket, "socket.so");
    init(Init_stringio, "stringio.so");
    init(Init_strscan, "strscan.so");
    init(Init_syslog, "syslog.so");
    init(Init_thread, "thread.so");
    init(Init_zlib, "zlib.so");
}
