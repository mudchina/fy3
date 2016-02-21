// Room: /d/jinling/shizhong.c

inherit ROOM;

void create()
{
	set("short", "ÊĞÖĞĞÄ");
	set("long", @LONG
ºöÈ»ÄãÀ´µ½Ò»¸öºÜ´óµÄ¹ã³¡£¬¹ã³¡ÖĞĞÄÓĞÒ»¿é¸æÊ¾ÅÆ(gaoshi),ÅÔ±ßÓĞ¼¸
¸öÎÀ±øÊØ×Å£®´ËÍâ¹ã³¡ÉÏ¼¸ºõÃ»ÈË£®¶«Î÷Á½ÃæºÏ³ÆÉÏÁÖµÀ£®¶«ÄÏÃæÓĞÒ»¼Ò
¿ÍÕ»£¬¿´ÉÏÈ¥Í¦ºÀ»ªµÄ£¡
LONG
	);
set("valid_startroom",1);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "gaoshi" : "[1;33mÓÉÓÚ°ïÅÉË½¶·£¬¾ªÈÅ°ÙĞÕ¡£ÎªÁË´ó¼ÒµÄ°²È«£¬ÏÖÊµĞĞÏü½û¡£
Íû´ó¼ÒÍíÉÏ²»Òª³öÃÅ£¬Ğ»Ğ»ºÏ×÷!! 
[2;37;0m",
]));
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 5 */
  "north" : __DIR__"changjie3.c",
  "southeast" : __DIR__"ke.c",
  "south" : __DIR__"changjie2.c",
  "east" : __DIR__"shanglin7.c",
  "west" : __DIR__"shanglin1.c",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/chengwei.c" : 4,
  __DIR__"npc/yinjiaweishi.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
