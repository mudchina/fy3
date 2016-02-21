// Room: /u/oldsix/room1/huan.c

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "ºş°¶");
	set("long", @LONG
ºşÃæÂÌ²¨µ´Ñú£¬Æ®×ÅÒ»Ò¶Ğ¡ÖÛ£¬Ò»¸öÂÌÉÀÉÙÅ®ÊÖÖ´Ë«½°£¬»º»º»®Ë®
¶øÀ´£¬¿ÚÖĞ³ª×ÅĞ¡Çú£¬ÌıÄÇÇú×ÓÊÇ£º
		İÕİÌÏãÁ¬Ê®ÇêÚé£¬Ğ¡¹ÃÌ°Ï·²ÉÁ«³Ù¡£
		ÍíÀ´ÅªË®´¬Í·Ì²£¬Ğ¦ÍÑºìÈ¹¹üÑ¼¶ù¡£
	¸èÉù½¿ÈáÎŞĞ°£¬»¶ÔÃ¶¯ĞÄ¡£ºş±ßµÄÁøÊ÷ÏÂµ´×ÅÒ»Ò¶[1;32mĞ¡´¬[2;37;0m¡£
LONG
	);
	set("objects",([
		__DIR__"npc/cui" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"baigongti",
]));
	set("item_desc",([
	"Ğ¡´¬" :"Ò»ÌõĞ¡´¬(xiaochuan)£¬´¬ÖĞ·Å×Å¶Ô½°¡£¿´Ñù×ÓÄãÕıºÃ×øµÃÏÂ¡£\n"
		+"ÄãÏëÁËÏë£¬²»Öª¸Ã²»¸ÃÉÏÈ¥£¨shang£©¡£\n",
	"xiaochuan" :"Ò»ÌõĞ¡´¬(xiaochuan)£¬´¬ÖĞ·Å×Å¶Ô½°¡£¿´Ñù×ÓÄãÕıºÃ×øµÃÏÂ¡£\n"
	+"ÄãÏëÁËÏë£¬²»Öª¸Ã²»¸ÃÉÏÈ¥£¨shang£©¡£\n",
		]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	set("chuilang_dest","/d/suzhou/qinyun/huan_2.c");
	set("where","ºşÖĞ");
	setup();
}
void init()
{
	add_action("do_shang","shang");
}
int do_shang()
{
	object me;
	me=this_player();
	message_vision(CYN"$NĞ¡ĞÄÒíÒíµÄÌ¤ÉÏ´¬Í·£¬Õı×¼±¸×øÏÂÀ´¡£\n"
		+RED"Ë­Öª½ÅÏÂÒ»¸ö²»ÎÈ£¬¡°ÆËÍ¨¡±Ò»Éù·­ÈëºşÖĞ¡£\n"
		+CYN"ĞÒ¿÷ÂäË®Ö®´¦Àëºş°¶²»Ô¶£¬$N¼±Ã¦ÅÀÉÏ°¶À´¡£\n"
		+"µ«ÊÇÈ«Éí¶¼ÒÑÊªÍ¸£¬ÀÇ±·²»¿°¡£\n"NOR,me);
return 1;
}
