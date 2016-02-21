// Room: /u/swordman/yangzhou/nandaj1.c

inherit ROOM;

void create ()
{
  set ("short", "ÄÏ´ó½Ö");
  set ("long", @LONG
ÄÏ´ó½ÖÄËÊÇ³ÇÀïµÄ·±»ªµØ¶Î£¬Ò»µ½ÍíÉÏ£¬Ò»ÅÉµÆºì¾ÆÂÌ£¬ÓÈÎªÈÈÄÖ¡£
Ğ¦Éù¡¢¸èÉù¡¢ÇÙÉù¡¢óïÉù£¬»ã³ÉÒ»Æ¬ËÍÈëÁËÄãµÄ¶ú¶ä£¬Äã²»½ûĞÄÔ³ÒâÂí£
ºÜÏë¾Í´ËÍ£²½ÏíÊÜÒ»·¬¡£±±±ßÊÇÒ»¸öÈÈÄÖµÄ¹ã³¡¡£¶«±ßÊÇÒ»¼ÒµêÆÌ£¬Ç½
ÉÏĞ´×ÅÒ»¸ö´ó´óµÄ¡°µ±¡±×Ö£¬×ĞÏ¸ÇãÌı¿ÉÒÔÌıµ½Ñ¹µÍµÄÌÖ¼Û»¹¼ÛµÄÉùÒô¡
Î÷±ßÔòÊÇÒ»Æ¬ĞúÏù£¬¼ĞÔÓ×Å¡°Ò»ÎåÒ»Ê®¡±µÄÊıÇ®Éù£¬Ô­À´ÄÇÊÇ·½Ô²Ç§Àï
Ö®ÄÚ×î´óµÄÒ»¼Ò¶Ä³¡¡£ 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/nanhai.c" : 1,
]));
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"dangpu",
  "west" : __DIR__"duchang.c",
  "north" : __DIR__"guangchang",
  "south" : __DIR__"nandaj2",
]));
  set("outdoors", "/u/swordman");
  set("light_up", 1);

  setup();
}
