// Room: /u/mool/workroom.c

inherit ROOM;
#include <ansi.h>;
void create()
{
	set("short", "[1;37mÍæ¾ßĞ¡ÆÜ[2;37;0m");
	set("long", @LONG
Ô½¹ıÉ½Áë, À´µ½ÁËÒ»´±Ğ¡Â¥Ç°.Ô­À´ÕâÀïÊÇÍæ¾ßĞÜµÄ¼Ò. Ì§Í·
ÍüÈ¥,Â¥ÉÏ´°Ç°Íæ¾ßĞÜĞÜË«ÊÖÍĞÕâÏÂ°ÍÒ£ÍûÔ¶·½,ÕıÔÚ³öÉñ.
      *      .         .                   .
    .                                      *         .         
                      *            *            .-.
        *        *         .                   (   )       
                    .                   *       '-'
  ,\//,.\//\/.         ,\/,   ,\/.//,                       
  //o\\/o//o\\ ,.,.,   //o\   /o\\o\\         *     .      
    |   |  |  /###/#\    |     |  |      .                 
    |   |  |  |' '|:|    |`=.='|  |                      
   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^""""""""""~~~~~~


LONG
	);
	set("valid_startroom", 1);
	set("exits", ([ /* sizeof() == 6 */
  "up" : "/u/islet/workroom.c",
  "out" : "/u/annie/workroom.c",
  "east" : "/d/huashan/qunxianguan",
  "down" : "/d/zhongzhou/shizhongxin",
  "west" : "/d/dali/center.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
