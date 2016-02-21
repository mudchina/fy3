// Room: /u/oldsix/room1/huan_2.c

inherit ROOM;

void create()
{
	set("short", "ºþ°¶");
	set("long", @LONG
¼«Ä¿Ô¶Ì÷£¬Ö»¼ûÑÌ²¨ºÆÃì£¬Ô¶Ë®½ÓÌì£¬Íû²»µ½Í·¡£°¶±ß²»Ô¶´¦ÓÐÒ»×ùËÉÊ÷
Ö¦³ÉµÄÄ¾ÌÝ£¬´¹ÏÂÀ´Í¨ÏòË®Ãæ¡£Ò»Ö»[1;32mÐ¡´¬[2;37;0mÏµÔÚÊ÷Ö¦Ö®ÉÏ¡£ºöÌýµÃÁøÖ¦ÉÏÒ»Ö»Ð¡
Äñ¡°É¯É¯¶¼É¯¡±µÄ½ÐÁËÆðÀ´£¬ÉùÒôÇå´à¡£
LONG
	);
	set("item_desc",([
		"Ð¡´¬" : "Ò»ÌõÐ¡´¬(xiaochuan)£¬´¬ÖÐ·Å×Å¶Ô½°¡£¿´Ñù×ÓÄãÕýºÃ×øµÃÏÂ¡£\n"
			+"Äã¿¼ÂÇÁËÒ»ÏÂ£¬µ¹µ×Òª²»ÒªÉÏ´¬(boat)¡£\n",
		"xiaochuan" :"Ò»ÌõÐ¡´¬£¬´¬ÖÐ·Å×Å¶Ô½°¡£¿´Ñù×ÓÄãÕýºÃ×øµÃÏÂ¡£\n"
			+"Äã¿¼ÂÇÁËÒ»ÏÂ£¬µ¹µ×Òª²»ÒªÉÏ´¬(boat)¡£\n",
		]));
	set("exits", ([ /* sizeof() == 1 */
		"up":__DIR__"tuoman",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
void init()
{
	object me;
	me=this_player();
	add_action("do_boat","boat");
}
int do_boat()
{
	object me;
	me=this_player();
	message_vision("$NÐ¡ÐÄÒíÒíµÄÉÏÁËÐ¡´¬£¬Õâ´ÎÃ»ÓÐ·¢ÉúÒâÍâ¡£\n"
			+"$NÄÃÆðË«½°£¬ÂýÂýµÄ°ÑÐ¡´¬»®(hua)µ½ÁËºþÖÐ¡£\n"
			+"Ð¡´¬Àë°¶Ô½À´Ô½Ô¶¡£¡£¡£\n",me);
	me->move("/d/suzhou/taihu/n2.c");
	return 1;
}
