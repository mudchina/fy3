// Room: /u/xxy/room/hongchun
inherit ROOM;

void create()
{
  set ("short", "ºé´»Æº");
  set ("long", @LONG
µÇÉÏÉ½ÆÂ,Õ¹ÏÖÔÚÃæÇ°µÄÊÇÒ»´óÆ¬Æ½ÕûµÄÊ¯µØ,×ó±ßÓĞÈı¿Ã¸ß´óµÄºé´
´»¹ÅÊ÷,´Ë´¦ËÄ¼¾Èç´º,Çå¾»°²Ú×,Â¥¸óÈËÓ°³£¸¡ÏÖÓÚÃ£Ã£ÁÖº£ºÍÃÉÃÉÔÆÎí
Ö®ÖĞ.Éî¹ÈÖĞÒşÒş´«À´ÕóÕóÌÎÉù,±Ì¿ÕÖĞ»ØĞı×ÅÉùÉùÄñÓï.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"jushich",
  "northup" : __DIR__"jinding",
]));
set("outdoors","/d/emei");
  setup();
  replace_program(ROOM);

}
