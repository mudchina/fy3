// Room: /u/swordman/yangzhou/tingxiao
inherit ROOM;

void create ()
{
  set ("short", "ÌıÏôÔ°");
  set ("long", @LONG
ÕâÀïÊÇÂ·±ßµÄÒ»×ùĞ¡¾Æµê£¬Òò¿¿½ü»ÄÒ°£¬¾Æ¿ÍÒ²²»ÊÇºÜ¶à£¬µ«
ºÃÏó¿ÍµêµÄÀÏ°åºÜÓĞÇ®£¬»ï¼ÆÒ²¶¼ºÜ¾«Éñ¡£µ±½ÖÒ»¸ö¡°¾Æ¡±×ÖÕĞÅÆ£¬£
°×µ×ºÚ×Ö£¬·Ç³£ĞÑÄ¿¡£
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/txlaoban" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"jiedao4",
]));
  set("light_up", 1);

  setup();
}
