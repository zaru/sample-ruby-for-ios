/* Automatically generated from enc/encinit.c.erb
 * Do not edit.
 */
/* Copyright 2012 Google Inc. Some Rights Reserved.
 * Author: yugui@google.com (Yugui Sonoda)
 */
#include <stdio.h>

#define init(func, name) {	\
    extern void func(void);	\
    ruby_init_ext(name, func);	\
}

#define init_enc(name) init(Init_##name, "enc/"#name".so")
#define init_trans(name) init(Init_trans_##name, "enc/trans/"#name".so")
#define provide(func, name) { \
    extern void Init_##func(void); \
    Init_##func(); \
    rb_provide(name".so"); \
}

void ruby_init_ext(const char *name, void (*init)(void));
void rb_provide(const char *feature);

void
Init_enc(void)
{
    provide(encdb, "encdb");
    init_enc(big5);
    init_enc(cp949);
    init_enc(emacs_mule);
    init_enc(euc_jp);
    init_enc(euc_kr);
    init_enc(euc_tw);
    init_enc(gb2312);
    init_enc(gb18030);
    init_enc(gbk);
    init_enc(iso_8859_1);
    init_enc(iso_8859_2);
    init_enc(iso_8859_3);
    init_enc(iso_8859_4);
    init_enc(iso_8859_5);
    init_enc(iso_8859_6);
    init_enc(iso_8859_7);
    init_enc(iso_8859_8);
    init_enc(iso_8859_9);
    init_enc(iso_8859_10);
    init_enc(iso_8859_11);
    init_enc(iso_8859_13);
    init_enc(iso_8859_14);
    init_enc(iso_8859_15);
    init_enc(iso_8859_16);
    init_enc(koi8_r);
    init_enc(koi8_u);
    init_enc(shift_jis);
    init_enc(utf_16be);
    init_enc(utf_16le);
    init_enc(utf_32be);
    init_enc(utf_32le);
    init_enc(windows_31j);
    init_enc(windows_1250);
    init_enc(windows_1251);
    init_enc(windows_1252);

    provide(transdb, "trans/transdb");
    init_trans(big5);
    init_trans(chinese);
    init_trans(ebcdic);
    init_trans(emoji);
    init_trans(emoji_iso2022_kddi);
    init_trans(emoji_sjis_docomo);
    init_trans(emoji_sjis_kddi);
    init_trans(emoji_sjis_softbank);
    init_trans(escape);
    init_trans(gb18030);
    init_trans(gbk);
    init_trans(iso2022);
    init_trans(japanese);
    init_trans(japanese_euc);
    init_trans(japanese_sjis);
    init_trans(korean);
    init_trans(single_byte);
    init_trans(utf8_mac);
    init_trans(utf_16_32);
}
