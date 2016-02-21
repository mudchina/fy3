// Room: /u/swordman/yangzhou/jiulou.c

inherit ROOM;

void create ()
{
  set ("short", "ÑïÖİ¾ÆÂ¥");
  set ("long", @LONG
Õâ¼Ò¿ÍÕ»½ô¿¿ÑïÖİ³ÇÖĞĞÄ£¬ËùÒÔÉúÒâ·Ç³£ĞËÂ¡¡£¼æÖ®¼ÛÇ®µÍÁ®£¬
¸üÊÇ³ÉÁËÍâµØÓÎ¿ÍÂä½ÅµÄÊ×Ñ¡¡£Â¶Ìì°ÚÁËÆß°ËÕÅ×À×Ó£¬Èı½Ì¾ÅÁ÷ÈËµ
ÎïÔÚ´Ë½ø½ø³ö³ö£¬ÂçÒï²»¾ø£¬¼¸¸öÅÜÌÃµÄĞ¡¶şÀ´À´»Ø»ØÕĞ´ı×ÅËÄ·½
À´¿Í¡£¶şÂ¥ÉÏÊÇ¿Í·¿¡£
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"nandaj2",
  "up" : __DIR__"sleeproom",
]));
  set("no_magic", 1);
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 3 */
  __DIR__"npc/chike" : 1,
  __DIR__"npc/gou.c" : 1,
  __DIR__"npc/xiaoer.c" : 1,
]));

  setup();
}
