// Room: /u/oldsix/room1/tingyu.c

inherit ROOM;

void create()
{
	set("short", "ÌýÓê¾Ó");
	set("long", @LONG
µ«¼û¡°ÌýÓê¾Ó¡±ËÄÃæ½ÔË®£¬´Ó´°ÖÐÍû³öÈ¥£¬ºþÉÏÑÌ²¨¾¡ÊÕÑÛµ×£¬»Ø¹ýÍ·À´£¬
¼û[1;32m×À×Ó[2;37;0mÉÏ±­µú¶¼ÊÇ¾«ÖÂµÄÏ¸´Å£¬ÄãÐÄÖÐÏÈºÈÁËÉù²É¡£
LONG
	);
	set("objects",([
		__DIR__"npc/woman" :1,
		]));
	set("item_desc",([
	"×À×Ó" : "Ò»ÕÅºìÄ¾°ËÏÉ×À(zhuozi)£¬¿´Ñù×ÓÍ¦ÖØµÄ£¬ËÆºõ¿ÉÒÔÒÆ¶¯(yi)¡£\n",
	"zhuozi":"Ò»ÕÅºìÄ¾°ËÏÉ×À£¬¿´Ñù×ÓÍ¦ÖØµÄ£¬ËÆºõ¿ÉÒÔÒÆ¶¯(yi)¡£\n",
		]));
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ru4",
]));
	set("no_clean_up", 0);
	set("chuilang_dest","/d/suzhou/canhe/canhe.c");
	set("where","´°Íâ");
	setup();
}
void init()
{
	add_action("do_move","yi");
}
int do_move(string str)
{
	object me,npc;
	me=this_player();
	if(!str)	{
		write("ÄãÒªÒÆÊ²Ã´¶«Î÷£¿\n");
		return 1;
			}
	if(str!="zhuozi"&&str!="×À×Ó")   {
		write("Ã»ÓÐÕâÑù¶«Î÷¡£\n");
		return 1;
			}
	if(this_object()->query("exits/down"))	{
		message_vision("$NÒÆ¶¯ÁËÏÂ×À×Ó£¬½á¹ûÃ»Ê²Ã´·´Ó¦¡£\n",me);
		return 1;
	}
	if(!present("a zhu",this_object()))	{
	        message_vision("$NÊ¹³öÁË³ÔÄÌµÄ¾¢£¬Ò²Ã»ÄÜ°Ñ×À×ÓÒÆ¶¯·ÖºÁ¡£\n"
        +"ËÆºõÕâÕÅ×À×ÓÖÐ°µ²Ø×ÅÊ²Ã´»ú¹Ø¡£\n",me);
    return 1;
	}
            message_vision("°¢ÖìÐ¦×Å¶Ô$NËµµÀ£ºÎÒÀ´°ïÄã°É¡£\n"
                        +"ËµÍê£¬ÉìÊÖÔÚÇ½ÉÏ²»ÖªÊ²Ã´µØ·½°´ÁËÒ»ÏÂ¡£\n"
                        +"¶úÖÐÖ»Ìý¼û¡°¿¨¿¨¡±¼¸ÉùÇáÏì£¬×À×ÓÒÑÒÆµ½Ò»±ß¡£\n",me);

    this_object()->set("exits/down","/d/suzhou/taihu/shuilu1.c");
    return 1;
}
int valid_leave(object me,string str)
{
	if(str=="down") {
	write("Ö»ÌýµÃ¡°¿¨¿¨¡±¼¸ÉùÇáÏì£¬×À×ÓÒÑ»Øµ½Ô­Î»¡£\n");
		this_object()->delete("exits/down");
			}
	return 1;
}
